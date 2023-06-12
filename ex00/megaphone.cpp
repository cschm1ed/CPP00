#include <iostream>

int main(int argc, char **argv)
{
	std::string input;

	if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	for (int i = 1; i < argc; i++){
		input += argv[i];
		input += " ";
	}
	for (uint i = 0; i < input.length(); i++){
		std::cout << static_cast<char>(tolower(input[i]));
	}
	std::cout << '\n';
	return 0;
}
