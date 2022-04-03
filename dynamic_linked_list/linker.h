#ifndef LINKER
#define LINKER
#include "person.h"

struct node{
	
	Person value;
	node* next;
};

class List{

	private:
		node* head;
		node* tail;
		int size;
	public:
		List();
		~List();
		void append(std::string name, std::string gender, int age);	// Add a new person to the end of the list
		void printPersonComplete(int index);			  	// Print all the info about a person in the list
		void printList();						// Print the entire list but with less information	
		void editPerson(int index);
		void deletePerson(int index);

};


#endif
