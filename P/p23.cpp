#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Room Class
class Room {
private:
    int roomNumber;
    string roomType;
    bool isAvailable;

public:
    // Constructor
    Room(int number, string type) {
        roomNumber = number;
        roomType = type;
        isAvailable = true;
    }

    // Display Room Info
    void displayInfo() const {
        cout << "Room Number: " << roomNumber << "\n";
        cout << "Room Type: " << roomType << "\n";
        cout << "Availability: " << (isAvailable ? "Available" : "Booked") << "\n\n";
    }

    // Check room availability
    bool checkAvailability() const {
        return isAvailable;
    }

    // Book a room
    void bookRoom() {
        isAvailable = false;
    }

    // Release a room
    void releaseRoom() {
        isAvailable = true;
    }

    int getRoomNumber() const {
        return roomNumber;
    }
};

// Guest Class
class Guest {
private:
    int guestId;
    string guestName;
    vector<int> bookedRooms;

public:
    // Constructor
    Guest(int id, string name) {
        guestId = id;
        guestName = name;
    }

    // Display Guest Info
    void displayInfo() const {
        cout << "Guest ID: " << guestId << "\n";
        cout << "Guest Name: " << guestName << "\n";
        cout << "Booked Rooms: ";
        if (bookedRooms.empty()) {
            cout << "None\n";
        } else {
            for (int roomNumber : bookedRooms) {
                cout << roomNumber << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    // Book a room
    void bookRoom(int roomNumber) {
        bookedRooms.push_back(roomNumber);
    }

    // Release a booked room
    void releaseRoom(int roomNumber) {
        for (size_t i = 0; i < bookedRooms.size(); ++i) {
            if (bookedRooms[i] == roomNumber) {
                bookedRooms.erase(bookedRooms.begin() + i);
                break;
            }
        }
    }

    int getGuestId() const {
        return guestId;
    }
};

// Hotel Class
class Hotel {
private:
    vector<Room> rooms;
    vector<Guest> guests;

public:
    // Add a new room to the hotel
    void addRoom() {
        int number;
        string type;
        cout << "Enter Room Number: ";
        cin >> number;
        cin.ignore();  // to clear buffer
        cout << "Enter Room Type (Single/Double/Suite): ";
        getline(cin, type);
        rooms.emplace_back(number, type);
        cout << "Room added successfully!\n\n";
    }

    // Add a new guest to the hotel
    void addGuest() {
        int id;
        string name;
        cout << "Enter Guest ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Guest Name: ";
        getline(cin, name);
        guests.emplace_back(id, name);
        cout << "Guest added successfully!\n\n";
    }

    // Book a room for a guest
    void bookRoomForGuest() {
        int guestId, roomNumber;
        cout << "Enter Guest ID: ";
        cin >> guestId;
        cout << "Enter Room Number: ";
        cin >> roomNumber;

        // Find guest and room
        bool guestFound = false, roomFound = false;
        for (auto& guest : guests) {
            if (guest.getGuestId() == guestId) {
                guestFound = true;
                for (auto& room : rooms) {
                    if (room.getRoomNumber() == roomNumber && room.checkAvailability()) {
                        roomFound = true;
                        room.bookRoom();
                        guest.bookRoom(roomNumber);
                        cout << "Room " << roomNumber << " successfully booked for Guest " << guestId << "!\n\n";
                        break;
                    }
                }
                break;
            }
        }

        if (!guestFound) {
            cout << "Guest not found!\n";
        } else if (!roomFound) {
            cout << "Room not available or invalid room number.\n";
        }
    }

    // Release a room
    void releaseRoom() {
        int guestId, roomNumber;
        cout << "Enter Guest ID: ";
        cin >> guestId;
        cout << "Enter Room Number: ";
        cin >> roomNumber;

        bool guestFound = false, roomFound = false;
        for (auto& guest : guests) {
            if (guest.getGuestId() == guestId) {
                guestFound = true;
                for (auto& room : rooms) {
                    if (room.getRoomNumber() == roomNumber) {
                        roomFound = true;
                        room.releaseRoom();
                        guest.releaseRoom(roomNumber);
                        cout << "Room " << roomNumber << " successfully released by Guest " << guestId << "!\n\n";
                        break;
                    }
                }
                break;
            }
        }

        if (!guestFound) {
            cout << "Guest not found!\n";
        } else if (!roomFound) {
            cout << "Room not found.\n";
        }
    }

    // Display all rooms
    void displayRooms() const {
        if (rooms.empty()) {
            cout << "No rooms available.\n";
            return;
        }
        for (const auto& room : rooms) {
            room.displayInfo();
        }
    }

    // Display all guests
    void displayGuests() const {
        if (guests.empty()) {
            cout << "No guests available.\n";
            return;
        }
        for (const auto& guest : guests) {
            guest.displayInfo();
        }
    }
};

// Main Function
int main() {
    Hotel hotel;
    int choice;

    do {
        cout << "========== Hotel Reservation System ==========\n";
        cout << "1. Add Room\n";
        cout << "2. Add Guest\n";
        cout << "3. Display All Rooms\n";
        cout << "4. Display All Guests\n";
        cout << "5. Book Room for Guest\n";
        cout << "6. Release Room\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hotel.addRoom();
                break;
            case 2:
                hotel.addGuest();
                break;
            case 3:
                hotel.displayRooms();
                break;
            case 4:
                hotel.displayGuests();
                break;
            case 5:
                hotel.bookRoomForGuest();
                break;
            case 6:
                hotel.releaseRoom();
                break;
            case 7:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
