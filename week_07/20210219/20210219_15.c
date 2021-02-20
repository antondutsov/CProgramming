


#include <stdio.h>
#include <stdlib.h>
struct tagTMyTime
{
    int hours;
    int minutes;
    int seconds;
};
void addSeconds(struct tagTMyTime *a, int n)
{
    if (n > 59)
    {
        a->seconds += n % 60;
        a->minutes += n / 60;
    }
    else if (n > 3599)
    {
        a->seconds += n % 3600;
        a->minutes += n % 60;
        a->hours += n / 24;
    }
    else
    {
        a->seconds += n;
    }
}
void addMinutes(struct tagTMyTime *a, int n)
{
    if (n > 59)
    {
        a->minutes += n % 60;
        a->hours += n / 60;
    }

    else
    {
        a->hours += n;
    }
}
void addHours(struct tagTMyTime *a, int n)
{
    if (n > 23)
    {

        a->hours += n % 24;
    }

    else
    {
        a->hours += n;
    }
}
int getSeconds(struct tagTMyTime a)
{
    int sec = (a.hours * 3600) + (a.minutes * 60) + a.seconds;
    return sec;
}
struct tagTMyTime getTime(int n)
{
    struct tagTMyTime a;
    a.hours = n / 3600;
    a.minutes = (n / 60) % 60;
    a.seconds = n % 60;

    return a;
}
struct tagTMyTime fixTime(struct tagTMyTime *a)
{

    if (a->seconds > 59)
    {
        a->minutes = a->minutes + (a->seconds / 60);
        a->seconds %= 60;
    }
    if (a->minutes > 59)
    {
        a->hours = a->hours + (a->minutes / 60);
        a->minutes %= a->minutes;
    }
    if (a->hours > 23)
    {

        a->hours = a->hours % 24;
    }

    return *a;
}
struct tagTMyTime TimeDifference(struct tagTMyTime a, struct tagTMyTime b)
{
    if (a.hours < b.hours)
    {
        return getTime(getSeconds(b) - getSeconds(a));
    }
    else
    {
        return getTime(getSeconds(a) - getSeconds(b));
    }

    return getTime(getSeconds(a) - getSeconds(b));
}
struct tagTMyTime TimeAdd(struct tagTMyTime a, struct tagTMyTime b)
{
    int sec = getSeconds(a) + getSeconds(b);
    return getTime(sec);
}
int main(int argc, char *argv[])
{
    struct tagTMyTime a = {4, 27, 23};
    struct tagTMyTime c = {6, 37, 16};
    struct tagTMyTime sub = TimeDifference(c, a);
    struct tagTMyTime add = TimeAdd(c, a);
    struct tagTMyTime d = {8, 27, 23};
    struct tagTMyTime *b = &d;
   

   
    printf("Разликата между %dh %dm %ds и %dh %dm %ds е: ", a.hours, a.minutes, a.seconds, c.hours, c.minutes, c.seconds);
    printf("%dh %dm %ds \n", sub.hours, sub.minutes, sub.seconds);
    printf("Прибавянето на %dh %dm %ds към %dh %dm %ds е: ", c.hours, c.minutes, c.seconds, a.hours, a.minutes, a.seconds);
    printf("%dh %dm %ds \n", add.hours, add.minutes, add.seconds);

    return 0;
}
