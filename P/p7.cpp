#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Seed the random number generator with the current time
    int randomNumber = std::rand() % 100 + 1; // Generate a number between 1 and 100
    int userGuess = 0;

    std::cout << "Welcome to the Guessing Game!" << std::endl;
    std::cout << "I have picked a number between 1 and 100. Can you guess it?" << std::endl;

    while (userGuess != randomNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        if (userGuess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (userGuess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed it!" << std::endl;
        }
    }

    return 0;
}
