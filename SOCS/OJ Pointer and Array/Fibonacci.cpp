#include <stdio.h>
int main()
{
	int t, n;
	long long int hari[90];
	scanf("%d", &t);

	hari[1] = 0;
	hari[2] = 1;
	for (int i = 1; i <= t; i++)
	{
		scanf("%d", &n);

		if (n == 1 || n == 2)
		{
			printf("Case #%d: %lld\n", i, hari[n]);
		}
		else
		{
			for (int j = 3; j <= n; j++)
			{
				hari[j] = hari[j - 1] + hari[j - 2];
			}

			printf("Case #%d: %lld\n", i, hari[n]);
		}
	}
	return 0;
}
