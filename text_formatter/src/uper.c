#include <stdio.h>
#include <stdlib.h>
#include "convert.h"

int main() {
    char input[100];

    printf("Enter text to convert to uppercase: ");
    fgets(input, sizeof(input), stdin);

    to_upper(input);

    printf("Uppercase: %s\n", input);

    return 0;
}
