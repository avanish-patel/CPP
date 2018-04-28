#include<iostream>

enum Animals
{
	cat,
	dog,
	monkey,
	rat
};

enum Grocerries { ham, eggs, milk};


int main(int argc, char const *argv[])
{	

	std::cout << cat << std::endl;
	std::cout << dog << std::endl;
	std::cout << rat << std::endl;
	std::cout << monkey << std::endl;

	// return 1, dog(1) == eggs(1)
	std::cout << (dog == eggs) << std::endl;

	// Animals m = mouse;
	// Animals d(donkey);


	

	return 0;
}