

#include <iostream>
#include "contact.class.hpp"

Contact::Contact( void ) {
	return ;
}

Contact::~Contact( void ) {
	return ;
}

std::string Contact::get_firstname( void ) {
	return _firstname;
}

std::string Contact::get_lastname( void ) {
	return _lastname;
}

std::string Contact::get_darkest_secret( void ) {
	return _darkest_secret;
}

std::string Contact::get_nickname( void ) {
	return _nickname;
}

std::string Contact::get_phone_number( void ) {
	return _phone_number;
}

void        Contact::set_firstname(std::string const str) {
	_firstname = str;
}

void        Contact::set_lastname(std::string const str) {
	_lastname = str;
}

void        Contact::set_nickname(std::string const str) {
	_nickname = str;
}

void        Contact::set_phone_number(std::string const str) {
	_phone_number = str;
}

void        Contact::set_darkest_secret(std::string const str) {
	_darkest_secret = str;
}
