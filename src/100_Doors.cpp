

#include <iostream>
#include <bitset>


namespace v1
{
	void door_open()
	{
		std::bitset<100> doors{};
		constexpr auto COUNT = doors.size();

		for (size_t i = 0; i < COUNT; i++)
		{
			for (size_t j = i; j < COUNT; j+=i + 1)
			{ 
				doors.flip(j);
			}
		}

		for (size_t i = 0; i < doors.size(); i++)
		{
			std::cout << doors[i] << ' ';
		}

	}

}

namespace v2
{

	void door_open()
	{

		auto sqaure{ 1 };
		auto jump{ 3 };

		for (int i = 1; i <= 100; i++)
		{
		
			if (i == sqaure)
			{
				std::cout << "OPEN ";
				sqaure += jump;
				jump += 2;

			}
			else
			{
				std::cout << "CLOSE ";
			}

		}
	}
}

