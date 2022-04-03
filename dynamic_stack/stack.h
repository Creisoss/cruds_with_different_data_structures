#ifndef STACK
#define STACK
#include "person.h"


struct node{
	Person value;
	node* previous;
};

class Stack{

	private:
		int current_size;
		node* top;
	public:
		Stack();
		~Stack();
		void unstack();
		void stack_up(std::string name, std::string gender, int age);
		void print_stack();
		void edit_top();
};




#endif
