#include <stdio.h>
int main()
{
	int baris, kolom;
	scanf("%d %d", &baris, &kolom);

	int kebun[100][100];
	for (int i = 1; i <= baris; i++)
	{
		for (int j = 1; j <= kolom; j++)
		{
			scanf("%d", &kebun[i][j]);
		}
	}

	int t;
	scanf("%d", &t);

	int b, k, ubah;
	for (int i = 1; i <= t; i++)
	{
		scanf("%d %d %d", &b, &k, &ubah);
		kebun[b][k] = ubah;
	}

	for (int i = 1; i <= baris; i++)
	{
		for (int j = 1; j <= kolom; j++)
		{
			printf("%d%c", kebun[i][j], ((j == kolom) ? '\n' : ' '));
		}
	}

	return 0;
}
