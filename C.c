#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0;

    int len = strlen(text);
    printf("+-%.*s-+\n", len, "----------------------------------------");
    printf("| %s |\n", text);
    printf("+-%.*s-+\n", len, "----------------------------------------");
    return 0;
}
