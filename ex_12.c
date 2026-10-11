#include <stdio.h>

int exibe_menu()
{

    int opc;

    printf("1. Cadastrar um número\n2. Calcular o fatorial do número cadastrado\n3. Verificar se o número cadastrado é primo\n4. Calcular a soma dos algarismos do número cadastrado\n5. Exibir a tabuada do número cadastrado\n6. Sair do programa");
    scanf("%d", &opc);
    return opc;
}

void fatorial(int numero_cadastrado){
    int fatorial = 0, i;

    for(i = numero_cadastrado; i > 1; i--){
        if(fatorial == 0){
            fatorial += numero_cadastrado * (numero_cadastrado - i);    
        }

        fatorial += fatorial * (numero_cadastrado - i);
    }
    
    printf("Fatorial de %d = %d", numero_cadastrado, fatorial);
}

void ehprimo(int numero_cadastrado){
    if(numero_cadastrado > 1 && numero_cadastrado % numero_cadastrado == 0 && numero_cadastrado % 1 == 0){
        printf("O numero %d é primo", numero_cadastrado);
    }else if(numero_cadastrado % numero_cadastrado == 0 && numero_cadastrado % 1 == 0 && numero_cadastrado % 2 == 0){
        printf("O numero %d não é primo", numero_cadastrado);
    }
}

void sumalgarismos(int numero_cadastrado){

    int soma = 0, i = 1, algarismo;
    
    while(numero_cadastrado > 0){

        algarismo = numero_cadastrado;
        
        soma += numero_cadastrado;

        numero_cadastrado -= numero_cadastrado * i;

        i = i * 10;
    }

}


void tabuada(){
    
}

int main()
{

    int continuar = 1, opc, numero, numero_cadatrado;

    while (continuar)
    {
        opc = exibe_menu();

        switch (opc)
        {
        case 1:
            printf("\nCadastre um número inteiro positivo:\n");
            scanf("%d", &numero);

            if(numero > 0 && numero % 1 == 0){
                numero_cadatrado = numero;
            }

            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            continuar = 0;
            break;
        default:
            break;
        }
    }

    return 0;
}