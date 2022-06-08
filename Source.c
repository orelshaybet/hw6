#include <stdio.h>

int pack4Chars2Int(char c1, char c2, char c3, char c4);
int checkEvenParity(short input);

void main()
{
	//q.1
	int q_a = pack4Chars2Int('a', 'b', 'c', 'd');
	
	//q.2
	int q_b = checkEvenParity(-14580);
	printf("***question 2***\n");
	printf("-14580 return: %d\n", q_b);
	q_b = checkEvenParity(24);
	printf("24 return: %d\n", q_b);
}


int pack4Chars2Int(char c1, char c2, char c3, char c4) // q.1
{
	int x = c4;
	int y = c3;
	int z = c2;
	int w = c1;
	x = x << 24;
	y = y << 16;
	z = z << 8;

	int sum = x | y;
	sum = sum | z;
	sum = sum | w;
	return sum;
}


int checkEvenParity(short input) // q.2
{
	unsigned short x = 1;
	int counter = 0;
	for (int i = 0; i < 16; i++, x<<=1)
	{
		if (input & x) 
			counter++;
	}
	if (counter % 2 == 0)
		return 1;
	else return 0;
}