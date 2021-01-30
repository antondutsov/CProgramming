/*
Задача 2. Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата:
*/

#include <stdio.h>
const float PI = 3.14159265359f;

float areaCircle(float r);
float area();

int main(){

    float circle = areaCircle(5);
    printf("%lf \n", circle);

    float area();
    printf("%lf \n", area());

return 0;
}

float areaCircle(float r){
    float area = PI*(r*r);
    return area;
}

float area(){
    float r;
    scanf("%f", &r);

    return areaCircle(r);
}
