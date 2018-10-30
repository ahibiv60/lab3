#include "pch.h"
#include <stdio.h>
#include <math.h>

//Виведення функції
void show(int mas[5][5]) 
{
	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			printf("%d\t", mas[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//Введення функції
void enter(int mas[5][5]) {
	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			printf("a[%d][%d]=", i, j);
			scanf_s("%d", &mas[i][j]);
		}
	}
}

//Сортування
void sort(int mas[5][5]) 
{
	for (int i = 0; i < 5; i++) 
	{                    
		for (int c = 0; c < 5; c++) 
		{
			for (int j = 0; j < 4; j++) 
			{
				if (mas[i][j] < mas[i][j + 1]) 
				{
					int tem = mas[i][j];
					mas[i][j] = mas[i][j + 1];
					mas[i][j + 1] = tem;

				}
			}

		}
	}
}
void func(int mas[5][5]) 
{
	int dob = 1;
	int product = 1;
	for (int j = 0; j < 4; j++) 
	{
		for (int i = 0; i < 5; i++) 
		{
			if (i > j) {
				dob *= mas[i][j];
			}
		}
		if (dob != 0) {
			product = product + dob;
		}
		printf("j = %d\t", j);
		printf("dob = %d\n", dob);
		dob = 1;
	}
	double d = 4.0;
	/*if (product < 0) {
		product = product * (-1);
	}*/
	double aav = product / d;
	printf("\n");
	printf("aav = %lf\n", aav);
}

int main() {
	int size = 5;
	int mas[5][5];

	printf("Enter matrix:\n");
	enter(mas);
	printf("\n");
	printf("Your matrix:\n");
	show(mas);
	sort(mas);
	printf("Sorted matrix:\n");
	show(mas);
	printf("Suma and aav:\n");
	func(mas);

	return 0;
}