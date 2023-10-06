#include <iostream>
#include <string>
#include <Array.hpp>

#define MAX_VAL 750

int main(int, char**)
{
	Array<std::string> strs(MAX_VAL);
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	std::string* mirror2 = new std::string[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		strs[i] = "str" + std::to_string(value);
		mirror2[i] = "str" + std::to_string(value);
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		test[0] = 10000;
		Array<std::string> tmp2 = strs;
		Array<std::string> test2(tmp2);
		test2[0] = std::string("str10000");
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
		if (mirror2[i] != strs[i])
		{
			std::cerr << "strs didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	delete [] mirror2;//
	return 0;
}