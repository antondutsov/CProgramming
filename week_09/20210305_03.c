/*
Задача 3. С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1:
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... ºC , то температурата на връх Вихрен (2918м н.м.р.) е ... ºC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... ºC , то температурата на хижа Вихрен (1950м н.м.р.) е ... ºC.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double calcHizha(double tempVrah){
    return tempVrah + (968/100*0.5);
}
double calcVrah(double tempHizha){
     return tempHizha - (968/100*0.5);
}


int main(){
    double tempVrahVihren;
    double tempHizhaVetren;
    
    int answer;
    
    printf("Въведете температура за: \n'1' за вр. Вихрен \n'2' за х. Вихрен\n");
   
    scanf("%d",&answer);
    fflush(stdin);
   
    if (answer == 1){
        printf("Въведете температура при вр. Вихрен: ");
        
        scanf("%lf",&tempVrahVihren);
        fflush(stdin);
        
        tempHizhaVetren = calcHizha(tempVrahVihren);
    }
    else{
        printf("Въведете температура при х. Вихрен");
        
        scanf("%lf",&tempHizhaVetren);
        fflush(stdin);
        
        tempVrahVihren = calcVrah(tempHizhaVetren);
    }
   
    printf("Температура при вр. Вихрен: %lf \n", tempVrahVihren);
   
    printf("Температура при х. Вихрен: %lf \n",tempHizhaVetren);
    
return 0;
}
