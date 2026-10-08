#include <stdio.h>
#include <math.h>

int main(){

    int tamanho_vetor, i;
    float valor, maior, menor, media, desvio_padrao, soma = 0, somatorio = 0;

    printf("Quantos valores deseja inserir no vetor:\n");
    scanf("%d", &tamanho_vetor);

    if(tamanho_vetor > 0 && tamanho_vetor <= 100){
        
        float x [tamanho_vetor];

        

        for(i = 0; i < tamanho_vetor; i++){
            printf("Digite os valores:\n");
            scanf("%f", &valor);

            x[i] = valor;
        }

        menor = x[0];
        maior = x[0];

        for(i = 0; i < tamanho_vetor; i++){
            

            if(i == 0){
                if(x[i] <= x[i + 1]){menor = x[i];}
                if(x[i] >= x[i + 1]){maior = x[i];}

            }else if(i == (tamanho_vetor-1)){
                if(x[i] < menor){menor = x[i];}
                if(x[i] > maior){maior = x[i];}

            }else {
                if(x[i] < menor){menor = x[i];}
                if(x[i] > maior){maior = x[i];}
            }
            
        }

        for(i = 0; i < tamanho_vetor; i++){
            soma = soma + x[i];
        }

        media = soma/tamanho_vetor;

        for(i = 0; i < tamanho_vetor; i++){
            somatorio = somatorio + (pow(x[i] - media, 2)); 
        }

        desvio_padrao = sqrt(somatorio/tamanho_vetor);
        
        printf("Media: %.2f\n", media);

        printf("Desvio padrao: %.2f\n", desvio_padrao);

        printf("O maior elemento do vetor é: %.2f\n", maior);
        printf("O menor elemento do vetor é: %.2f\n", menor);

        

        
    }else{
        printf("Tamanho invalido!");
    }

    return 0;
}