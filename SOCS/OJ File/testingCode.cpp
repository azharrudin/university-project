#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    // int n = 0;
    FILE *ptr;
    // char ch[1100];
    // int size = 0, sizes = 0, shift;
    ptr = fopen("testdata.in", "r");
    int a,b;
    int tc;

    fscanf(ptr, "%d\n", &tc);
    for(int i=1;i<=tc;i++){
        int peri=0;
        int prev=0;
        int count=0;
        int cubes;
        fscanf(ptr,"%d\n",&cubes);
        for(int j=1;j<=cubes;j++){ // 2 1 3
            int curr;
            
            fscanf(ptr,"%d",&curr);fgetc(ptr);
            peri+=4; // 28
            if(j==1)peri+=2*curr; 
            if(j==cubes)peri+=2*curr;  

            count+=curr;

            if(prev != 0)peri+=abs(curr-prev)*2;
            prev=curr; //1 
        }
        printf("Case #%d: %d %d\n",i, peri, count*4);
        



    }
    // fscanf(ptr, "%d %d\n, &a,&b);

    // printf("%d\n",a+b);
}