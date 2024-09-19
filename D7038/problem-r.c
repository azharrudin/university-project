#include <stdio.h>

int main(void){
	char id[11], name[110];
	char kelas;
	int num;
	
	scanf("%s\n%[^\n]\n%c %d", id, name, &kelas, &num); getchar();
	
	printf("Id    : %s\n", id);
	printf("Name  : %s\n", name);
	printf("Class : %c\n", kelas);
	printf("Num   : %d\n", num);
	
	return 0;
}