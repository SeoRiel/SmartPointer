#include <iostream>
#include <functional>

// Functor (Function Object)
// 함수 포인터 -> 연산자 오버로딩 ()
// std::function : Functor 생성
// std::bind     : Functor & parameter 분리

// 함수
void MyFunction(int arg1) {}

// 객체 - 함수 연산자 () 오버로딩
class MyClass
{
public:
	void operator() () {}
};

void MyFunction2(int arg1, char arg2)
{
	std::cout << arg1 << " " << arg2 << std::endl;
}

int main()
{
	//std::function<void (int)> functor1 = MyFunction;
	//std::function<void()> functor2 = MyClass();
	//std::function<void()> functor3 = []() {};

	//functor1(10);
	//functor2();
	//functor3();

	auto functor1 = std::bind(MyFunction2, std::placeholders::_1, std::placeholders::_2);
	functor1(1, 'a');

	auto functor2 = std::bind(MyFunction2, std::placeholders::_2, std::placeholders::_1);
	functor2('a', 1);

	auto functor3 = std::bind(MyFunction2, 10, std::placeholders::_1);
	functor3('a');

}