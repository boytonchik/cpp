#include <iostream>
#include <string>
using namespace std;

enum class NOORYES {
	NO = 0,
	YES = 1
};

int main()
{
		
	string a;
	int i = 0;
	cout << "Enter: " << endl;
	getline(cin, a);
	for(int i = 0; i < a.size(); i++) {
		if(a[i] == ' ') {
			cout << "It is a space!!!" << endl;
		}
		else(a[i] != ' '); {
			cout << "Not space." << i;
		}
	}
	
return 0;	
}
