#include <iostream>

namespace DZ9 {

struct Time {
 	int hours;
 	int minutes;
 	int seconds;
 };

void run() {
	Time t1;
	std::cout << "Enter your time in the format h/m/s: " << std::endl;
	std::cin >> t1.hours, t1.minutes, t1.seconds;
	long totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	std::cout << "A number seconds: " << totalsecs << std::endl;
}
}