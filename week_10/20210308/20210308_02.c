/*
Задача 2.
Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът.
*/

#include <stdio.h>

int main(){
    FILE *pfile = NULL;
    char *filename = "test.txt";
    pfile = fopen(filename, "wt");
    if(pfile==NULL){
        printf("Неуспешно отваряне на %s. \n", filename);
    }
    fclose(pfile);
    pfile = NULL;
    rename("test.txt", "new_test.txt");

return 0;
}