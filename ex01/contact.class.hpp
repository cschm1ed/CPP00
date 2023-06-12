
#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class   Contact {

	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public:
		Contact( void );
		~Contact( void );

		std::string         get_firstname( void );
		std::string         get_lastname( void );
		std::string         get_nickname( void );
		std::string         get_phone_number( void );
		std::string         get_darkest_secret( void );
		void                set_firstname(std::string const str);
		void                set_lastname(std::string const str);
		void                set_nickname(std::string const str);
		void                set_phone_number(std::string const str);
		void                set_darkest_secret(std::string const str);

};

#endif
