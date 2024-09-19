#include<stdio.h>
int main(){
	char kalimat[120];
	scanf("%[^\n]s", kalimat);
	
	printf("#include <stdio.h>\n");
	printf("int main()\n");
	printf("{\n");
	
	printf("    printf(\"%%s\\n\",\"%s\");\n", kalimat);
	printf("    return 0;\n");
	
	printf("}\n");
	
	return 0;
}