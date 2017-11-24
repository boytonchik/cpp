#include <iostream>

namespace DZ1 {

struct Phone {
	int code;
	int exchange;
	int abonent;
};

void run()
{
	Phone your_number;
	Phone my_number;
	my_number.code = 212;
	my_number.exchange = 767;
	my_number.abonent = 8900;

	std::cout << "Enter your phone number: " << std::endl;
    std::cin >> your_number.code >> your_number.exchange >> your_number.abonent;

    std::cout << "My phone number: " << "(" << my_number.code << ")" << my_number.exchange << "-" << my_number.abonent << std::endl;
    std::cout << "Your phone number: " << "(" << your_number.code << ")" << your_number.exchange << "-" << your_number.abonent << std::endl;

}





}  // namespace DZ1
