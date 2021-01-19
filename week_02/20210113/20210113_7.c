/*
7. Дефинирайте променливи със стойност 24 212, -1 357 674, 1 357 674, -1 357
674 000, 3 657 895 000.
Изведете всяка променлива на екрана със printf();
*/

#include <stdio.h>

int main(){

    unsigned short valueOne = 24212;
    int valueTwo = -1357674;
    int valueThree = 1357674;
    long int valueFour = 3657895000;

    printf("The 'unsigned short' value is: %d \n", valueOne);
    printf("The 'signed int' value is: %d \n", valueTwo);
    printf("The 'signed int' value is: %d \n", valueThree);
    printf("The 'long int' value is: %ld \n", valueFour);

return 0;
}
