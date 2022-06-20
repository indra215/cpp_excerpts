#include <iostream>

int main(int argc, char const *argv[])
{
	auto counter = []() {static int i; return ++i;};
	auto c1 = counter;
	auto c2 = counter;

	std::cout << c1() << "," << c1() << "," << c1() << std::endl;
	std::cout << c2() << "," << c2() << "," << c2() << std::endl;

	return 0;
}