#include <iostream>

// 스마트 포인터는 무조건 명시적 형변환을 이용할 것

//class MyClass
//{
//public:
//	int mValue;
//};

class MySong
{
public:
	int mTrackNo;
	std::string mName;

	MySong(int no, std::string name) : mTrackNo{no}, mName{name}
	{}
};

int main()
{
	//// std::unique_ptr<MyClass> p{ new MyClass };
	//std::unique_ptr<MyClass> p{ std::make_unique<MyClass>() };

	//std::cout << p->mValue;

	//MyClass* pOld;	// 이렇게 사용할 때는 메모리를 직접 해제하지 않기
	//pOld = p.get();

	auto spSong = std::make_unique<MySong>(1, "BattleBGM");
	// std::unique_ptr<MySong> spSong = std::make_unique<MySong>(1, "BattleBGM");

	std::cout << spSong->mTrackNo << " : " << spSong->mName << std::endl;
	
	spSong.release();
}