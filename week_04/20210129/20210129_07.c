/*
Задача 7. Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията.
*/

#include <stdio.h>

double triangleS();
double rectangleS();

int main(){

    int triangle = triangleS();
    int rectangle = rectangleS();

return 0;
}

double triangleS(double a, double b){

    printf("Enter the 'a' side of triangle: ");
    scanf("%lf", &a);

    printf("Enter the 'b' side of triangle: ");
    scanf("%lf", &b);

    printf("The 'face' of triangle is: %.2lf \n",(a * b) / 2);
}

double rectangleS(double a, double b){

    printf("\nEnter the 'a' side of rectangle: ");
    scanf("%lf", &a);

    printf("Enter the 'b' side of rectangle: ");
    scanf("%lf", &b);
    printf("The 'face' of rectangle is: %.2lf \n", a * b);
}
