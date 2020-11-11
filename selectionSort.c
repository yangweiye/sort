#include <stdio.h>

void selectionSort(int *arr, int length);

int main() {
	int arr[] = {24,34,12,24,74,21,1};
	int length = sizeof(arr)/sizeof(int);

	selectionSort(arr, length);

	for (int i = 0; i < length; ++i)
	{
		printf("%d\n", arr[i]);
	}
}

void selectionSort(int *arr, int length) {
	int min = 0;
	int temp = 0;

	for (int j = 0; j < length - 1; ++j)
	{
		min = j;

		for (int i = 1 + j; i < length; ++i)
		{
			if (arr[min] > arr[i])
			{
				min = i;
			}
		}

		temp = arr[j];
		arr[j] = arr[min];
		arr[min] = temp;
	}
}