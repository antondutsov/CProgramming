#include <stdio.h>

int splitedByThree(int value){
  int index = 18;
  int result = value | index;

  return result;
}

int main(){
  int value = 4;
  printf("%d", splitedByThree(value));

  return 0;
}
