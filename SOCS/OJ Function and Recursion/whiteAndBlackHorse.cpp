#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isSafe(int x, int y)
{
    return (x >= 1 && x <= 8 && y >= 1 && y <= 8);
}
void convertToCoordinates(char coord[2], int *x, int *y)
{
    *x = coord[0] - 'A' + 1;
    *y = coord[1] - '0';
}
typedef struct
{
    int x, y, dist;
} Cell;
int minKnightMoves(int startX, int startY, int destX, int destY)
{
    Cell queue[64];
    int front = 0, rear = 0;
    bool visited[9][9];
    memset(visited, false, sizeof(visited));
    queue[rear].x = startX;
    queue[rear].y = startY;
    queue[rear].dist = 0;
    rear++;
    visited[startX][startY] = true;
    while (front < rear)
    {
        Cell current = queue[front];
        front++;
        if (current.x == destX && current.y == destY)
        {
            return current.dist;
        }
        int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
        int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
        for (int i = 0; i < 8; i++)
        {
            int newX = current.x + dx[i];
            int newY = current.y + dy[i];
            if (isSafe(newX, newY) && !visited[newX][newY])
            {
                queue[rear].x = newX;
                queue[rear].y = newY;
                queue[rear].dist = current.dist + 1;
                rear++;
                visited[newX][newY] = true;
            }
        }
    }
    return -1;
}
int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        char startCoord[3], destCoord[3];
        int startX, startY, destX, destY, n;
        scanf("%d", &n);
        getchar();
        scanf("%s %s", startCoord, destCoord);
        convertToCoordinates(startCoord, &startX, &startY);
        convertToCoordinates(destCoord, &destX, &destY);
        int moves = minKnightMoves(startX, startY, destX, destY);
        printf("Case #%d: %s\n", t, (moves <= n * 2) ? "YES" : "NO");
    }
    return 0;
}