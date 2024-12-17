#include <stdio.h>

int main() {
    // Kode sumber dalam bentuk string
    char *source_code =
        "#include <stdio.h>\n"
        "int main() {\n"
        "    printf(\"%%s\\n\",\"hello world\");\n"
        "    return 0;\n"
        "}\n";

    // Mencetak kode ke layar
    printf("%s", source_code);

    return 0;
}

