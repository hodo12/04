#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
int y;
		printf("input the year : ");
		scanf("%i", &y);

		if ((y % 4 == 0  &&  y % 100 != 0) || (y % 400 == 0)) {
			printf("%i is leap year.\n", y);
		}
		else
		{
			printf("%i is not leap year.\n", y);
		}

	return 0;
}
