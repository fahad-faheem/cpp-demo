#include <iostream>
#include <string>

int main(){

std::string Name;
int Rollnumber;
char Grade;
float Physics;
float Maths;
float English;
float Urdu;
double Percentage;

std::cout << "Enter you name: " << std::endl;
std::cin >> Name;
std::cout << "Enter you Roll number: " << std::endl;
std::cin >> Rollnumber;
std::cout << "Enter your grade: " << std::endl;
std::cin >> Grade;
std::cout << "Enter your Physics Marks: " << std::endl;
std::cin >> Physics;
std::cout << "Enter your Math Marks: " << std::endl;
std::cin >> Maths;
std::cout << "Enter your English Marks: " << std::endl;
std::cin >> English;
std::cout << "Enter your Urdu Marks: " << std::endl;
std::cin >> Urdu;

std::cout << "Your name is " << Name << ", Your Roll number is " << Rollnumber << ", And your grade is " 
<< Grade << ", At the end I'm so impressed that your total number is " << Physics + Maths + English + Urdu << 
", Really Good performance!" << std::endl;


return 0;

}