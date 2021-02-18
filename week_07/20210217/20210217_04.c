/*
Задача 4.
Напишете две функции:
void push(int) (добавя елемент на края на стека) и
int pop() (премахва елемент от края на стека)
за стек с дълбочина 16 (може да се използва масив от 16 елемента от
тип int).
Проверете дали функциите работят коректно във функция main, като
добавите 15 елемента и след това ги извадите от стека и ги изведете на
екрана.
*/

#include <stdio.h>
int MAXSIZE = 16;
int stack[16];
int top = -1;
int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if (top == MAXSIZE)
        return 1;
    else
        return 0;
}
int peek()
{
    return stack[top];
}
int pop()
{
    int data;
    if (!isempty())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
    else
    {
        printf("Не може да се изведе информация, Stack-ът е празен. \n");
    }
}
int push(int data)
{
    if (!isfull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
    {
        printf("Не може де се въведе информация, Stack-ът е пълен. \n");
    }
}
int main()
{
    // push items on to the stack
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);
    printf("Елементи на върха на Stack-а: %d\n", peek());
    printf("Елементи: \n");
    // print stack data
    while (!isempty())
    {
        int data = pop();
        printf("%d\n", data);
    }
    printf("Stack-ът е пълен: %s\n", isfull() ? "true" : "false");
    printf("Stack-ът е празен: %s\n", isempty() ? "true" : "false");
    return 0;
}
