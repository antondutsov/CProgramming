/*
Задача 15.Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към дадена
променлива от тип struct tagTMyTime. Напишете следните функции:
връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.
*/
#include <stdio.h>
#include "lib.h"

void employeeFill(struct employee *employeesList, int totalEmployees){
    for (int i = 0; i < totalEmployees; i++){
        employeesList[i].id = i+1;
        printf("Моля въведете името на служителя: ");
        scanf(" %s", &employeesList[i].name);
        printf("Моля въведете презимето на служителя: ");
        scanf(" %s", &employeesList[i].surname);
        printf("Моля въведете фамилията на служителя: ");
        scanf(" %s", &employeesList[i].familyName);
        printf("Моля въведете длъжността на служителя: ");
        scanf(" %[^\n]", &employeesList[i].position);
        printf("Моля въведете заплатата на служителя: ");
        scanf(" %d", &employeesList[i].salary);
        printf("Моля въведете трудовият стаж в години на служителя: ");
        scanf(" %d", &employeesList[i].workingExperience);
        printf("\n");
    }
}

void bossFill(struct employee *employeesList, struct boss *bossList, int totalEmployees){
    for (int i = 0; i < totalEmployees; i++){
        printf("\nМоля въведете мениджъра на %s %s с № %d\n",
        employeesList[i].name, employeesList[i].familyName, employeesList[i].id);
        printf("Моля въведете името на мениджъра: ");
        scanf(" %s", &bossList[i].name);
        printf("Моля въведете презимето на мениджъра: ");
        scanf(" %s", &bossList[i].surname);
        printf("Моля въведете фамилията на мениджъра: ");
        scanf(" %s", &bossList[i].familyName);
    }
}
