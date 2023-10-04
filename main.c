#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int a;
	
	{printf("input the seconds :");
	scanf("%i", &a);
	
	printf("The time for %i second is %i : %i : %i\n", a, a / 3600, (a%3600) /60, a % 60);
	
	return 0;
}
}
