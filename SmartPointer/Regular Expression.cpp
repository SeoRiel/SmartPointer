#include <iostream>
#include <regex>

// ���� ǥ���� (Regular Expression)
// - ���ڷ� �� �ؽ�Ʈ�� �˻�

int main()
{
	std::cout << "�̸��� : ";
	std::string email;
	std::cin >> email;

	std::regex pattern(R"((\w+[\w\.]*)@(\w+[\w\.]*)\.([A-Za-z]+))");

	if (std::regex_match(email, pattern))
	{
		std::cout << "�ùٸ� �̸����Դϴ�." << std::endl;
	}
	else
	{
		std::cout << "�߸��� �̸����Դϴ�." << std::endl;
	}
}