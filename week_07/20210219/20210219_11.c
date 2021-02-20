/*
Задача 11. Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 31

struct Student{
    char name[size];
    char family[size];
    struct Student *next;
};

int main(void){

    struct Student st = {"Stoyan","Petroff"};
    printf("Извеждане на информация директно от 'стринга': \n");
    printf("Име: %s\n", st.name);
    printf("Фамилия: %s\n", st.family);

    struct Student st2;
    st2.next = &st;
    printf("Извеждане на информация чрез 'член указател' \n");
    printf("Име: %s\n",st2.next->name);
    printf("Фамилия: %s\n",st2.next->family);

return 0;
}
