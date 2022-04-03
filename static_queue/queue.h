#ifndef QUEUE
#define QUEUE
#include "person.h"


struct node{
	Person value;
	node* next;
};

class Queue{

	private:
		int current_size;
		int max_size;
		node* first;
        node* last;
	public:
		Queue(int max_size);
		~Queue();
		void exit_queue();
		void enter_queue(std::string name, std::string gender, int age);
		void print_queue();
		void edit_first();
};




#endif
