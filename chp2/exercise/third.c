// third.c

#include <stdio.h>

int main() {
    int age;
    printf("Enter you age: ");
    scanf("%d\n", &age);
    printf("your age is: %d\n", age);
    printf("convert to days is %d\n", age*365);

    return 0;
}
