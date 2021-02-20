/*
Задача 14. Използвайки предишното упражнение, опишете структурите и
прототипите на функциите в отделен заглавен файл с разширение *.h, a
телата на функциите в един или няколко *.c сорс файлове.
*/

#include <stdio.h>
#include "functions.c"

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
