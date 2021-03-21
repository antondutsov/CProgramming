#include <stdio.h>
#include <stdlib.h>   // for exit() function

int main()
{
    char c[1000];
	char cc[1000];

    FILE *fptr;
	FILE *fptr2;
	FILE *fptr3;

    if ((fptr = fopen("num1.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // exit from program if file pointer returns NULL.
        exit(1);         
    }

    // read the text until newline 
    fscanf(fptr,"%[^\n]", c);

    if ((fptr2 = fopen("num2.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // exit from program if file pointer returns NULL.
        exit(1);         
    }

    // read the text until newline 
    fscanf(fptr2,"%[^\n]", cc);

    printf("Data from the file1: \n%s", c);
	printf("Data from the file2: \n %s", cc);
    fclose(fptr);
    fclose(fptr2);
	
		fscanf("res.txt", "w");    
    return 0;
}
