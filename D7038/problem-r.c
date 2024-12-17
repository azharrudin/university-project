#include <stdio.h>

int main(void){
	char[100] id;, name[110];
	char kelas;
	int num;
	
	scanf("%lld%[^\n]\n%c %d", &id, name, &kelas, &num); getchar();
	
	printf("Id    : %lld\n", id);
	printf("Name  : %s\n", name);
	printf("Class : %c\n", kelas);
	printf("Num   : %d\n", num);
	
	return 0;
}
