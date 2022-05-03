#include <stdio.h>
int num1 = 0, num2 = 0, contador;

int conferirInicio(int number)/* Função que confere se o primeiro digito é par/impar e retorna um printf com a solução*/
{
    if (number == num1 && number % 2 == 0)
    {
        return printf("O numero inicial e par: %i \n", number);
    }
    else if (number == num1)
    {
        return printf("O numero inicial e impar: %i \n", number);
    }
}

int conferirFinal(int number)/* Função que confere se o segundo digito é par/impar e retorna um printf com a solução*/
{
    if (number == num2 && number % 2 == 0)
    {
        return printf("O numero final e par: %i \n", number);
    }
    else if (number == num2)
    {
        return printf("O numero final e impar: %i \n", number);
    }
}
int totalPar(int number)/*Uma outra função extra para guardar um contador, que só passa números pares*/
{
    if (number % 2 == 0)
    {
        return contador++;
    }
}
main()
{

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o ultimo numero: ");
    scanf("%d", &num2);
    printf("\n\n");
    for (int i = num1; i <= num2; i++)
    {
        conferirInicio(i);
        conferirFinal(i);
        totalPar(i);
    }
    printf("\nO total de pares e: %i", contador);
}