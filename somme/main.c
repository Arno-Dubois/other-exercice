#include <stdio.h>

int main() {
    char input[50];
    int output;
    printf("Entrez un nombre : \n");
    fgets(input, 50, stdin);

    // Remove \n
    char *src, *dst;
    for (src = dst = input; *src != '\0'; src++) {
        *dst = *src;
        if (*dst != '\n') dst++;
    }
    *dst = '\0';

    for (int i = 0; input[i]; ++i) {
        output += (input[i] - 48);
    }

    printf("La somme des chiffres de %s est %d.", input, output);

    return 0;
}
