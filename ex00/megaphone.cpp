/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmied <cschmied@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:10:50 by cschmied          #+#    #+#             */
/*   Updated: 2023/06/12 21:10:56 by cschmied         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
	std::string input;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	for (int i = 1; i < argc; i++) {
		input += argv[i];
		input += " ";
	}
	for (uint i = 0; i < input.length(); i++) {
		std::cout << static_cast<char>(tolower(input[i]));
	}
	std::cout << '\n';
	return 0;
}
