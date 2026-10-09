#include <stdio.h>

int main(){
    
    int i, j, maior, aluno;
    int respostas[3][5] = {{1,3,2,4,4},{2,4,5,2,1},{1,3,2,1,4}};
    int resultado[3] = {0};
    int gabarito[5] = {1,3,2,4,4};

    for(i = 0; i < 3; i++){

        for(j = 0; j < 5; j++){
            if(respostas[i][j] == gabarito[j]){
                resultado[i] +=1;
            }
        }
    }

    printf("\nPontuacao\naluno 1: %d\naluno 2: %d\naluno 3: %d\n", resultado[0], resultado[1], resultado[2]);


    maior = resultado[0];

    for(i = 0; i < 3; i++){
        if(resultado[i] > maior){
            maior = resultado[i];
        }
    }

    for(i = 0; i < 3; i++){
        if(resultado[i] == maior){
            aluno = i + 1;
        }
    }
    
    printf("\nO aluno com maior nota foi o %d° aluno\n", aluno);
    
    return 0;
}