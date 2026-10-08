#include <stdio.h>

int exibe_menu(){
    int opcao;

    printf("\n1 - consultar saldo\n2 - Fazer recarga via pix\n3 - Chamar corrida\n4 -Sair do app\n");
    printf("\nEscolha uma opcao:\n");
    scanf("%d", &opcao);

    return opcao;
}

float fazer_recarga(float saldo_atual){

    float recarga;

    printf("Digite o valor de recarga:\n");
    scanf("%f", &recarga );

    saldo_atual = saldo_atual + recarga;

    return saldo_atual;
}

float pagar_corrida(float saldo_atual){

    float valor_corrida;
    
    printf("Digite o valor da corrida:\n");
    scanf("%f", &valor_corrida );

    if(saldo_atual >= valor_corrida){
        saldo_atual = saldo_atual - valor_corrida;
        return saldo_atual;
    }else{printf("Erro: Saldo insufuciente!");}
    
    return saldo_atual;
}

int main(){

    float saldo = 0;
    int continuar = 1, opc;

    while(continuar){
        opc = exibe_menu();
        
        switch(opc){
            case 1:
                printf("Saldo: %.2f", saldo);
                break;
            case 2:
                saldo = fazer_recarga(saldo);
                break;
            case 3:
                saldo = pagar_corrida(saldo);
                break;
            case 4:
                continuar = 0;
                break;
            default:
                printf("Opcao invalida!");
                break;
        }
    }
    

    
    return 0;
}