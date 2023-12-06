#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float promedio(float progresos[3])
{
    float suma = 0.0;
    for (int i = 0; i < 3; i++)
    {
        suma += progresos[i];
    }
    return suma / 3;
}

int main()
{
    srand(time(NULL));
    float notas[23][3];
    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int numero = rand() % 100;
            notas[i][j] = numero / 10.0;
        }
    }

    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.2f   ", notas[i][j]);
        }
        printf("Promedio: %.2f\n", promedio(notas[i]));
    }

    return 0;
}
