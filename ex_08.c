#include <stdio.h>

int main(){

    int i, j, maior, valor, x[10], y[10], repete = 0;

    for(i = 0; i < 10; i++){
        printf("Digite os valores:\n");
        scanf("%d", &valor);

        x[i] = valor;
    }

    for(i = 0; i < 10; i++){
        printf("[%d] ", x[i]);
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(x[i] == x[j]){
                repete +=1;
            }
        }

        if(repete > 1){
            y[i] = repete;
        }else{
            y[i] = 0;
        }

        repete = 0;
        
    }

    for(i = 0; i < 10; i++){
        if(y[i] > 0){
            printf("\nValor: %d - Numero de repeticoes: %d\n", x[i], y[i]);    
        }
    }

    maior = y[0];

    for(i = 0; i < 10; i++){
        if(y[i] >= maior){maior = y[i];}
    }

    for(j = 0; j < 10; j++){
        if(y[j] == maior){
            printf("\nO valor[es] que mais se repeti[ram]: %d\n", x[j]);
        }
    }
    
    return 0;

}