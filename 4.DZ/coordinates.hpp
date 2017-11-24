#include <iostream>

namespace DZ2 {

struct Point {
	int x;
	int y;
	int summa;
};
void run()
{
	Point P1;
	Point P2;
	Point P3;

	std::cout << "Enter coordinates point P1: ";
	std::cin >> P1.x >> P1.y;

	std::cout << "Enter coordinates point P2: ";
	std::cin >> P2.x >> P2.y;

	P3.x = P1.x + P2.x;
	P3.y = P1.y + P2.y;
	std::cout << "Coordinates P1 + P2: " << P3.x << "," << P3.y << std::endl;
}
}
