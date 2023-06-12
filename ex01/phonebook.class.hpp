
#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "awesome_phonebook.hpp"

void    display_str_with_width(std::string str);
void    display_key_value(std::string key, std::string value);

class   Phonebook {

	private:
		Contact contacts[8];

	public:

		Phonebook( void );
		~Phonebook( void );

		int     num_users;
		void    addUser( void );
		void    displayContacts( void );
		void    searchContact(int index);

	};

#endif
