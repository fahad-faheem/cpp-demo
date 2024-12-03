#include <iostream>
#include <string>

using namespace std;

int main () {
    string TeaType;
    string Question;
    string Time;

    // Greet the user and ask their question
    cout << "Hi, How can I help you today?" << endl;
    getline(cin, Question);

    // Check if the user asks "Why you've closed?"
    if (Question == "Why you've closed?") {
        cout << "Go home or I'll put you asleep." << endl;
       
    }
    // Check if the user asks "Is the shop is open?"
    else if (Question == "Is the shop is open?") {
        cout << "What time is now?" << endl;
        getline(cin, Time);

        // Nested if condition inside Question if"
    
        if (Time == "6AM" || Time == "7AM" || Time == "8AM" || Time == "9AM" || Time == "10AM" || 
            Time == "11AM" || Time == "12PM" || Time == "1PM" || Time == "2PM" || Time == "3PM" || 
            Time == "4PM" || Time == "5PM" || Time == "6PM" || Time == "7PM" || Time == "8PM") {
            cout << "The shop is open." << endl;
        } else if (Time == "9PM" || Time == "10PM" || Time == "11PM" || Time == "12AM" || Time == "1AM" || 
                   Time == "2AM" || Time == "3AM" || Time == "4AM" || Time == "5AM") {
            cout << "Sorry, it's so late go to bed!!" << endl;
        } else {
            cout << "Please tell the time like (1AM, 2AM, 3AM, etc...)" << endl;
        }
    }
    // If the question doesn't match either, ask for a valid question
    else {
        cout << "Please ask a valid question." << endl;
    }

    return 0;
}

