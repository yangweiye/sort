#include <stdio.h>

void insertSort(int *arr, int length);

int main() {
	int arr[] = {24,5,235,45,23,7};
	int length  = sizeof(arr) / sizeof(int);
	insertSort(arr, length);

	for (int i = 0; i < length; ++i)
	{
		printf("%d\n", arr[i]);
	}
}

void insertSort(int *arr, int length) {
	int temp,j,i;

	for (j = 1; j < length; ++j)
	{	
		temp = arr[j];
		i = j - 1;
		while(i >= 0 && temp < arr[i]) {
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = temp;
	}
		
}