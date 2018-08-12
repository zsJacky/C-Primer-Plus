#include <stdio.h>

int main(void) {
    char first_name[20];
    char last_name[20];
    scanf("%s %s", first_name, last_name);
    printf("%s %s\n", first_name, last_name);
    int width1 = strlen(first_name);
    int width2 = strlen(last_name);
    printf("%*d %*d\n", width1, strlen(first_name), width2, strlen(last_name));
    printf("%-*d %-*d\n", width1, strlen(first_name), width2, strlen(last_name));

    return 0;
}


