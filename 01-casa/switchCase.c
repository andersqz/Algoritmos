#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float n1, n2, resultado;
    char op;
    

    printf("calculadora\n");


    printf("digite o primeiro elemento: ");
    scanf("%f", &n1);

    printf("digite a operação(+, -, *, /): ");
    scanf(" %c", &op);

    printf("digite o segundo elemento: ");
    scanf("%f", &n2);


    switch (op){
        
        case '+':
            resultado = n1 + n2;
            break;

        case '-':
            resultado = n1 - n2;
            break;

        case '*':
            resultado = n1 * n2;
            break;

        case '/':
        if (n2 != 0){
            resultado = n1 / n2;
        }
        else {
            printf("erro: 404\n");
        }
            break;

        default:
            printf("operador invalido\n");
    }

    printf("resultado: %.2f", resultado);

    
    return 0;
}
