#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int a, b;
		printf("input two intergers : ");
		scanf("%i %i", &a, &b);


	printf("%i + %i = %i\n", a ,b ,a + b);
	printf("%i - %i = %i\n", a, b, a - b);
	printf("%i * %i = %i\n", a, b, a * b);
	printf("%i / %i = %i\n", a, b, a / b);
	printf("%i %% %i = %i\n", a, b, a % b);
	return 0;
}
