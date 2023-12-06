#include <stdio.h>
void func(int n, int arr[n][n], int a, int b[a][a])
{
	int count = 0, d = 0;
	for (int i = 0, x = 0; i < n; i += 2, x++)
	{
		for (int j = 0, y = 0; j < n; j += 2, y++)
		{
			d = arr[i][j];
			if (d < arr[i + 1][j])
				d = arr[i + 1][j];
			if (d < arr[i][j + 1])
				d = arr[i][j + 1];
			if (d < arr[i + 1][j + 1])
				d = arr[i + 1][j + 1];
			b[x][y] = d;
		}
	}
}
int main()
{
	int n;
	printf("Enter the dimensions\n2 For 2 x 2\n4 For 4 x 4\n8 For 8 x 8 \n");
	scanf("%d", &n);
	int arr[n][n];
	printf("Enter the values: \n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int a = n / 2;
	int b[a][a];
	func(n, arr, a, b);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			printf("%d	", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}