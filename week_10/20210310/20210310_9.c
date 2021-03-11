/*
Задача 9
Дефинирайте две функции в хедър файл и едната
използваща setjmp, за да сетне мястото, на което другата
чрез longjmp да се върне.
Използвайте ги в отделен файл main.c , за да се види, че за
разлика от goto setjmp и longjmp могат да се използват в
различни файлове. 
*/

#include <setjmp.h>
#include <stdio.h>

int sj(char *s, jmp_buf buf)
{
    int i = setjmp(buf);
    printf("Задаване на setjmp връщане -- %d \n", i);
    printf("s = %s \n", s);
    return i;
}
int lj(int i, jmp_buf buf)
{
    printf("Във lj: i = %d, Извикване на longjmp \n", i);
    longjmp(buf, i);
}

jmp_buf buf;
int main()
{
    if (sj("Бушон!", buf) != 0)
        exit(0);
    lj(3, buf);

return 0;
}