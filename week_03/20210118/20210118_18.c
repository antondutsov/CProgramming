int main(void)
{

    unsigned char input, output, loop;


    char switches = 0x00; // STANDARD INPUT, NOW I WANT TO CHANGE THIS TO USER DEFAULT 1-8

    printf("Turn on/off light? \n Press 1-8\n");


    //input = getch();
    switches = scanf("%d", &input);

    for (loop = 0; loop <8; loop++)

        if (switches |= (1 << input-1)) {
            printf("---[--]------------(X)\n");

        }


        else {
            printf("---[  ]------------( )\n");}

return 0;

}
