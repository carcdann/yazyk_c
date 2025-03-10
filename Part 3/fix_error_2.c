#include <stdio.h>

int main()
{
    int cows, legs_integer;
    printf("Ноги ?\n");
    scanf("%d", &legs_integer);
    cows = legs_integer / 4;
    printf("есть %d коров\n", cows);

    return 0;
}