#include "queue.h"
//CLEAR will clear the terminal in all operating systems
#define CLEAR std::cout << "\033[2J\033[1;1H";


int main(){
	Queue queue;
	int menu_option_0 = - 1;
	CLEAR
	do{
		std::cout << "1 - add new person\n2 - read queue\n3 - edit first person\n4 - remove first person\n0 - exit" << std::endl;
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
				queue.enter_queue(name, gender, age);
				}
				CLEAR
				break;
			case 2:
				queue.print_queue();
				getchar();
				CLEAR
				break;
			case 3:
				queue.edit_first();
				CLEAR
				break;
			case 4:
				queue.exit_queue();
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
