#include <stdio.h>

int Recursive(int kyuuryou, int zikan, int kotei)
{
	//if (kyuuryou >= 100000)
	if (kyuuryou >= kotei)
	{
		printf("%d時間後に超える", zikan);
		return zikan;
	}
	printf("%d　%d\n", kyuuryou, kotei);
	kyuuryou = kyuuryou *2 - 50;

	return (Recursive(kyuuryou, ++zikan, kotei+1226));
}

int main() {

	int saiki = 100;
	int ippan = 1226;
	int zikan = 0;
	int resullt1 = Recursive(saiki, zikan, ippan);

	return 0;
}
