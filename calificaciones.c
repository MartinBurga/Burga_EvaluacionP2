#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float promedioest(float progresos[3])
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
    float promediosp[3];

    float abanderado;
    float estudiantetop;

    for (int i = 0; i < 23; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int numero = rand() % 100;
            notas[i][j] = numero / 10.0;
            promediosp[j] += notas[i][j];
        }
    }

    for (int i = 0; i < 23; i++)
    {
        float promedio_estudiante = promedioest(notas[i]);
        printf("%.2f   %.2f   %.2f   -   Promedio: %.2f\n", notas[i][0], notas[i][1], notas[i][2], promedio_estudiante);

        if (promedio_estudiante > estudiantetop)
        {
            estudiantetop = promedio_estudiante;
        }
    }

    printf("\n");
    printf("P1:    P2:    P3:\n");

    for (int j = 0; j < 3; j++)
    {
        promediosp[j] /= 23;
        printf("%.2f   ", promediosp[j]);
    }

    if (estudiantetop > abanderado)
    {
        printf("El mejor estudiante obtuvo una calificacion de: %.2f", estudiantetop);
    }

    return 0;
}
