#include<stdio.h>

unsigned Factorial();

int main(){
    unsigned index =     Factorial(3);
    printf("%u \n", index);
return 0;
}


unsigned Factorial(unsigned uValue){
    if(uValue < 2){
        return 1;
    }
    else{
        return uValue * Factorial(uValue -1);
    }
}
