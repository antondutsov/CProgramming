/*
Задача 2
Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	FILE *fp;
	char c;
	char brackets[6] = "{}[]()";
	int bracketCounts[6] = {0};
	char * found;
	int i;


	if ((fp = fopen("brackets.txt", "r")) == NULL){
		perror("Грешка!!!");
		return -1;
}

	printf("Успешно зареждане на файла! \n");

while ((c = getc(fp)) != EOF){
    found = strchr(brackets, c);
    if (found != NULL) {
        bracketCounts[found - brackets]++;
    }
}


	fclose(fp);

for (i=0; i < 6; i+=2) {
    if (bracketCounts[i] != bracketCounts[i+1]) {
        printf("Недостатъчен брой скоби! \n");
        return 0;
    }
}

	printf("Достатъчен брой скоби! \n");

return 0;
}