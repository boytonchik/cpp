#include <iostream>
#include <string>

enum class COLOR {
	BLOND,
	GRAY,
	BROWN,
	BLACK
};

struct Params {
	COLOR eyecolor;
	COLOR haircolor;
	int height;
	int weight;
};

struct Human {
	std::string name;
	int age;
	Params characters;
};

std::string toString(COLOR _color) {
	std::string answer;
	switch(_color) {
		case COLOR::GRAY:
			answer = "gray";
			break;
		case COLOR::BLOND:
			answer = "blond";
			break;
		case COLOR::BROWN:
			answer = "brown";
			break;
		case COLOR::BLACK:
			answer = "black";
			break;
		default:
			answer = "undefined color";
	}
	return answer;
}

void formatShow(std::string key, std::string value) {
	std::cout.width(15);
	std::cout << std::left << key << value << std::endl;  
}


void show(Human _human) {
	formatShow("My name is:", _human.name);
	formatShow("My age:"    , std::to_string(_human.age));
	formatShow("My height:" , std::to_string(_human.characters.height));
	formatShow("Weight:"    , std::to_string(_human.characters.weight));
	formatShow("Eye color:" , toString(_human.characters.eyecolor));
	formatShow("Hair color:", toString(_human.characters.haircolor));
}

int main()
{
	Human nastya;
	nastya.name = "Nastya";
	nastya.age = 21;
	nastya.characters.eyecolor = COLOR::GRAY;
	nastya.characters.haircolor = COLOR::BLOND;
	nastya.characters.height = 161;
	nastya.characters.weight = 45;

	show(nastya);
	return 0; 
}