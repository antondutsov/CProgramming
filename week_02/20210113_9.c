/*
9. Дефинирайте променливи със стойност
4.9876543, 7.123456789012345678890, 18 398 458 438 583 853.28, 18 398 458 438
583 853.39875937284928422.
Изведете всяка променлива на екрана със printf();
*/


#include <stdio.h>
//#include <float.h>
//#include <quadmath.h>

int main(){

    float valueOne = 4.9876543f; //chaged the variable type from double to float.
    float valueTwo = 7.123456789012345678890F;
    long double valueThree = 18398458438583853.28L;
    long double valueFour = 18398458438583853.39875937284928422L;

    printf("The first value is: %.7f \n", valueOne);
    printf("The second value is: %.21f \n", valueTwo);
    printf("The third value is: %.2Lf \n", valueThree);
    printf("The fourth value is: %.12Lf \n", valueFour);

return 0;
}


