/*
Задача 5
Напишете функция, принтираща сигналите, които й се подават.
Обработка на сигнали signal.h
*/

#include <stdio.h>
#include <signal.h>

void handleSignal(int iSignal)
{
    printf("\nПолучен сигнал: %d \n", iSignal);
}
int main(){
    signal(SIGINT, handleSignal);
    signal(SIGABRT, handleSignal);
    for (;;)
    {
        sleep(1);
    }
    return 0;
}