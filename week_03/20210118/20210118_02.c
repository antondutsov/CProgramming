#include <stdio.h>

int main(){

	int x = 10;
	int y = 10;
	int z = 10;

	int true = x == y + (z < y) != 20;
	printf("%i \n", true); //резултатът в променлива 'true' ще бъде '1' - True

return 0;
}
