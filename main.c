#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	int s;
	
      printf("input the second : ");
      scanf("%i", &s);

      printf("the time is %i : %i", s / 60, s %60);

	return 0;
}
