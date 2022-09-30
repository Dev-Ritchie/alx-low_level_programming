#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int m1, m2;
	m1 = (argv[1]);
	m2 = (argv[2]);
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(m1) * atoi(m2));
	return (0);
}
