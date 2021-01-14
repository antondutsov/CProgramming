/*
6. Дефинирайте променливи със стойност -127, 255, 6 237 498, 4 294 967 292, -9 000 000 000 000 775 845.
Изведете всяка променлива на екрана със printf();
*/

#include <stdio.h>

int main(){

    char valueOne = -127;
    unsigned char valueTwo = 255;
    unsigned int valueThree = 6237498; //changed the type of variable from 'int' to 'unsigned int'
    long int valueFour = -9000000000000775845;

    printf("The 'signed char' value is: %d \n", valueOne);
    printf("The 'unsigned char' value is: %d \n", valueTwo);
    printf("The 'signed int' value is: %ld \n", valueThree);
    printf("The 'long int' value is: %ld \n", valueFour);

return 0;
}
