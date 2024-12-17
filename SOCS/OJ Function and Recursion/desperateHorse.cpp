#include<stdio.h>

int minWalk = -1;

typedef struct{
    int x,y,steps;
} Node;

void bfs(int map[][9], int sx, int sy, int fx, int fy){
    int visited[9][9] = {0};
    
    //kemungkinan pergerakan yang dapat dilakukan secara horizontal maupun vertikal
    int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
    int dy[] = {2, -2, 2, -2, 1, -1, 1, -1}; 
    //penulisan harus sesuai jika 1 hori dan 2 vert

    visited[sx][sy] = 1;

    //asumsi max kotak 64 , catur 8x8
    Node queue[100];
    int front = 0, rear = 0; // posisi antrian

    // menampung posisi awal kuda
    queue[rear++] = (Node){sx, sy ,0};
    
    while(front < rear){
        Node current = queue[front++];

        if(current.x == fx && current.y == fy){
            minWalk = current.steps;
            break;
        }

        for(int i=0; i<8; i++){
            // posisi baru kuda new x dan new y
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];

            if(nx >= 0 && nx < 8 && ny >= 0 && ny < 8 && !visited[nx][ny]){
                visited[nx][ny] = 1;
                queue[rear++] = (Node){nx, ny, current.steps+1};
            }
        }
    }
}

// void checkMap(int map[][9], int sx, int sy, int fx, int fy, int steps){
//     if(sx < 0 || sx >= 8 || sy < 0 || sy >= 8 || minWalk != -1 && steps >= minWalk){
//         return;
//     }

//     if(sx == fx && sy == fy){
//         if(minWalk == -1 || steps < minWalk){
//             minWalk = steps;
//         }
//         return;
//     }

//     if(map[sx][sy] == 0){
//         map[sx][sy] = 1;
//         checkMap(map, sx+1, sy+2, fx, fy, steps+1);
//         checkMap(map, sx+1, sy-2, fx, fy, steps+1);
//         checkMap(map, sx-1, sy+2, fx, fy, steps+1);
//         checkMap(map, sx-1, sy-2, fx, fy, steps+1);
//         checkMap(map, sx+2, sy+1, fx, fy, steps+1);
//         checkMap(map, sx+2, sy-2, fx, fy, steps+1);
//         checkMap(map, sx-2, sy+1, fx, fy, steps+1);
//         checkMap(map, sx-2, sy-1, fx, fy, steps+1);

//         map[sx][sy] = 0;
//     }
    
// }

void convertCoordinate(char start[], int *x, int *y){
    *x = start[0] - 'A' ;
    *y = start[1] - '0' - 1;
}

int main(){
    int map[9][9] = {0};
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        int sx, sy, fx, fy;
        char start[3], finish[3]; 
        scanf("%s %s", start, finish);

        convertCoordinate(start, &sx, &sy);
        convertCoordinate(finish, &fx, &fy);

        minWalk = -1;
        bfs(map, sx, sy, fx, fy);
        printf("Case #%d: %d\n", i, minWalk);
    }
    return 0;
}