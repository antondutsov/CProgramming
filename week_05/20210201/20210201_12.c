/*
Задача 12 напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)
*/

int any(char *str1, char *str2)
{
    int index, j, position = 0;

    for (index = 0; str1[index] != 0; index++)
    {
        for (j = 0; str2[j] != 0; j++)
        {
            if (str1[index] == str2[j])
            {
                position = index;
            }
        }
    }

return position;
}

int main(void)
{
    char str1[] = "Bon Chanse";
    printf("The first string is: %s \n", str1);

    char str2[] = "Inspecteur";
    printf("The second string is: %s \n", str2);

    printf("\nThe position of equal symbol is: %d \n", any(str1, str2));

return 0;
}
