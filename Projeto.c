#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

//Por: Daniel Godoi Alves Watrin, Felipe Souza Caetano, Ryan Augusto Paix�o
int main() {
    setlocale(LC_ALL, "Portuguese");
//Definindo as vari�veis:
    int numero_de_tentativas = 0;
    int chute = 0;
    int numero_aleatorio;
    int i;

//Gerando o n�mero aleat�rio:
    srand(time(NULL));
    numero_aleatorio = rand() % 100;

//Iniciando Contador:
    for (i = 0; i < 100; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &chute);

//Conta as tentativas:
        numero_de_tentativas+=1;

//Condicionais:
        if (chute > numero_aleatorio) {
            printf("N�mero muito alto!\n");
        } else if (chute < numero_aleatorio) {
            printf("N�mero muito baixo!\n");
        } else {
            printf("Parab�ns! Voc� acertou o n�mero correto em %d tentativas.\n", numero_de_tentativas);

//Encerra o loop:
            break;
        }
    }

    return 0;
}
