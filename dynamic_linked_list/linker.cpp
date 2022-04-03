#include "linker.h"


List::List(){
	head = nullptr;
	tail = nullptr;
	size = 0;
}

List::~List(){}


void List::append(std::string name, std::string gender, int age){
	node* n = new node;
	n->value.editName(name);
	n->value.editGender(gender);
	n->value.editAge(age);
	if(size == 0){
		head = n;
		tail = n;
		n->next = nullptr;
	}else{
		tail->next = n;
		tail = n;
	}

	size++;	
}

void List::printList(){
	if(size == 0){
		return;
	}
	node* n = new node;
      	n = head;
	for(int i = 0; i < size; i++){
		std::cout << i << " - " ;
	       	n->value.printName();
		n = n->next;
	}
}
void List::printPersonComplete(int index){
	if(size == 0){
		std::cout << "The list is empty" << std::endl; 
		return;
	}
	if( index+1 > size || index < 0){
		std::cout << "Index out of range" << std::endl;
		return;
	}
	node* n = new node;
	n = head;
	for(int i = 0; i < size; i++){
		if(i == index){
			n->value.printPerson();		
			return;
		}
		n = n->next;
	}

}

void List::editPerson(int index){
	if(size == 0){
		std::cout << "The list is empty" << std::endl;
		return;
	}
	if( index + 1 > size || index < 0){
		std::cout << "Index out of range" << std::endl;
		return;
	}
	node* n = new node;
	n = head;
	for(int i = 0; i < size; i++){
		if(i == index){
			std::cin.get();
			std::string name;
			std::string gender;
			int age;
			std::cout << "Type the new name of: ";
			n->value.printName();
			getline(std::cin, name);
			std::cin.sync();
			std::cout << "Type the new gender of: ";
			n->value.printName();
			getline(std::cin, gender);
			std::cin.sync();
			std::cout << "How old is: ";
			n->value.printName();
			std::cin >> age;
			std::cin.get();
			n->value.editName(name);
			n->value.editGender(gender);
			n->value.editAge(age);
			return;
		}
		n = n->next;
	}
}

void List::deletePerson(int index){
	if (size == 0){
		std::cout << "The list is empty" << std::endl;
		return;
	}
	if(index + 1 > size || index < 0){
		std::cout << "Index out of range" << std::endl;
		return;
	}
	node* n = new node;
	n = head;
	node* previous = new node;
	for(int i = 0;i < size; i++){
		if(i == index){
			size--;
			if(n == tail){
				tail = previous;
				delete  n;
				return;
			}
			else if(n == head){
				head = n->next;
				delete n;
				return;
			}else{
				previous->next = n->next;
				delete n;
			}
		
			
	
		}
		previous = n;
		n = n->next;

	}

}
