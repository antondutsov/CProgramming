/* 
Задача 1. Дефиниране на структура, достъп до членове
#include <stdio.h>
#include <string.h>
struct tagPaper {
unsigned m_nBookId;
char m_szTitle[64];
char m_szAuthor[64];
char m_szSubject[256];
};
*/

#include <stdio.h>
#include <string.h>

struct tagPaper{
    unsigned m_nBookId;
    char m_szTitle[31];
    char m_szAuthor[31];
    char m_szSubject[255];
};


int main(void){
    struct tagPaper stPaper;
    stPaper.m_nBookId = 01;
    strcpy(stPaper.m_szTitle, "Leviathan Wakes");
    strcpy(stPaper.m_szAuthor, "James S. A. Corey");
    strcpy(stPaper.m_szSubject, "The first book of 'The Expanse' series");
    printf("Paper Id : %d\n", stPaper.m_nBookId);
    printf("Paper Title : %s\n", stPaper.m_szTitle);
    printf("Paper Author : %s\n", stPaper.m_szAuthor);
    printf("Paper Subject : %s\n", stPaper.m_szSubject);

    struct tagPaper secondBook = {02, "Caliban's War", "James S. A. Corey", "The second book of 'The Expanse' series"};
    printf("\nPaper Id : %d\n", secondBook.m_nBookId);
    printf("Paper Title : %s\n", secondBook.m_szTitle);
    printf("Paper Author : %s\n", secondBook.m_szAuthor);
    printf("Paper Subject : %s\n", secondBook.m_szSubject);

    struct tagPaper thirdBook = {03, .m_szAuthor = "James S. A. Corey", .m_szTitle = "The third book of 'The Expanse' series", .m_szSubject = "Abaddon's Gate"};
    printf("\nPaper Id : %d\n", thirdBook.m_nBookId);
    printf("Paper Title : %s\n", thirdBook.m_szTitle);
    printf("Paper Author : %s\n", thirdBook.m_szAuthor);
    printf("Paper Subject : %s\n", thirdBook.m_szSubject);

struct tagPaper forthBook = {04, .m_szAuthor = "James S. A. Corey", .m_szTitle = "The fourth book of 'The Expanse' series", .m_szSubject = "Cibola Burn"};
    printf("\nPaper Id : %d\n", forthBook.m_nBookId);
    printf("Paper Title : %s\n", forthBook.m_szTitle);
    printf("Paper Author : %s\n", forthBook.m_szAuthor);
    printf("Paper Subject : %s\n", forthBook.m_szSubject);

return 0;
}
