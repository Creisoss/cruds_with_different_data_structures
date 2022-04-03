#include "linker.h"
//CLEAR will clear the terminal in all operating systems
#define CLEAR std::cout << "\033[2J\033[1;1H";

// Crud with linked list
int main(){
	int option_menu_0 = -1;
	List list;
	while (option_menu_0 != 0){
			//Cli menu with all options		
			std::cout << "Choose an option:\n1-Create person"<<
			"\n2-Read person\n3-Update person\n4-Delete person\n0-Exit\n";
		std::cin >> option_menu_0;
		std::cin.get();
		switch (option_menu_0){
			// Create person
			case 1:
				{
				std::string name;
				std::string gender;
				int age;
				std::cout << "Write the name of the new person: ";
				getline(std::cin, name);
				std::cin.sync();
				std::cout << "What is the gender of " << name << ": ";
				getline(std::cin, gender);
				std::cin.sync();
				std::cout << "How old is " << name << " ? ";
				std::cin >> age;
				list.append(name, gender, age);	
				CLEAR
				}
				break;
			// Read person				 
			case 2:
				CLEAR
				{
					int option_menu_1;
					std::cout << "1 - Print entire list\n2 - Print one person:" << std::endl;
					std::cin >> option_menu_1;
					switch(option_menu_1){
						case 1:
							list.printList();
							break;
						case 2:
							{
								int index;
								std::cout << "Type the index of the person you want to see: ";
								std::cin >> index;	
								list.printPersonComplete(index);
								break;
							}
						default:
							break;

					}
				getchar();
				}
				break;
			// Update person
			case 3:
				{
					int index;
					std::cout << "Type the index of the person you want to edit: "<<std::endl;
					std::cin >> index;
					list.editPerson(index);
					CLEAR
				}
				break;
			// Delete person
			case 4:
				{
					int index;
					std::cout << "Type the index of the person you want to delete: "<<std::endl;
					std::cin >> index;
					list.deletePerson(index);
					CLEAR
				}
				break;
			// End program
			case 0:
				break;
			default:
				std::cout <<"Invalid input" << std::endl;
		}	
	}

	return 0 ;
}
