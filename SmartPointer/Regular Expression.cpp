#include <iostream>
#include <regex>

// 정규 표현식 (Regular Expression)
// - 문자로 된 텍스트를 검색

int main()
{
	std::cout << "이메일 : ";
	std::string email;
	std::cin >> email;

	std::regex pattern(R"((\w+[\w\.]*)@(\w+[\w\.]*)\.([A-Za-z]+))");

	if (std::regex_match(email, pattern))
	{
		std::cout << "올바른 이메일입니다." << std::endl;
	}
	else
	{
		std::cout << "잘못된 이메일입니다." << std::endl;
	}
}