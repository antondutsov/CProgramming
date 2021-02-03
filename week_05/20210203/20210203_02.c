#include <stdio.h>

int printArr();

int main(){

//    char arr1[3] = {1, 2, 3};
//    int arr2[3] = {4, 5, 6};
//    double arr3[3] = {7, 8, 9};
//
//    printf("%3d \n %d \n %d \n", sizeof(arr1), sizeof(arr2), sizeof(arr3));

    int a[40] = {6};
    printArr(a);

return 0;
}

int printArr(int a[]){
    int rez = sizeof(a)/sizeof(a[0]);
    printf("%d \n", rez);
}
