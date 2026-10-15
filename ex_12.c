#include <stdio.h>

int exibe_menu()
{

    int opc;

    printf("\n1. Cadastrar um número\n2. Calcular o fatorial do número cadastrado\n3. Verificar se o número cadastrado é primo\n4. Calcular a soma dos algarismos do número cadastrado\n5. Exibir a tabuada do número cadastrado\n6. Sair do programa");
    scanf("%d", &opc);
    return opc;
}

void fatorial(int numero_cadastrado){
    int fatorial = 0, i;

    for(i = numero_cadastrado; i > 1; i--){
        if(fatorial == 0){
            fatorial += i;    
        }else{fatorial = fatorial * i;}
        
    }
    
    printf("\nFatorial de %d = %d\n", numero_cadastrado, fatorial);
}

void ehprimo(int numero_cadastrado){
    int divisores = 0, i;
    
    if (numero_cadastrado <= 1) {
        printf("\nO número %d não é primo\n", numero_cadastrado);
        return;
    }

    for (i = 1; i <= numero_cadastrado; i++) {
        if (numero_cadastrado % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("\nO número %d é primo\n", numero_cadastrado);
    } else {
        printf("\nO número %d não é primo\n", numero_cadastrado);
    }
}

void sumalgarismos(int numero_cadastrado){
    int soma = 0;
    int temp = numero_cadastrado;
    
    while(temp > 0){
        soma += temp % 10;
        temp /= temp / 10;  
    }
    
    temp = numero_cadastrado;
    soma = 0;
    while(temp > 0) {
        soma += temp % 10;
        temp /= 10;
    }
    
    printf("\nA soma dos algarismos de %d = %d\n", numero_cadastrado, soma);
}

void tabuada(int numero_cadastrado){

    int i;

    printf("\n--- Tabuada do %d ---\n", numero_cadastrado);
    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", numero_cadastrado, i, numero_cadastrado * i);
    }
}

int main()
{

    int continuar = 1, opc, numero, numero_cadastrado;

    while (continuar)
    {
        opc = exibe_menu();

        switch (opc)
        {
        case 1:
            printf("\nCadastre um número inteiro positivo:\n");
            scanf("%d", &numero);

            if(numero > 0 && numero % 1 == 0){
                numero_cadastrado = numero;
            }

            break;
        case 2:

            fatorial(numero_cadastrado);
            break;
        case 3:
            
            ehprimo(numero_cadastrado);
            break;
        case 4:
            sumalgarismos(numero_cadastrado);
            break;
        case 5:
            tabuada(numero_cadastrado);
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