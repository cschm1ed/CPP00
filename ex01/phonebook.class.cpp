
#include "phonebook.class.hpp"

Phonebook::Phonebook() : num_users(0) {
	return ;
}

Phonebook::~Phonebook() {
	return ;
}

void    Phonebook::addUser( void ) {
	std::string tmp;

	if (num_users >= 8)
	{
		std::cout << "The awesome phonebook can only hold 8 contacts\n";
		std::cout << "ERROR: maximum number of contacts exceeded\n";
		return ;
	}

	std::cout << "enter firstname: ";
	std::cin >> tmp;
	contacts[num_users].set_firstname(tmp);
	std::cout << "enter lastname: ";
	std::cin >> tmp;
	contacts[num_users].set_lastname(tmp);
	std::cout << "enter nickname: ";
	std::cin >> tmp;
	contacts[num_users].set_nickname(tmp);
	std::cout << "enter phone number: ";
	std::cin >> tmp;
	contacts[num_users].set_phone_number(tmp);
	std::cout << "tell me their darkest secret: ";
	std::cin >> tmp;
	contacts[num_users].set_darkest_secret(tmp);

	num_users ++;
	return ;
}

void    Phonebook::displayContacts(void ) {
	std::string tmp;

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << '\n';
	std::cout << "----------|----------|----------|----------" << '\n';

	for (int i = 0; i < num_users; i ++){
		std::cout << std::setw(10) << static_cast<char>(i + '1') << "|";
		display_str_with_width(contacts[i].get_firstname());
		std::cout << "|";
		display_str_with_width(contacts[i].get_lastname());
		std::cout << "|";
		display_str_with_width(contacts[i].get_nickname());
		std::cout << '\n';
	}
	return ;
}

void    Phonebook::searchContact(int index) {
	if (index > 8 || index < 1){
		std::cout << "ERROR: index out of awesome Phonebooks bound\n";
		return ;
	}
	else if (index -1 > num_users)
	{
		std::cout << "ERROR: Contact does not exist\n";
		return ;
	}
	index -= 1;
	display_key_value("first name", contacts[index].get_firstname());
	display_key_value("last name", contacts[index].get_lastname());
	display_key_value("nickname", contacts[index].get_nickname());
	display_key_value("phone number", contacts[index].get_phone_number());
	display_key_value("darkest secret", contacts[index].get_darkest_secret());
}

void    display_key_value(std::string key, std::string value){
	key += ":";
	key.resize(15, ' ');
	value.resize(50);
	std::cout << std::left << key << value << '\n';
}

void    display_str_with_width(std::string str){
	if (str.size() > 10){
		str.resize(10);
		str += ".";
	}
	std::cout << std::setw(10) << str;
}
