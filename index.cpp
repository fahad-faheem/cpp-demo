#include <iostream>
#include <string>

int main()
{

std::string forName;
int forAge;
char forBloodtype;


std::cout << "Enter your Name: " << std::endl;
std::cin >> forName;

std::cout << "Enter your age: " << std::endl;
std::cin >> forAge;

std::cout << "Enter your blood type: " << std::endl;
std::cin >> forBloodtype;

std::cout << "Your name is " << forName 
            << ", Your age is " << forAge 
            << ", And " << forBloodtype << " is your blood group";
            return 0;

}