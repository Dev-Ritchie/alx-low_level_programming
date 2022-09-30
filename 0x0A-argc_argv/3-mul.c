#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int m1, m2;
	m1 = atoi(argv[1]);
	m2 = atoi(argv[2]);
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", m1 * m2);
	return (0);
}
