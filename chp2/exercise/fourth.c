#include <stdio.h>

void print_phase();
void print_end();

int main() {
    print_phase();
    print_phase();
    print_phase();
    print_end();

    return 0;
}

void print_phase() {
    printf("For he's a jolly good fellow!\n");
}

void print_end() {
    printf("Which nobody can deny!");
}

