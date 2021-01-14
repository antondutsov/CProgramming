/*
11. Създайте С програма, която калкулира стойността на покупки в магазин за
хранителни стоки. Клиентът може да закупи различна комбинация от продукти. В
магазина има следните налични продукти и цени:
Домати- 4.5 лв.за килограм, Брашно 1.80 лв. за килограм,
Кисело мляко - 0.50 лв. за брой, Сладолед на фунийки 0.60 лв. броя
Бонбони 1.50 лв. за килограм, Близалки 0.15 лв. за брой.
Указания:
Помислете какви променливи ще дефинирате?
Помислете в каква последователност ще изпълнявате действията?
В момента няма да проверяваме въведените стойности от клиента.
...
*/

#include <stdio.h>
#include <float.h>

int main(){

    float fTomatoPrice = 4.50, fFlourPrice = 1.80, fCandyPrice = 1.50, fYogurtPrice = 0.50, fIceCreamPrice = 0.60, fLollyPopPrice = 0.15;
    unsigned int yogurtQuantity, iceCreamQuantity, lollypopQuantity;
    float fTomatoWeight, fFlourWeight, fCandyWeight;

    printf("Здравейте, добре дошли в нашия магазин! Днес предлагаме - пресни домати, брашно, кисело мляко, сладолед на фунийки и близалки.\n");

    printf("Колко килограма домати ще желаете? \n");
    scanf("%f", &fTomatoWeight);
    float fTomatoTotal = fTomatoPrice * fTomatoWeight;
    printf("%.2f \n", fTomatoTotal);

    printf("Колко килограма брашно ще желаете? \n");
    scanf("%f", &fFlourWeight);
    float fFlourTotal = fFlourPrice * fFlourWeight;
    printf("%.2f \n", fFlourTotal);

    printf("Колко килограма бонбони ще желаете? \n");
    scanf("%f", &fCandyWeight);
    float fCandyTotal = fCandyPrice * fCandyWeight;
    printf("%.2f \n", fCandyTotal);

    printf("Колко броя кисело мляко ще желаете? \n");
    scanf("%lf", &yogurtQuantity);
    float fYogurtTotal = fYogurtPrice * yogurtQuantity;
    printf("%.2f \n", fYogurtTotal);

    printf("Колко броя сладолед ще желаете? \n");
    scanf("%lf", &iceCreamQuantity);
    float fIceCreamTotal = fIceCreamPrice * iceCreamQuantity;
    printf("%.2f \n", fIceCreamTotal);

    printf("Колко броя близалки ще желаете? \n");
    scanf("%lf", &lollypopQuantity);
    float fLollyPopTotal = fLollyPopPrice * lollypopQuantity;
    printf("%.2f \n", fLollyPopTotal);

return 0;
}
