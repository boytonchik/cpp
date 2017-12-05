#include <iostream>

namespace DZ5 {

enum ETYPE {
	LABORER,
	SECRETARY,
	MANAGER,
	ACCOUNTANT,
	EXECUTIVE,
	RESEARCHER
};

void run() {
	char letter;
	ETYPE post;
	std::cout << "Enter the first letter of the post: " << std::endl;
	std::cin >> letter;
	if (letter == 'L' || 'l') {
		std::cout << "Full name of the post: laborer" << std::endl;
	} else if (letter == 'S' || 's') {
		std::cout << "Full name of the post: secretary" << std::endl;
	} else if (letter == 'M' || 'm') {
		std::cout << "Full name of the post: manager" << std::endl;
	} else if (letter == 'A' || 'a') {
		std::cout << "Full name of the post: accountant" << std::endl;
	} else if (letter == 'E' || 'a') {
		std::cout << "Full name of the post: executive" << std::endl;
	} else if (letter == 'R'|| 'r') {
		std::cout << "Full name of the post: researcher" << std::endl;
	} else {
		std::cout << "Post not found." << std::endl;
	}
	/* switch (letter) {
		case 'L' && 'l':
			post = ETYPE::LABORER;
			break;
		case 'S' && 's':
			post = ETYPE::SECRETARY;
			break;
		case 'M' && 'm':
			post = ETYPE::MANAGER;
			break;
		case 'A' && 'a':
			post = ETYPE::ACCOUNTANT;
			break;
		case 'E' && 'e':
			post = ETYPE::EXECUTIVE;
			break;
		case 'R' && 'r':
			post = ETYPE::RESEARCHER;
			break;
	}

	switch (post) {
		case ETYPE::LABORER:
		std::cout << "Full name of the post: laborer" << std::endl;
		break;
		case ETYPE::SECRETARY:
		std::cout << "Full name of the post: secretary" << std::endl;
		break;
		case ETYPE::MANAGER:
		std::cout << "Full name of the post: manager" << std::endl;
		break;
		case ETYPE::ACCOUNTANT:
		std::cout << "Full name of the post: accountant" << std::endl;
		break;
		case ETYPE::EXECUTIVE:
		std::cout << "Full name of the post: executive" << std::endl;
		break;
		case ETYPE::RESEARCHER:
		std::cout << "Full name of the post: researcher" << std::endl;
		break;
	} */
}
}