#include <stdio.h>

int main()
{

    int cadeiras[5][8] = {
        {1, 1, 1, 0, 1, 1, 1, 1},
        {1, 1, 0, 1, 0, 0, 0, 1},
        {1, 1, 0, 0, 1, 0, 0, 0},
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 0, 0, 0, 1, 1, 1},
    };

    int fila[5] = {0};
    int consecutivos = 0;
    int assentos, i, j, k, inicio_atual = 0, encontrado = 0, fileira_encontrada = -1, intervalo_inicial = -1, intervalo_final = -1;

    printf("Digite quantos assentos juntos deseja reservar:\n");
    scanf("%d", &assentos);

    if (assentos < 2)
    {
        printf("\nNumero de acentos invalido. Acentos a partir de 2 lugares.\n");
    }

    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 8; j++)
        {

            if (cadeiras[i][j] == 0)
            {
                if (consecutivos == 0)
                {
                    inicio_atual = j;
                }

                consecutivos += 1;

                if (consecutivos == assentos)
                {
                    encontrado = 1;
                    fileira_encontrada = i;
                    intervalo_inicial = inicio_atual;
                    intervalo_final = j;
                    break;
                }
            }
            else
            {
                consecutivos = 0;
            }
        }
    }

    if (encontrado == 1)
    {

        for (i = intervalo_inicial; i <= intervalo_final; i++)
        {
            if (cadeiras[fileira_encontrada][i] == 0)
            {
                cadeiras[fileira_encontrada][i] = 1;
            }
        }

        printf("Reserva realizada com sucesso!!\n");
        printf("Fileira %d\n", fileira_encontrada + 1);
        printf("Assentos reservados:\n");

        for (j = intervalo_inicial; j <= intervalo_final; j++)
        {
            printf("[%d] ", j + 1);
        }
    }
    else
    {
        printf("\nDesculpe, nao ha assentos continuos suficientes.\n");
    }

    return 0;
}