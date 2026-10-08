#include <stdio.h>

int main(){

    int valor=0, notas_100=0, notas_50=0, notas_20=0, notas_10=0, notas_5=0, notas_1=0;
    char escolha = 's';


    while(escolha == 's'){
        printf("Digite um valor inteiro para saque:\n");
        scanf("%d",&valor);

        if(valor > 0){
            
            while(valor > 0){

                if(valor % 1 == 0){
                    
                    while(valor >= 100){
                        notas_100 += 1;
                        valor = valor - 100;                        
                    }

                    while(valor >= 50){
                        notas_50 += 1;
                        valor = valor - 50;                        
                    }

                    while(valor >= 20){
                        notas_20 += 1;
                        valor = valor - 20;           
                    }

                    while(valor >= 10){
                        notas_10 += 1;
                        valor = valor - 10;                        
                    }

                    while(valor >= 5){
                        notas_5 += 1;
                        valor = valor - 5;                        
                    }

                    while(valor >= 1){
                        notas_1 += 1;
                        valor = valor - 1;                        
                    }
                }
            }

            
            // if(valor % 1 == 0){
            //     notas_100 = notas_100 + (valor/100);
            //     valor = valor - (notas_100*100);
            // }

            // if(valor % 1 == 0){
            //     notas_50 = notas_50 + (valor/50);
            //     valor = valor - (notas_50*50);
            // }
            // if(valor % 1 == 0){
            //     notas_20 = notas_20 + (valor/20);
            //     valor = valor - (notas_20*20);
            // }
            // if(valor % 1 == 0){
            //     notas_10 = notas_10 + (valor/10);
            //     valor = valor - (notas_10*10);
            // }
            // if(valor % 1 == 0){
            //     notas_5 = notas_5 + (valor/5);
            //     valor = valor - (notas_5*5);
            // }
            // if(valor % 1 == 0){
            //     notas_1 = notas_1 + (valor/1);
            //     valor = valor - (notas_1);
            // }

            printf("Valor em notas de 100: %d\n", notas_100);
            printf("Valor em notas de 50: %d\n", notas_50);
            printf("Valor em notas de 20: %d\n", notas_20);
            printf("Valor em notas de 10: %d\n", notas_10);
            printf("Valor em notas de 5: %d\n", notas_5);
            printf("Valor em notas de 1: %d\n",notas_1);
            

            printf("\nPara realizar uma nova operacao digite [S/s], caso contrario [N/n]");
            scanf(" %c", &escolha);

            if(escolha == 'N' || escolha == 'n'){
                escolha = 'n';
            }

            notas_100 = 0;
            notas_50 = 0;
            notas_20 = 0;
            notas_10 = 0;
            notas_5 = 0;
            notas_1 = 0;

        }else{printf("\nValor insuficiente ou invalido!");}
    }


    return 0;
}