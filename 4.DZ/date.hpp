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
	std::cin >> date.day >> date.month >> date.year;
	if (date.day > 31 || date.day <= 0 || date.month > 12 || date.month <= 0 || date.year < 0) {
		std::cout << "Format was entered incorrectly." << std::endl;	
	} else (date.day < 31 && date.month < 13) {
		std::cout << "Today " << date.day << slash << date.month << slash << date.year << std::endl;
	}	
}
}