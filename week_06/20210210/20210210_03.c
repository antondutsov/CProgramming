/*
Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char string[25], reverse_string[25] = {'\0'};
    int  i, length = 0, flag = 0;

    fflush(stdin);
    printf("Въведете стринг: \n");
    gets(string);

    for (i = 0; string[i] != '\0'; i++){
        length++;
    }
    for (i = length - 1; i >= 0; i--){
       reverse_string[length - i - 1] = string[i];
    }

    for (i = 0; i < length; i++){
        if (reverse_string[i] == string[i]){
            flag = 1;
        }
        else{
            flag = 0;
        }
    }
    if (flag == 1){
        printf("This is a palindrome \n", string);
    }
    else{
        printf("This is not a palindrome \n", string);
    }

return 0;
}
