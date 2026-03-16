/*
#include <stdio.h>
    int main(){
        int idade = 25;   
        float altura = 1.82;
        char opcao = 'S';
        char nome[20] = "Mussi"; 
        
        printf("A idade do %s é: %d\n", nome, idade);
        printf("A altura é: %.2f\n", altura);
        printf("A opção é: %c\n", opcao);  
    }
*/


#include <stdio.h>
    int main(){
        int idade;   
        float altura;
        char opcao;
        char nome[20]; 
    
        printf("Digite sua Idade: ");
        scanf("%d", &idade); 

        printf("Digite sua altura: ");
        scanf("%f", &altura); 
        
        printf("Digite seu Nome: ");
        scanf("%s", nome);

        printf("Olá %s sua idade é: %d\n", nome, idade);
        printf("A sua altura é: %.2f\n", altura);
        
    }
/*        
Sintaxe básica: printf(“%formato1 %formato2”, variável_1, variável_2, ...); 
Sintaxe básica: scanf("formato1" "formato2, &variavel_1, variavel_2, ...");
printf = aparecer na tela 
scanf = entrada de dados do usuarios, armazenando em uma variável

%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.

*/