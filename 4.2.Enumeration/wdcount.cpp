#include <iostream>
#include <string>


enum class WORD {
	NO = 0,
	YES = 1
};

int main() {
	WORD isWord = WORD::NO;
	
	int wordcount = 0;
	
	std::string user_input;
	std::cout << "Enter: " << std::endl;
	getline(std::cin, user_input);

	for(int i = 0; i < user_input.size(); i++) {
		if (user_input[i] == ' ') {
			isWord = WORD::NO;
		} else {
			if (isWord == WORD::NO)
			{
				wordcount++;
				isWord = WORD::YES;
			}
		}
	
	}
	
	std::cout << "Words count: " << wordcount;
	
	return 0;	
} 

// for(блок1;блок2;блок3) {тело;}
// блок1 - обычно объявление переменных
// блок2 - условие при котором будет работать цикл
// блок3 - пост действие итерации

// смещение == i
// 0   1   2   3   4   5   6   7   8   9
// | a | b | c |   | a | b | c |   |   | a | = 10
