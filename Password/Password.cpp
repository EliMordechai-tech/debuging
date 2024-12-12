#include <iostream>

struct Password
{
	char value[16]; // If we send to the program 16 chars as an input it skip the check and print "Congratulations".
	bool incorrect;
	Password() : value(""), incorrect(true)
	{}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
