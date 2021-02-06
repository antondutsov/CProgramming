

#include <stdio.h>

int our_strcmp(char *s, char *t);

int main()
{
    char first[] = "abcdfe";
    char second[] = "abcdeg";

    printf("\nnumber/s returned by the strcmp function is: %d \n", our_strcmp(first, second));

return 0;
}

int our_strcmp(char *s, char *t)
{
    int i = 0;
    for(i = 0; s[i] == t[i]; i++)
        if(s[i] == '\0')
            return 0;

return s[i] - t[i];
}
