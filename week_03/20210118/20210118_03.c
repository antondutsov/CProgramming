#include <stdio.h>

int main(){

	int x = 10;
	int y = 10;

	int true = (++x + (x | y)), false;

	printf("%d \n", true);

return 0;
}
