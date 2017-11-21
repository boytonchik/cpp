#include <iostream>
using namespace std;

enum days_of_week { Monday, Tuesday, Wednesday, Thursday, Fruday, Saturday, Sunday };

int main()
{
	days_of_week day1, day2;

	day1 = Monday;
	day2 = Monday;

int diff = day2 - day1;
cout << diff << endl;
if(day1 < day2) {
	cout << "day1 < day2" << endl;
} else {
	cout << "0" << endl;
}

return 0;
}
