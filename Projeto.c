#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

//Por: Daniel Godoi Alves Watrin, Felipe Souza Caetano, Ryan Augusto Paixão
int main() {
    setlocale(LC_ALL, "Portuguese");
//Definindo as variáveis:
    int numero_de_tentativas = 0;
    int chute = 0;
    int numero_aleatorio;
    int i;

//Gerando o número aleatório:
    srand(time(NULL));
    numero_aleatorio = rand() % 100;

//Iniciando Contador:
    for (i = 0; i < 100; i++) {
        printf("Digite um número: ");
        scanf("%d", &chute);

//Conta as tentativas:
        numero_de_tentativas+=1;

//Condicionais:
        if (chute > numero_aleatorio) {
            printf("Número muito alto!\n");
        } else if (chute < numero_aleatorio) {
            printf("Número muito baixo!\n");
        } else {
            printf("Parabéns! Você acertou o número correto em %d tentativas.\n", numero_de_tentativas);

//Encerra o loop:
            break;
        }
    }

    return 0;
}
