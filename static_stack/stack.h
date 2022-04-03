#ifndef STACK
#define STACK
#include "person.h"


struct node{
	Person value;
	node* previous;
};

class Stack{

	private:
		node* top;
		int max_size;
		int current_size;
	public:
		Stack(int max_size);
		~Stack();
		void unstack();
		void stack_up(std::string name, std::string gender, int age);
		void print_stack();
		void edit_top();
};




#endif
