#include <stdio.h>

int main(){
    
    int continuar = 1, opcao;
    float saldo = 1000.0, valor_deposito, valor_saque;

    while(continuar){

        printf("Saldo: R$%.2f\n", saldo);
        printf("1 - Depositar\n2 - Sacar\n3 - Consultar saldo\n0 - Encerrar\n");

        printf("Escolha uma opcao:\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:

                printf("Digite o valor do deposito:\n");
                scanf("%f", &valor_deposito);

                if(valor_deposito >= 0){
                    saldo = saldo + valor_deposito;
                }else{
                    printf("Valor invalido, somente valores positivos\n");
                }
    
                break;
            case 2:
                
                printf("Digite o valor do saque:\n");
                scanf("%f", &valor_saque);

                if(valor_saque > 0){
                    if(valor_saque <= saldo){
                        saldo = saldo - valor_saque;    
                    }else{
                        printf("Valor invalido, somente valores positivos\n");
                    }
                }
                
                if(valor_saque < 0){printf("Saldo insuficiente, saque negado!\n");}

                break;
            case 3:

                printf("\nSaldo: R$%.2f\n", saldo);
                break;
            case 0:

                continuar = 0;
                break;
            default:
                printf("Opcao invalida");
                break; 
        }
    }
    
    return 0;
}