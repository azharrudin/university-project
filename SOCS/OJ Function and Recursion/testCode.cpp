#include <stdio.h>

long long int count = 0;
long long int arr[100] = {0};

void fraktal_B(long long int x){
    if(x <= 0) return;
    else if(arr[x] != 0){
        count += arr[x];
        return;
    }
    else{
        fraktal_B(x-1);
        fraktal_B(x-2);
        count += x;
        arr[x] = count;
    }
}

int main(){
    long long int x;
    scanf("%lld",&x);getchar();
    fraktal_B(x);
    printf("%lld\n",count);
 return 0;
}