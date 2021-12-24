#include <iostream>
#include <tuple>

int main()
{
	std::tuple<int, std::string, int> student{ 1, "Kim", 50 };

	student = std::make_tuple(3, "Lee", 10);

	std::cout << std::get<0>(student) << std::endl;
	std::cout << std::get<1>(student) << std::endl;
	std::cout << std::get<2>(student) << std::endl;
}