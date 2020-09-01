//Task 2

#include <iostream>
#include <string>

std::string name;
int age;
std::string yesno;

int main()
{
	std::cout << "Whats's your name? ";
	std::getline(std::cin, name);
	std::cout << "And how old are you? ";
	std::cin >> age;
	std::cout << std::endl << "So... do you like coffee? (yes/no) ";
	std::cin >> yesno;
	if (yesno == "yes") {
		std::cout << "Ok, so your name is " << name << ", you're " << age << " years old, and it seems you like coffee!";
	}
	else if (yesno == "no") {
		std:: cout << "Ok, so your name is " << name << ", you're " << age << " years old, and it doesn't seem you like coffee!";
	}
	else {
		std::cout <<  "Ok, so your name is " << name << ", you're " << age << " years old, and... I don't understand your answer.";
	}
}