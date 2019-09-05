#include <stdio.h>

void Bubble_sort (int *arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main() {
	printf("Enter number of the elements in array: ");
	int size;
	scanf("%d", &size);
	int arr[size];
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	Bubble_sort(&arr, size);

	for (int i = 0; i < size; i++) {
		printf ("%d ", arr[i]);
	}

}