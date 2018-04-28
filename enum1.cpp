#include<iostream>

enum Whatever{

	crap = 'a'
};

enum Grocerries{

	ham = 5,
	eggs,
	milk = crap

};

void grocerries_printer(Grocerries g){

	switch(g){

		case ham:
			std::cout << "Ham is selected." << std::endl;
			break;
		case eggs:
			std::cout << "Eggs are selected." << std::endl;
			break;
		case milk:
			std::cout << "Milk is selected" << std::endl;
			break;
		default:
			std::cout << "Nothing is selected" << std::endl;
			break;
		}
}

int main(int argc, char const *argv[])
{


	Grocerries h = ham;

	grocerries_printer(h);

	Grocerries e(eggs);

	grocerries_printer(e);

	return 0;
}