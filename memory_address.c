#include <stdio.h>

int main() {
int num = 42;
printf("valeur : %d\n", num);
printf("adresse memory: %p\n", (void *)&num);
return 0;
}