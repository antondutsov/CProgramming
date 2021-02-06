
#include <stdio.h>

size_t my_strlen(char *s){
    size_t str = 0u;
    while(*s++ != '\0'){
        str++;
    }
return str;

}
int main(){
    char s[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("%li", my_strlen(s));

return 0;
}
