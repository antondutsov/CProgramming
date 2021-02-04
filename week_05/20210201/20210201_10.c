/*
Задача 10. Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].
*/

#include <stdio.h>
#include <string.h>

void reverse(char *s);
void itob(int n, char *str, int b);

/*
Опитайте числото 1001 в 3-на/4-на система :)
*/

int main(void){

    printf("Въведете цифра или число в 'десетичен' формат за конвертиране: ");
    int iValue = 0; /* числото което ще се конвертира */
    scanf("%d", &iValue);

    printf("Въведете база в която да се конвертира 'десетичната' стойност: ");
    int b; /* базата на която ще се завърта*/
    scanf("%d", &b);

    char str[127];

    itob(iValue, str, b);
    reverse(str);

    printf("%s\n", str);

return 0;
}

void reverse(char *s){
    int i = 0;
    int j = 1;
    char temp;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    return;
}

void itob(int iValue, char *str, int b){
    int i = 0, remainder;

    while (iValue != 0){
        remainder = iValue % b;
        switch (remainder){
        case 10:
            str[i] = 'A';
            break;
        case 11:
            str[i] = 'B';
            break;
        case 12:
            str[i] = 'C';
            break;
        case 13:
            str[i] = 'D';
            break;
        case 14:
            str[i] = 'E';
            break;
        case 15:
            str[i] = 'F';
            break;
        default:
            str[i] = remainder + '0';
            break;
        }

        iValue /= b;

        i++;
    }

return;
}
