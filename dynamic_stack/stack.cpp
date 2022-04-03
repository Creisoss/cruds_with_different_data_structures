#include "stack.h"

Stack::Stack(){
	top = nullptr;
	current_size = 0;
}

Stack::~Stack(){}

void Stack::stack_up(std::string name, std::string gender, int age){

	node* n = new node;

	n->value.editName(name);
	n->value.editGender(gender);
	n->value.editAge(age);

	if(current_size == 0){
		top = n;
		n->previous = nullptr;
	}else{
		n->previous = top;
		top = n;
	}	
	current_size++;
}

void Stack::unstack(){
	if (current_size == 0){
		std::cout << "The stack is empty" << std::endl;
		return;
	}
	node* n = new node;
	n = top->previous;
	delete top;
        top = n;
	current_size--;	
}

void Stack::print_stack(){
	if(current_size == 0){
	
		std::cout << "The stack is empty" << std::endl;
		return;
	}

	node* n = new node;

	n = top;
	for(int i = current_size; i >  0;i--){
		std::cout << i << " - ";
		n->value.printPerson();
		n = n->previous;
	}
}

void Stack::edit_top(){
	if(current_size == 0){
		std::cout << "The stack is empty" <<std::endl;
		return;
	}
	std::string name;
	std::string gender;
	int age;

	std::cout << "Write the new name of the top: ";
	getline(std::cin, name);
	std::cin.sync();

	std::cout << "Write the new gender of " << name << ": ";
	getline(std::cin, gender);
	std::cin.sync();

	std::cout << "write the new age of " << name << ": ";
	std::cin >> age;		

	top->value.editName(name);
	top->value.editGender(gender);
	top->value.editAge(age);
}
