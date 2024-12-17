#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int sum(char x[100][10], int a, int b){
    int i = a-1;
    int total = 0;
    while( i < b  ){
        total +=atoi(x[i]);
  
        i++;
    }
    return total;
}
int main(){
    int i,a,f,fake;
    fake=0;
    i=0;
    scanf("%d",&a); getchar();
    char ajis[a][10];
    while(i < a)
    {
        char mek[10];
        scanf("%s", mek);
       strcpy(ajis[i], mek);
        fake++;
        i++;
        
    }

    
    
    scanf("%d",&f);
    int friends[f][2];
    for (i = 0; i < f; i++)
    {
        scanf("%d %d", &friends[i][0], &friends[i][1]);
    }
    for (i = 0; i < f; i++)
    {
        printf("Case #%d: %d\n",i+1, sum(ajis, friends[i][0], friends[i][1] ));
    }
    
    return 0;
}
/*
5
2 5 1 9 7
4
1 1
1 3
2 5
4 5
*/