#include<stdio.h>

int main(){

 int a;
scanf("%d",&a);

int b[a+1]; //karena enter juga termasuk 1
 int sum=0;
for(int i=0;i<a;i++){
scanf("%d",&b[i]);


sum += b[i];
if (sum == 12){
	sum =28;
}else if (sum == 35){
	sum = 7;
}else if (sum == 30){
	sum = 10;
}else if (sum>=40){
	sum-=40;
}

}
printf("%d\n",sum);



return 0;
}
