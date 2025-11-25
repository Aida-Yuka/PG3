#include <iostream>
#include <Windows.h>
#include<list>
#include <iostream>

using namespace std;

int main(void)
{
	list<const char*> eki_list
	{
		"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno","Uguisudani", "Nippori", "Tabata", "Komagome","Sugamo", "Otsuka", "Ikebukuro", "Mejiro","Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi","Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda","Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	printf("1970年\n");
	for (list<const char*>::iterator it_f = eki_list.begin(); it_f != eki_list.end(); it_f++)
	{
		std::cout << *it_f << endl;
	}

	printf("\n2019年\n");
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr/*駅名リストを順番にループ*/)
	{
		if (strcmp(*itr,"Tabata")==0/*○○駅だったら*/)
		{
			itr = eki_list.insert(itr, "Nishi-Nippori");
			std::cout << *itr << endl;
			++itr;
		}
		std::cout << *itr << endl;
	}

	printf("\n2022年\n");
	for (auto itr = eki_list.begin(); itr != eki_list.end(); ++itr/*駅名リストを順番にループ*/)
	{
		if (strcmp(*itr, "Tamachi") == 0/*○○駅だったら*/)
		{
			itr = eki_list.insert(itr, "Takanawa Gateway");
			std::cout << *itr << endl;
			++itr;
		}
		std::cout << *itr << endl;
	}

	return 0;
}