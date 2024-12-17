#include <stdio.h>

int jalan[8][2] = {
    {-1,2},{1,2},{-2,1},{2,1},
    {-2,-1},{2,-1},{-1,-2},{1,-2}
};

int isValid(int y, int x){
    //klo di posisi di luar papan maka return 0
    if( x < 0 || y < 0 || x > 7 || y > 7) return 0;
    //if(papan[y][x] != 0) return 0;  //pernah jalan ke situ
    return 1;       //papan masih kosong return 1
}

void kudaJalan(int papan[8][8], int y, int x, int langkah, int step){
    int py, px;
    //kemungkinan kuda bisa jalan ke 8 arah
    for(int i=0; i<8; i++){
        py = y + jalan[i][0];
        px = x + jalan[i][1];
        if( isValid(py,px) ){
            papan[py][px] = 1;
            if( langkah+1 < step ){
                kudaJalan(papan, py, px, langkah + 1, step);
            }
        }
    }
    /*
    //rekursif selama langkah < step
    if(langkah < step){
        //klo posisi valid maka tandai di papan
        if(isValid(y,x)){
            papan[y][x] = 1;
        }
        //kemungkinan kuda bisa jalan ke 8 arah
        for(int i=0; i<8; i++){
            kudaJalan( y + jalan[i][0], x + jalan[i][1] , langkah + 1, step);
        }
    }
    */
}

int flag;
void kuda2Jalan(int papan[8][8], int y, int x, int langkah, int step){
    int py, px;
    //kemungkinan kuda bisa jalan ke 8 arah
    for(int i=0; i<8; i++){
        py = y + jalan[i][0];
        px = x + jalan[i][1];
        if( isValid(py,px) ){
            //papan[py][px] = 2;
            //klo di tile tsb ketemu kuda 1
            if(papan[py][px] == 1){
                flag = 1;
            }
            else if( langkah+1 < step ){
                kuda2Jalan(papan, py, px, langkah + 1, step);
            }
        }
    }
}

void cetakPapan(int papan[8][8]){
    for(int y=0; y<8; y++){
        for(int x=0; x<8; x++){
            printf("%d ", papan[y][x]);
        }
        putchar('\n');
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1; tc<=t; tc++){
        int papan[8][8] = { };
        int step;
        scanf("%d", &step);
        char pos[2][5];
        scanf("%s %s", pos[0], pos[1] );
        //printf("%d %s %s\n", step, pos[0], pos[1] );
        
        int x = pos[0][0] - 'A';
        int y = pos[0][1] - '1';
        
        papan[y][x] = 1;
        if(step > 8) step = 8;
        kudaJalan(papan, y, x, 0, step);
        //cetakPapan(papan);
        
        int x2 = pos[1][0] - 'A';
        int y2 = pos[1][1] - '1';
        
        flag = 0;
        if(papan[y2][x2] == 1){
            flag = 1;
        }
        else{
            kuda2Jalan(papan, y2, x2, 0, step);
            //cetakPapan(papan);
        }
        
        printf("Case #%d: ", tc);
        if(flag == 1){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}

