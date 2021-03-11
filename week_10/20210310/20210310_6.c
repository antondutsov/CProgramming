/*
Задача 6
Използвайте time(0), за да принтирате всяка секунда.
Използвайте alarm(1), за да подадете сигнал за настъпила
секунда signal (SIGALRM,..).
Използвайте setjmp(Env) в main.c, за да определите мястото от
където да излезете.
Използвайте longjmp(Env, 1), за да джъмпнете на това място,
след като е настъпила 8-мата минута.
Функцията void alarm_me(int d) дефинирайте като инлайн в .h, а
я и използвайте в main.c .
*/

#include <signal.h>
#include <setjmp.h>

int i = 0;
int j = 0;
long T0 = 0;
jmp_buf Env;
void alarm_me(int d){
    long t1;
    t1sec = time(0) - T0;
    printf("%d секунди%s са изминали: j = %d. i = % d\n ", t1sec, (t1sec == 1) ? "" : "s", j, i);
    if (t1sec >= 10){
        printf("Неуспешно! \n");
        longjmp(Env, 1);
    }
    alarm(1);
    signal(SIGALRM, alarm_me);
}


extern i;
extern j;

int main(){
    signal(SIGALRM, alarm_me);
    alarm(1);
    if (setjmp(Env) != 0){
        printf("Неуспешно: j = %d, i = %d \n", j, i);
        exit(1);
    }
    T0 = time(0);
    for (j = 0; j < 10000; j++){
        for (i = 0; i < 1000000; i++);
    }
}