/*
17.* Към задача 16 да се добави втора функция, която изчислява
лицето на елипса по зададени два параметъра ( Пи * A * B)
*/

#include <stdio.h>

const float Pi = 3.14159;

float area_of_circle(float r){
    float area = Pi * r * r;
    printf("%f \n", area);

return area;
}

float area_of_elipse(){
    float a;
    float b;
    float area;
    printf("Въведете стойност за 'A': \n");
    scanf("%f", &a);
    printf("Въведете стойност за 'B': \n");
    scanf("%f", &b);
    area = Pi * a * b;
    printf("%f \n", area);
return area;
}

int main(){

    area_of_circle(1);
    area_of_circle(1.5);
    area_of_circle(13);

    printf("\nВъведете стойности на 'А' и 'В' изчисление на елипса в 'Pi * A * B: \n");

    area_of_elipse();

return 0;
}
