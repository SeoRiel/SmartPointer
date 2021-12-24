#include <iostream>

class Image
{

};

class Demon
{
private:
	std::shared_ptr<Image> mspImage;

public:
	Demon(std::shared_ptr<Image> img) : mspImage{ img }
	{}
};

int main()
{
	// ���� ����
	std::shared_ptr<Image> spImage{ std::make_shared<Image>() };

	{
		// ���� �Ұ�
		auto demon1 = std::make_unique<Demon>(spImage);

		{
			auto demon2 = std::make_unique<Demon>(spImage);

			{
				auto demon3 = std::make_unique<Demon>(spImage);
			}
		}
	}
}