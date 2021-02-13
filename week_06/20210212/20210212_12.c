/* Задача 12.
Използвайки предишното упражнение, изведете участниците
подредени по азбучен ред. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();

int main(void)
{
    menu();
    return 0;
}

void menu()
{

    int id[31], age[50];
    char **name, **familyName, choice, s[31];
    int flag = 1, count = 0, i, j, temp;

    name = (char **)malloc(sizeof(char *));
    if (NULL == name)
    {
        printf("Грешка в разпределението на паметта! \n");
        exit(1);
    }

    familyName = (char **)malloc(sizeof(char *));
    if (NULL == familyName)
    {
        printf("Грешка в разпределението на паметта! \n");
        exit(2);
    }

    while (flag)
    {
        printf("Въведете идентификационния номер на участника: ");
        fflush(stdin);
        scanf("%d", &id[count]);

        printf("Въведете името на участника: ");
        name[count] = (char *)malloc(10);
        if (NULL == name[count])
        {
            printf("Грешка в разпределението на паметта! \n");
            exit(3);
        }
        fflush(stdin);
        gets(name[count]);

        printf("Въведете фамилното име на участника: ");
        familyName[count] = (char *)malloc(10);
        if (NULL == familyName[count])
        {
            printf("Грешка в разпределението на паметта! \n");
            exit(4);
        }
        fflush(stdin);
        gets(familyName[count]);

        printf("Въведете възрастта на участника: ");
        fflush(stdin);
        scanf("%d", &age[count]);

        printf("Желаете ли да въвеждате още участници? Натиснете 'y', за да продължите или 'n', за да откажете \n");
        fflush(stdin);
        scanf("%c", &choice);
        if (choice == 'n')
        {
            for (i = 0; i <= count; i++)
            {
                for (j = i + 1; j <= count; j++)
                {
                    if (strcmp(name[i], name[j]) > 0)
                    {
                        strcpy(s, name[i]);
                        strcpy(name[i], name[j]);
                        strcpy(name[j], s);

                        strcpy(s, familyName[i]);
                        strcpy(familyName[i], familyName[j]);
                        strcpy(familyName[j], s);

                        temp = id[i];
                        id[i] = id[j];
                        id[j] = temp;

                        temp = age[i];
                        age[i] = age[j];
                        age[j] = temp;
                    }
                }
            }

            printf("Вашият списък с участниците: \n");
            for (i = 0; i <= count; i++)
            {
                printf("Идентификационне номер: %d \n", id[i]);
                printf("    Име: %s \n", name[i]);
                printf("    Фамилия: %s \n", familyName[i]);
                printf("    Възраст: %d \n", age[i]);
            }
            flag = 0;
        }
        count++;
    }
    free(name);
    free(familyName);
    free(name[count]);
    free(familyName[count]);
}
