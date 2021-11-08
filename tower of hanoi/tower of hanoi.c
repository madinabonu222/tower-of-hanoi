#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int i, j, n[10] = { 1,1,1,1,1,1,1,1,1,1 }, c[10] = { 0 };
	char p;
	j = 4;

	for (i = 0; i < j;) if (n[i] != 0 || !(i++ + 1))
	{
		if (p = c[i], (i + j) % 2) c[i]-- == 0 && (c[i] = 2);

		else c[i] ++== 2 && (c[i] = 0);
		printf("%3d원판을 %c에서 %c으로 옮긴다\n", i + 1, 'A' + p, 'A' + c[i]);
		
		for (n[i]--, i--; n[i] == 0 || (i = 0); n[i--] = 1);
	}
	return 0;
}