#include "person.h"


Person::Person(){
	this->name = "";
	this->gender = "";
	this->age = 0;
}

Person::~Person(){
	
}

void Person::printPerson(){
	std::cout << this->name << " have " << this->age << " years old and is  " << this->gender << std::endl;
}

void Person::printName(){
	std::cout << this->name << std::endl;
}

void Person::editName(std::string name){
	this->name = name;
}

void Person::editGender(std::string gender){
	this->gender = gender;
}


void Person::editAge(int age){
	this->age = age;
}
