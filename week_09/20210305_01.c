/*
Задача 1. За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки. 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

typedef struct 
{
    int shortBoard;
    int longBoard;
    int smallBrecket;
    int bigBrecket;
    int screw;

} stand;

int main()
{
    stand *current = (stand *)malloc(sizeof(stand));
    stand *needed = (stand *)malloc(sizeof(stand));
    scanf("%d", &current->longBoard);
    
    fflush(stdin);
    scanf("%d", &current->shortBoard);
    
    fflush(stdin);
    scanf("%d", &current->smallBracket);
    fflush(stdin);
    scanf("%d", &current->bigBrecket);
    
    fflush(stdin);
    scanf("%d", &current->screw);
    
    needed->longBoard = 4;
    needed->shortBoard = 6;
    needed->smallBracket = 12;
    needed->bigBracket = 2;
    needed->screw = 12;

    int broi[5];
    int count =  INT_MAX;

        if (count>(current->longBoard / needed->longBoard)){
            count = current->longBoard / needed->longBoard;
        }

        if (count>(current->longBoard / needed->longBoard)){
            count = current->longBoard / needed->longBoard;
        }

        if (count>(current->smallBracket / needed->smallBracket)){
            count = current->smallBracket / needed->smallBracket;
        }

        if (count>(current->smallBracket / needed->smallBracket)){
            count = current->smallBracket / needed->smallBracket;
        }

        if (count>(current->bigBrecket / needed->bigBrecket)){
            count = current->bigBrecket / needed->bigBrecket;
        }

        if (count>(current->screw / needed->screw)){
            count = current->screw / needed->screw;
        }
        
    printf("С наличните материали (%d- дълги дъски, %d- къси дъски, %d- малки скоби, %d- големи скоби, "
           ", %d- винта) могат да се сглобят %d етажерки! ", current->longBoard, current->shortBoard,
           current->smallBracket, current->bigBrecket, current->screw, count);

return 0;
}
