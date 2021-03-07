/*
Задача 12. Представете служителите във фирма в структура с
членове: пореден номер, име, презиме, фамилия, позиция, трудов стаж в
години, заплата в лева, указател към структурата, описващ неговия
началник. Напишете програма, която въвежда 10 служителя, които се
съхраняват в масив от описаните структури. Въвеждането на служителите
може да стане на два паса, първо въвеждане на всички данни без
указателя към началника и на втори пас, указване на всеки служител кой е
неговият началник. В решението трябва да се използва динамично
заделяне на памет и typedef 
*/


#include <stdio.h>
#include <string.h>
typedef struct Employee {
  int id;
  char name[50];
  char middlename[50];
  char lastname[50];
  char position[50];
  int years;
  int salary;
  struct Employee *boss;
};

int main(){
  
    struct Employee arrEmp[10];
    struct Employee arrMan[10];
    // Array of two managers
    for(int i=0; i<2; i++){    
        printf("\nEnter manager name:"); 
        scanf("%s",&arrMan[i].name);
        printf("\nEnter manager last name:"); 
        scanf("%s",&arrMan[i].middlename);
    }

    arrEmp[0].boss = &arrMan[(rand()%2)];
    printf("%s", arrEmp[0].boss->name);
     

    for(int i=0; i<10; i++){    
        printf("\nEnter ID:");    
        scanf("%d",&arrEmp[i].id);
        printf("\nEnter fisrst name:");    
        scanf("%s",&arrEmp[i].name);
        printf("\nEnter middle name:");    
        scanf("%s",&arrEmp[i].middlename); 
        printf("\nEnter last name:");    
        scanf("%s",&arrEmp[i].lastname); 
        printf("\nEnter position:");    
        scanf("%s",&arrEmp[i].position);   
        printf("\nEnter experience in (months):");    
        scanf("%s",&arrEmp[i].years);  
        printf("\nEnter salary:");    
        scanf("%s",&arrEmp[i].salary);
        // Randomnly asigning manager from the manager array
        arrEmp[0].boss = &arrMan[(rand()%2)];   
    }

    printf("\nEmployes list\n"); 
    for(int i=0; i<10; i++){    
        printf("ID: %d \tFisrst name:%s \tMiddle name: %s \tLast name: %s \tPosition: %s \tExperience: %d months\tSalary: %d \t Manager: %s %s \n",
        arrEmp[i].id, arrEmp[i].name, arrEmp[i].middlename, arrEmp[i].lastname, arrEmp[i].years, arrEmp[i].salary, arrEmp[0].boss->name, arrEmp[0].boss->lastname);     
	}    

    return 0;
}