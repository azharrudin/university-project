#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d",&a, &b);
    for (int i = a; i < b+a; i++)
    {
        printf("%d\n", i);
        
    }
   return 0; 
}
