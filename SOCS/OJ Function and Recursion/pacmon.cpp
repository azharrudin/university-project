#include <stdio.h>

int food = 0;

void checkMap(char map[][101], int visited[][101], int x, int y, int j, int k){

    if(j<0 || j>=x || k<0 || k>=y || visited[j][k] || map[j][k] == '#'){
        return;
    }

    visited[j][k] = 1;

    if(map[j][k] == '*'){
        food++;
        map[j][k] = '.';
    }

    checkMap(map, visited, x, y, j+1, k);
    checkMap(map, visited, x, y, j-1, k);
    checkMap(map, visited, x, y, j, k+1);
    checkMap(map, visited, x, y, j, k-1);
}

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        int px, py;
        char map[101][101];
        int visited[101][101] = {0};
        for (int j = 0; j < x; j++)
        {
            for (int k = 0; k < y; k++)
            {
                scanf(" %c", &map[j][k]);

                if (map[j][k] == 'P')
                {
                    px = j;
                    py = k;
                }
            }
        }

        food = 0;
        checkMap(map, visited, x, y, px, py);

        printf("Case #%d: %d\n", i, food);
    }
    return 0;
}