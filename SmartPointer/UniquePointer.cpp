#include <iostream>

// ����Ʈ �����ʹ� ������ ����� ����ȯ�� �̿��� ��

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

	//MyClass* pOld;	// �̷��� ����� ���� �޸𸮸� ���� �������� �ʱ�
	//pOld = p.get();

	auto spSong = std::make_unique<MySong>(1, "BattleBGM");
	// std::unique_ptr<MySong> spSong = std::make_unique<MySong>(1, "BattleBGM");

	std::cout << spSong->mTrackNo << " : " << spSong->mName << std::endl;
	
	spSong.release();
}