#include "commands.h"

int main(void) {
	bool run = 1;
	std::string comm;
	std::string commands[COMM_N] = {
		"run", "help", "quit", "main" };
	do {
		std::cout << "> ";
		std::cin >> comm;
		std::transform(comm.begin(), comm.end(), comm.begin(),
			[](unsigned char c) { return std::tolower(c); });	// stackoverflow function to lowercase input

		switch (commIndex(commands, comm)) {
		case 0:
			std::cout << "Hello World!" << std::endl;
			break;
		case 1:
			std::cout << "run - run the program" << std::endl;
			std::cout << "help - lists all the commands" << std::endl;
			std::cout << "quit - exits the program" << std::endl;
			break;
		case 2:
			run = 0;
			system("CLS");
			std::cout << "Program exited successfully." << std::endl;
			break;
		case 3:
			run = 0;
			system("CLS");
			std::cout << "Program exited successfully. Have a good day!" << std::endl;
			break;
		default:
			std::cout << "No such command exists. Try again." << std::endl;
			break;
		}
	} while (run);
	return 0;
}