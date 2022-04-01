#include<stdio.h>
#define max_size 100
int main()
{
	int array[max_size];
	int size, i;
	printf("Enter size of the array : ");
	scanf_s("%d", &size);
	printf("Enter elements in array : ");
		for (i = 0; i < size; i++)
		{
			scanf_s("%d", &array[i]);
		}
	printf("\nArrray in reverse order : ");
	for (i = size - 1; i >= 0; i--)
	{
		printf("%d ", array[i]);
	}
	return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#define n 6
int main() {
	int arr[n] = { 9, 8, 7, 2, 4, 3 };
	int temp;
	for (int i = 0; i < n / 2; i++) {
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
	for (int i = 0; i < n; i++) {
		printf("%d,", arr[i]);
	}
	printf("\n");
	return 0;
}
*/