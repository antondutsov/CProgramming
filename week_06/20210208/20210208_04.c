/*
Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float.
*/
#include<stdio.h>

double calcAverage(double alpha[], int lenght);

int main(void) {
	int n, i;
	printf("Моля въведете от колко елемента ще се състои масивът: \n");
	scanf("%d", &n);
	double alpha[n];

	for (i = 0; i < n; i++) {
		printf("Въведете стойност за [%d]: ", i);
		scanf("%lf", &alpha[i]);
	}

	printf("Средно-аритметичната стойност е %.2lf", calcAverage(alpha, n));

	return 0;
}

double calcAverage(double alpha[], int length) {
	double rez = 0.0;
	for (int i = 0; i < length; i++) {
		rez += alpha[i];
	}

	return rez / length;
}
