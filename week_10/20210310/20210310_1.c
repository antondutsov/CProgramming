/*
Задача1
Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compare(FILE *fd1, FILE *fd2);
int main(int argc, char *argv[]){
    FILE *fd1, *fd2;
    if (argc > 3){
        fprintf(stderr, "\n Грешка при зареждането на файловете!!! \n");
        exit(1);
    }
    else{
        if ((fd1 = fopen("fileOne.txt", "r")) == NULL){
            perror("Грешка");
            return -1;
        }
        else if ((fd2 = fopen("fileOneText.txt", "r")) == NULL){
            perror("Грешка");
            return -1;
        }
        else{
            compare(fd1, fd2);
            fclose(fd1);
            fclose(fd2);
            exit(0);
        }
    }
}
void compare(FILE * fd1, FILE * fd2){
        char line1[40], line2[40];
        char *l1, *l2;
        do{
            l1 = fgets(line1, 40, fd1);
            l2 = fgets(line2, 40, fd2);
            if (l1 == line1 && l2 == line2){
                if (strcmp(line1, line2) != 0){ 
                    printf("Има разлика в ред \n %s\n", line1);
                    l1 = l2 = NULL;
                }
            }
            else if (l1 != line1 && l2 != line2){
                printf("КРАЙ на първи файл \n %s \n", line2);
			}
            else if (l1 == line1 && l2 != line2){
                printf("КРАЙ на втори файл \n %s \n", line1);
			}
        } while (l1 == line1 && l2 == line2);
}