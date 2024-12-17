#include<stdio.h>

void swap(long long int *a, long long int *b){
    long long int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(long long int data[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(data[j] > data[j+1]){
                swap(&data[j], &data[j+1]);
            }
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);

    long long int n[100];
    for(int i = 0; i<t; i++){
        scanf("%lld", &n[i]);
    }

    bubble(n, t);

    long long int power;
    scanf("%lld", &power);

    long long int count = 0;
    for(int i = 0; i<t; i++){
        if(power >= n[i]){
            power -= n[i];
            count++;
        }else if(power == 0){
            break;
        }
    }

    printf("%lld\n", count);
    return 0;
}