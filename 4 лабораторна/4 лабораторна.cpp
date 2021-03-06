#include "pch.h"
#include <stdio.h>
#include <math.h>

//Введення функції
void fillMatrixFromConsole(int Matrix[5][5]) {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("Element: [%d][%d] = ", i, j);
			scanf_s("%d", &Matrix[i][j]);
		}
	}
}

//Виведення функції
void printMatrixToConsole(int Matrix[5][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", Matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//Сортування
void RowsBubbleSort(int Matrix[5][5])
{
	for (int i = 0; i < 5; i++)
	{
		for (int Repeat = 0; Repeat < 5; Repeat++)
		{
			for (int j = 0; j < 5 - 1; j++)
			{
				if (Matrix[i][j] < Matrix[i][j + 1])
				{
					int tem = Matrix[i][j];
					Matrix[i][j] = Matrix[i][j + 1];
					Matrix[i][j + 1] = tem;
				}
			}
		}
	}
}


//Розрахунки
void Сalculation(int Matrix[5][5])
{
	int product = 1;
	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (i > j) {
				product *= Matrix[i][j];
			}
		}
		printf("j = %d\t", j);
		printf("product = %d\n", product);
		product = 1;
	}
	double d = 4.0;
	double aav = product / d;
	printf("\n");
	printf("aav = %lf\n", aav);
}

int main() {
	int Matrix[5][5];

	printf("Enter matrix:\n");
	fillMatrixFromConsole(Matrix);
	printf("\n");
	printf("Your matrix:\n");
	printMatrixToConsole(Matrix);
	RowsBubbleSort(Matrix);
	printf("Sorted matrix:\n");
	printMatrixToConsole(Matrix);
	printf("Suma and aav:\n");
	Сalculation(Matrix);

	return 0;
}