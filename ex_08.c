#include <stdio.h>

int main(){

    int i, j, maior, valor, x[10], y[10];

    for(i = 0; i < 10; i++){
        printf("Digite os valores:\n");
        scanf("%d", &valor);

        x[i] = valor;
    }

    for(i = 0; i < 10; i++){
        printf("%d\n", x[i]);
    }

    for(i = 0; i < 10; i++){

        for(j = 0; j < 10; j++){
            if(x[i] == x[j]){
                y[i] = y[i] + 1;            
            }else{
                y[i] = 0;
            }
        }
        
    }

    for(i = 0; i < 10; i++){
        printf("Valor: %d - Numero de repeticoes: %d\n", x[i], y[i]);
    }

    maior = y[0];

    for(i = 0; i < 10; i++){

        if(i == (10 - 1)){
            if(y[i] > maior){maior = y[i];}
        }else{
            if(y[i] > maior){maior = y[i];}
        }
    }

    
    printf("O valor que mais se repetiu foi: %d\n", maior);

}