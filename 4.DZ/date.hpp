#include <iostream>

namespace DZ4 {

struct Date {
	int day;
	int month;
	int year;
};

void run() {
	Date date;
	char slash = '/';
	std::cout << "Enter the date in the format day/month/year: " << std::endl;
	std::cin >> date.day >> slash >> date.month >> slash >> date.year;
	if (date.day < 31 && date.month < 13) {
		std::cout << "Today " << date.day << slash << date.month << slash << date.year << std::endl;
	} else if (date.day > 31 || date.month > 12) {
		std::cout << "Format was entered incorrectly." << std::endl;
	}
}
}