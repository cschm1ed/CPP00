
#include "awesome_phonebook.hpp"

int main() {
	Phonebook   Pb;
	std::string action;
	std::string input;

	std::cout << "actions: \nADD:\t adds a new contact\n";
	std::cout << "SEARCH:  displays all saved contacts\n";
	std::cout << "EXIT:\t exits the programm\n";

	while (1){
		std::cout << "> ";
		std::cin >> action;
		if (action == "ADD") {
			Pb.addUser();
		}
		else if (action == "SEARCH") {
			Pb.displayContacts();
			if (Pb.num_users > 0) {
				std::cout << "enter index of contact to display\n";
				std::cin >> input;
				if (isdigit(input[0]))
					Pb.searchContact(stoi(input, 0, 10));
				else
					std::cout << "ERROR: input must be numeric\n";
			}
		}
		else if (action == "EXIT")
			break ;
		else
			std::cout << "please enter a valid prompt\n";
	}
	return (0);
}
