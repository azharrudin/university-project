#include <stdio.h>

int main() {
    char S[100];
    scanf("%[^\n]", S);  // Read a line of text, including spaces
    getchar();  // Consume the newline character

    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("\tprintf(\"%s\\n\", \"%s\");\n", S, S);  // Print the input string
    printf("\treturn 0;\n");
    printf("}\n");

    return 0;
}

