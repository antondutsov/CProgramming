/*
6. Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях.
*/

#include<stdio.h>
#include <limits.h>

int largestElement(int *a, int size);

int main(void) {
	int alpha[7] = {40, 27, 1, 3, 6, 24, -8};

	printf("Най-голямата стойност от масива е: %d \n", largestElement(alpha, 7));

	return 0;
}

int largestElement(int *a, int size) {
	int largest;
	largest = INT_MIN;

	for (int i = 0; i < size; i++) {
		if (a[i] > largest)
			largest = a[i];
	}

	return largest;
}
