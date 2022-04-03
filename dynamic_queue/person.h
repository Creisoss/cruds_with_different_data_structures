#ifndef PERSON
#define PERSON
#include <iostream>
#include <string>


class Person{
	
	private:
		std::string name;
		std::string gender;
		int age;
	public:
		Person();
		~Person();
		void printPerson();
		void printName();
		void editName(std::string name);
		void editGender(std::string gender);
		void editAge(int age);
};


#endif
