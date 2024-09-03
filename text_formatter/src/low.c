#include <stdio.h>
#include <stdlib.h>
#include "convert.h"

int main() {
    char input[100];

    printf("Enter text to convert to lowercase: ");
    fgets(input, sizeof(input), stdin);

    to_lower(input);

    printf("Lowercase: %s\n", input);

    return 0;
}
