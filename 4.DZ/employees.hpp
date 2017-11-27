#include <iostream>

namespace DZ3 {

struct Employee {
	int number;
	float salary;
};

void run() {
	Employee vasya = { 1, 1400 };
	Employee petya = { 2, 800 };
	Employee ivan = { 3, 4000 };
	int amount = vasya.salary + petya.salary + ivan.salary;
	std::cout << "Number employee: " << std::endl;
	int selected_worker;
	std::cin >> selected_worker;
	if (vasya.number == selected_worker) {
		std::cout << vasya.number << ". " << vasya.salary << std::endl;
	} else if (petya.number == selected_worker) {
		std::cout << petya.number << ". " << petya.salary << std::endl;
	} else if (ivan.number == selected_worker) {
		std::cout << ivan.number << ". " << ivan.salary << std::endl;
	} else {
		std::cout << "Employee does not exist." << std::endl;
	}
}
}