#include <stdio.h>
int main()
{
	int t, n;
	scanf("%d", &t);

	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);

		int num[200];
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &num[j]);
		}

		int total;
		int totalSum = 0;
		int check[200] = {0};

		for (int j = 0; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				total = num[j] + num[k];
				for (int z = 0; z < n; z++) // 1 2 3 3
				{
					if (total == num[z] && check[z] == 0)
					{
						check[z] = 1;
						totalSum++;
					}
				}
			}
		}

		// Penjelasan kenapa check[z] : 
		// 0 0 1 1
		// 1 2 3 3
		// 1+2 = 3

		// 0 0 1 0 (karena indeks ke 3 sama)
		// 0 0 1 1 (karena indeks ke 3 sama)
		
		printf("Case #%d: %d\n", i, totalSum);
	}

	return 0;
}
