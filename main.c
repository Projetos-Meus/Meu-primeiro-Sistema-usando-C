#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void n1()
{
  int receita, prejuizo, resultado;

    printf("Digite qual foi a Receita da empresa:\n");
    scanf("%d", &receita);

    printf("Digite qual foi o Prejuizo da empresa:\n");
    scanf("%d", &prejuizo);

    resultado = receita - prejuizo;

    if(receita > prejuizo){
      printf("A empresa teve o lucro de %d!! \n", resultado);
    }
    else if(prejuizo > receita){
      printf("A empresa teve um prejuizo de %d!! \n", resultado);
    }
    else{
      printf("A empresa não teve Lucro nem Prejuizo.\n");
    }
}

void n2()
{
    int numero;  

    printf("Digite um Numero:\n");
    scanf("%d", &numero);

    if(numero >= 100) {
      printf("O numero é maior do que 100!! \n");
    }
    else{
      printf("O numero é menor do que 100!! \n");
    }
}

void n3()
{
  int number1, number2, resultado;

    printf("Digite um Numero:\n");
    scanf("%d", &number1);

    printf("Digite outro Numero:\n");
    scanf("%d", &number2);

    resultado = number1 * number2;

    printf("O resultado do produto %d x %d foi: %d \n", number1, number2, resultado);
}

void n4()
{
  int nota1, nota2, nota3, nota4, soma;

    printf("Digite a Nota 1:\n");
    scanf("%d", &nota1);

    printf("Digite a Nota 2:\n");
    scanf("%d", &nota2);

    printf("Digite a Nota 3:\n");
    scanf("%d", &nota3);

    printf("Digite a Nota 4:\n");
    scanf("%d", &nota4);

    soma = (nota1 + nota2 + nota3 + nota4)/4;

    if(soma >= 7){
      printf("Aprovado e sua Média foi: %d \n", soma);
    }
    else{
      printf("Reprovado e sua Média foi: %d \n", soma);
    }
}

void sair()
{
    printf("Obrigado por usar o meu Sistema :> ...\n");
}


int main()
{
    int continuar=1;

    do
    {
        printf("\n\t Digite uma das opções\n\n");
        printf("1. Lucro ou Prejuizo:\n");
        printf("2. Maior ou Menor do que 100:\n");
        printf("3. Sinal do Produto:\n");
        printf("4. Calcular Notas:\n");
        printf("0. Sair\n\n\n");

        scanf("%d", &continuar);
        system("cls || clear");

        switch(continuar)
        {
            case 1:
                n1();
                break;

            case 2:
                n2();
                break;

            case 3:
                n3();
                break;

              case 4:
                n4();
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma opção valida!!\n");
        }
    } while(continuar);
}

