#include <stdio.h>
void bubbleSort(int a[], int size);

int main() {
	int i, list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };
	int size = sizeof(list) / sizeof(list[0]);
	printf("\n정렬할 원소 : ");
	for (i = 0; i < size; i++) printf("%3d", list[i]);
	printf("\n<<<<<<<<<<< 버블 정렬 수행 >>>>>>>>>>>");
	bubbleSort(list, size);

	getchar(); return 0;
}