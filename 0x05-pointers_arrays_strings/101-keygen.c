#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program generates random valid
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int x, sum, y;

	sum = 0;	

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pass[x] = rand() % 78;
		sum += (pass[x] + '0');
		putchar(pass[x] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			y = 2772 - sum - '0';
			sum += y;
			putchar(y + '0');
			break;
		}
	}

	return (0);
}

