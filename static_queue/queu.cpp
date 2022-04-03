#include "queue.h"

Queue::Queue(int max_size){
	first = nullptr;
    last = nullptr;
	current_size = 0;
	this->max_size = max_size;
}

Queue::~Queue(){}
void Queue::enter_queue(std::string name, std::string gender, int age){

	if(this->current_size >= this->max_size){
		std::cout << "The queue is full!" << std::endl;
		getchar();
		return;
	}
	node* n = new node;

	n->value.editName(name);
	n->value.editGender(gender);
	n->value.editAge(age);

	if(current_size == 0){
        first = n;
        last = n;
		n->next = nullptr;
	}else{
		last->next = n;
        last = n;
	}	
	current_size++;
}

void Queue::exit_queue(){
	if (current_size == 0){
		std::cout << "The queue is empty" << std::endl;
		return;
	}
	node* n = new node;
	n = first->next;
    delete first;
    first = n;
	current_size--;	
}

void Queue::print_queue(){
	if(current_size == 0){
	
		std::cout << "The queue is empty" << std::endl;
		return;
	}
	node* n = new node;
	n = first;
	for(int i = 0; i < current_size;i++){
		std::cout << i << " - ";
		n->value.printPerson();
		n = n->next;
	}
}

void Queue::edit_first(){
	if(current_size == 0){
		std::cout << "The queue is empty" <<std::endl;
		return;
	}
	std::string name;
	std::string gender;
	int age;

	std::cout << "Write the new name of the first: ";
	getline(std::cin, name);
	std::cin.sync();

	std::cout << "Write the new gender of " << name << ": ";
	getline(std::cin, gender);
	std::cin.sync();

	std::cout << "write the new age of " << name << ": ";
	std::cin >> age;		

	first->value.editName(name);
	first->value.editGender(gender);
	first->value.editAge(age);
}
