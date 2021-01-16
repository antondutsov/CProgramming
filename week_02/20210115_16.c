/*
16. Да се дефинира константата Пи (3.14159...) и да се напише
функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).
В main() да се извика горната функция с радиуси 1, 1.5, 13.
*/

#include <stdio.h>

const float Pi = 3.14159;

float area_of_circle(float r){
    float area = Pi * r * r;
    printf("%f \n", area);

return area;
}


int main(){

    area_of_circle(1);
    area_of_circle(1.5);
    area_of_circle(13);
}
