/*
Задача 13. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник.
*/


#include <stdio.h>

struct boss{
    char name[BUFSIZ];
    char surname[BUFSIZ];
    char familyName[BUFSIZ];
};

struct employee{
    int id;
    char name[BUFSIZ];
    char surname[BUFSIZ];
    char familyName[BUFSIZ];
    char position[BUFSIZ];
    int workingExperience;
    int salary;
    struct boss *pointer;
};

void employeeFill(struct employee *employeesList, int totalEmployees);
void bossFill(struct employee *employeesList, struct boss *bossList, int totalEmployees);

int main(void){
    int totalEmployees = 10;
    struct employee employeesList[totalEmployees];
    struct boss bossList[totalEmployees];

    employeeFill(employeesList, totalEmployees);
    bossFill(employeesList, bossList, totalEmployees);

    for (int i = 0; i < totalEmployees; i++){
        printf("\n\nСлужител с №%d: %s %s %s\nна длъжност: %s\nполучава: %d BGN \n" 
        "има %d години трудов стаж\nНеговият/нейният началник е: %s %s %s;\n",
               employeesList[i].id, employeesList[i].name, employeesList[i].surname,
               employeesList[i].familyName, employeesList[i].position, employeesList[i].salary, employeesList[i].workingExperience,
               bossList[i].name, bossList[i].surname, bossList[i].familyName);
    }

    return 0;
}

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
