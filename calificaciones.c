#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    float Promedios[23][3];
    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int numero = rand() % 100;
            Promedios[i][j] = numero / 10.0;
        }
    }

    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.2f  ", Promedios[i][j]);
        }
        printf("\n");
    }

    return 0;
}
