#include "stack.h"
//CLEAR will clear the terminal in all operating systems
#define CLEAR std::cout << "\033[2J\033[1;1H";


int main(){
	Stack stack;
	int menu_option_0 = - 1;
	CLEAR
	do{
		std::cout << "1 - add to top\n2 - read stack\n3 - edit top\n4 - delete top\n0 - exit" << std::endl;
		std::cin >> menu_option_0;
		std::cin.get();
		switch (menu_option_0){
			case 1:
				{
				std::string name;
				std::string gender;
				int age;

				std::cout << "Write the name of the person: " << std::endl;
				getline(std::cin, name);
				std::cin.sync();	
				
				std::cout << "What is the gender of " << name << std::endl;
				getline(std::cin, gender);
				std::cin.sync();
				
				std::cout << "How old is " << name << std::endl;
				std::cin >> age;
				std::cin.get();
				stack.stack_up(name, gender, age);
				}
				CLEAR
				break;
			case 2:
				stack.print_stack();
				getchar();
				CLEAR
				break;
			case 3:
				stack.edit_top();
				CLEAR
				break;
			case 4:
				stack.unstack();
				CLEAR
				break;
			case 0:
				CLEAR
				std::cout << "bye" << std::endl;
				break;
			default:
				break;
		}
	}while(menu_option_0 != 0);
	return 0;
}
