#include <stdio.h>

int main() {
int x = 1, y = 0;
int z = y || x;
printf("\nInit values: X= %d, Y= %d\n", x, y);
printf("Z EQUALS: %d \n", z);

x = 1 + 2, 2 * 3, 3 + 4;
y = ( 7 * 8, 8 + 9, 9 - 4);
printf("\nX= %d, Y= %d\n", x, y);

  //Моите проверки, че без скоби първият израз се проверява
 // и следващите се отхвърлят/игнорират,  а
//със скоби се взема или проверява последният израз - не съм сигурен

x =  3 + 4, 1 + 2, 2 * 3;
y = (  9 - 4,  8 + 9, 7 * 8);
printf("\nX= %d, Y= %d\n", x, y);

x =  2 * 3, 1 + 2, 3 + 4;
y = (  7 * 8,  9 - 4, 8 + 9);
printf("\nX= %d, Y= %d\n", x, y);

return 0;
}
