/*
Задача 2 Пощенските такси на дадена куриерска фирма се определят според
тежестта на пратките (с точност до цял грам) и обема, както е показано в таблицата.
Тегло (с точност до 1 грам) Такса до 20 г 0,46 лева; 21-50 г 0,69 лева; 51-100 г
1,02 лева; 101-200 г 1,75 лева; 201-350 г 2,13 лева; 351-500 г 2,44 лева; 501-
1000 г 3,20 лева; 1001-2000 г 4,27 лева; 2001-3000 г 5,03 лева;
Обем: до 10см + 0,01лв; 10- 50 см + 0,11 лева, 50-100 см + 0,22лв, 100-150см + 0,33лв, 150-
250см +0,56лв, 250-400см+1.50лв, 400-500см+3,11лв, 500-600см+4,89лв, над 600см+ 5.79лв
Потребителя се пита за броя на пратките пратки след което теглото на всяка пратка и обема и.
Определете според пощенските такси в тази куриерска фирма как по-евтино да изпрати своите
пратки като една или да ги изпрати като отделни пратки.
Изход 1:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
Изход 2:
За пратки с тегло ... грама обем ... и ... грама ...обем е по-добре да бъдат изпратени заедно. В
този случай изпращането ще струва ... лева.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    int grams;
    int volume;
    int priceForDelivery;

} package;

void calcDeliveryPrice(package* pack){
    if (pack->grams<=20){
        pack->priceForDelivery = 46;
    }
    else if (pack->grams<=50){
        pack->priceForDelivery = 69;
    }
    else if (pack->grams<=100){
        pack->priceForDelivery = 102;
    }
    else if (pack->grams<=200){
        pack->priceForDelivery = 175;
    }
    else if (pack->grams<=350){
        pack->priceForDelivery = 213;
    }
    else if (pack->grams<=500){
        pack->priceForDelivery = 244;
    }
    else if (pack->grams<=1000){
        pack->priceForDelivery = 320;
    }
    else if (pack->grams<=2000){
        pack->priceForDelivery = 427;
    }
    else if (pack->grams<=3000){
        pack->priceForDelivery = 503;
    }

    if(pack->volume<=10){
        pack->priceForDelivery+=1;
    }
    else if(pack->volume<=50){
        pack->priceForDelivery+=11;
    }
    else if(pack->volume<=100){
        pack->priceForDelivery+=22;
    }
    else if(pack->volume<=150){
        pack->priceForDelivery+=33;
    }
    else if(pack->volume<=250){
        pack->priceForDelivery+=56;
    }
    else if(pack->volume<=400){
        pack->priceForDelivery+=150;
    }
    else if(pack->volume<=500){
        pack->priceForDelivery+=311;
    }
    else if(pack->volume<=600){
        pack->priceForDelivery+=489;
    }
    else{
        pack->priceForDelivery+=579;
    }
    
}

int main(){
    int countPacks;
    
    printf("Въведете броят на пратките: ");
    
    scanf("%d", &countPacks);
    fflush(stdin);
    
    package* packages = malloc(sizeof(package)*countPacks);
    package whole = {0, 0, 0};
    
    int sum = 0;
    
    for (int i = 0; i < countPacks; i++){
        printf("Брой пакети %d: ", i+1);
        printf("Въведете обем: ");
       
        scanf("%d", &packages[i].volume);
        fflush(stdin);
        
        printf("Въведете тегло в грамове: ");
        
        scanf("%d", &packages[i].grams);
        fflush(stdin);
        
        calcDeliveryPrice(&packages[i]);
        
        sum += packages[i].priceForDelivery;
        
        whole.grams += packages[i].grams;
        
        whole.volume += packages[i].volume;
    }
    
    calcDeliveryPrice(&whole);
    
    printf("Цена на пакетите, като една пратка: %lf \n", (double)whole.priceForDelivery/100);
    printf("Цена на пакетите по отделно: %lf \n",(double)sum/100);
    
    if (whole.priceForDelivery < sum){
        printf("Цената на услугата е по-ниска като една пратка!\n");
    }
    else{
        printf("Цената на услугата е по-ниска като отделни пратки! \n");
    }
    
return 0;
}
