/* Задача 11.
Напишете програма, в която се въвеждат пореден номер,
име, фамилия, възраст на участници в маратон. Изискването
е за името и фамилията да не се използват масиви с
фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */

#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[31];
    char famillyName[31];
    int age;
    int id;
};

int main(){
    struct student *pstd;
    int n,i;

    printf("Въведете общият брой на студентите: ");
    scanf("%d",&n);

    pstd=(struct student*)malloc(n*sizeof(struct student));

    if(pstd==NULL)
    {
        printf("Недостатъчно памет! \n");
        return 0;
    }

    for(i=0; i<n; i++)
    {
        printf("\nВъведете данни за студента [%3d]: \n", i+1);

        printf("Въведете име: ");

        /*fflush();*/
        scanf(" ");

        gets((pstd+i)->name);

        printf("Въведете фамилия: ");

        gets((pstd+i)->famillyName);

        printf("Въведете възраст: ");

        scanf("%f",&(pstd+i)->age);

        printf("Въведете студентски номер: ");

        scanf("%d",&(pstd+i)->id);
    }

    printf("\nВъведохте следните данни:\n");

    for(i = 0; i < n; i++)
    {
        printf("%30s \t %30s \t %d \n",(pstd+i)->name,(pstd+i)->famillyName,(pstd+i)->age,(pstd+i)->id);
    }

return 0;
}
