/*Задача 7.3. Пренапишете предишното упражнение като
вмъкнете конструкцията switch-case в един цикъл while(), така
че питането да се повтаря, докато потребителят не въведе
числото 4, което е поставено в питането за изход от програмата .
Така се създават менюта за изпълнение на програма на С.
*/

int main(){
    printf("Press 1 to see message Hello \n");
    printf("Press 2 to see Poem \n");
    printf("Press 3 to see hidden message \n");

    int choice;
    scanf("%d", &choice);

    while(choice != 4){
        switch(choice){
            case 1:
                printf("Hello!");
                break;
            case 2:
                printf("The salad does not fret if is not a venegret! \n");
                break;
            case 3:
                printf("The secret message is: '42' \n");
                break;
            default:
                printf("The choice is not in scope! \n");
                break;
            }
        choice++;

}

return 0;

}

