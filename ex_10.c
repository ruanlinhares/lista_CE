#include <stdio.h>

int main(){

    int cadeiras[5][8] = {
        {1,1,1,0,1,1,1,1},
        {1,1,0,0,0,0,0,1},
        {0,1,0,0,1,0,0,0},
        {1,1,0,0,1,1,0,0},
        {0,1,1,0,0,1,0,1},
    };

    int fila[5] = {0}
    int assentos,i,j;

    print("Digite quantos assentos juntos deseja reservar:\n");
    scanf("%d" &assentos);


    if(assentos > 2){
        for(i = 0; i < 5; i++){

            for(j = 0; j < 8; j++){

                int consecutivos[8] = {0}

                if(cadeiras[i][j] == 0 && cadeiras[i][j + 1] == 0 && cadeiras[i][j + 1] !=0){
                    consecutivos[i] += 1;
                }

                if(cadeiras[i][j] == 0 && cadeiras[i][j - 1] == 0 && cadeiras[i][j + 1] != 0){
                    consecutivos[i] += 1;
                }

                if(cadeiras[i][j] == 0 && cadeiras[i][j - 1] == 0 && cadeiras[i][j + 1] == 0){
                    consecutivos[i] += 1;
                }

                    
            }
        }

        for(i = 0; i < 5; i++){

            for(j = 0; j < 8; j++){
                if(consecutivos[i] == assentos){
                    if(cadeiras[i][j] == 0){
                        cadeiras[i][j] = 1;
                    }

                    printf("Fileira %d\n", i + 1);
                    printf("Assentos reservados:\n");
                    printf("[%d] ", );
                    break;
                }else{
                    printf("\nDesculpe, nao ha assentos continuos suficientes.\n");
                    break;
                }
            }
        
        }
        
    }else{printf("\nNumero de acentos invalido. Acentos a partir de 2 lugares.\n");}

    return 0;
}