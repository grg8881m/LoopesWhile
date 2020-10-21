#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Iterador while \n");

    int limit;

    scanf("%i", &limit);

    int i = 1;

    while (i<=limit)
    {
        printf("El numero: %i \n", i);
        i++;
    }

    return 0;
}
