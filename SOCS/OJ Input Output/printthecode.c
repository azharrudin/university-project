#include <stdio.h>

int main() {
    char S[100];
    scanf("%[^\n]", S);  // Read a line of text, including spaces
    getchar();  // Consume the newline character

    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"%%s\\n\",\"%s\");\n", S);  // Print the input string
    printf("    return 0;\n");
    printf("}\n");

    return 0;
}

