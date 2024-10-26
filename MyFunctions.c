#include <stdio.h>
#include <string.h>
#include <math.h>

void contarCaracteres() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);
    printf("Numero de caracteres: %lu\n", strlen(str));
}

void contarVogais() {
    char str[100];
    int quantidade = 0;
    printf("Digite uma string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            quantidade++;
        }
    }
    printf("Numero de vogais: %d\n", quantidade);
}

void removerCaractere() {
    char str[100], c;
    printf("Digite uma string: ");
    scanf("%s", str);
    printf("Digite o caractere a ser removido: ");
    scanf(" %c", &c);
    char resultado[100];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != c) {
            resultado[j++] = str[i];
        }
    }
    resultado[j] = '\0';
    printf("String sem o caractere '%c': %s\n", c, resultado);
}

void contarStringsSemS() {
    int n, quantidade = 0;
    printf("Digite o numero de strings: ");
    scanf("%d", &n);
    char strings[n][100];
    printf("Digite as strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
        if (strings[i][strlen(strings[i]) - 1] != 's') {
            quantidade++;
        }
    }
    printf("Numero de strings que nao terminam com 's': %d\n", quantidade);
}

void somaLista() {
    int arr[100], n, soma = 0;
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);
    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        soma += arr[i];
    }
    printf("Soma da lista: %d\n", soma);
}

void calcularMediaLista() {
    int n;
    float soma = 0.0;
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Numero de elementos deve ser maior que zero.\n");
        return;
    }
    float arr[n];
    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        soma += arr[i];
    }
    printf("Media da lista: %.2f\n", soma / n);
}

void inverterLista() {
    int n;
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);
    int arr[n];
    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Lista invertida: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void calcAreas() {
    int n;
    printf("Digite o numero de raios que serao calculados: ");
    scanf("%d", &n);
    float raios[n], areas[n];
    printf("Digite os raios:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &raios[i]);
        areas[i] = M_PI * raios[i] * raios[i];
    }
    printf("Areas dos circulos:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", areas[i]);
    }
}

void inverterString() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    printf("String invertida: %s\n", str);
}

void calculadora() {
    int operacao;
    float num1, num2;
    printf("1. Somar\n2. Subtrair\n3. Multiplicar\n4. Dividir\nDigite a operacao: ");
    scanf("%d", &operacao);
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);
    switch (operacao) {
        case 1:
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Resultado: %.2f\n", num1 / num2);
            } else {
                printf("Nao pode dividir por zero\n");
            }
            break;
        default:
            printf("Operacao nao existe\n");
            break;
    }
}

int main() {
    int opcao;
    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 - Contar caracteres em uma string\n");
        printf("2 - Contar vogais em uma string\n");
        printf("3 - Remover todas as ocorrencias de um caractere\n");
        printf("4 - Contar strings que nao terminam com 's'\n");
        printf("5 - Soma de uma lista de numeros\n");
        printf("6 - Calcular media de uma lista de numeros\n");
        printf("7 - Inverter uma lista de inteiros\n");
        printf("8 - Calcular areas de circulos\n");
        printf("9 - Inverter uma string\n");
        printf("10 - Calculadora simples\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: contarCaracteres(); break;
            case 2: contarVogais(); break;
            case 3: removerCaractere(); break;
            case 4: contarStringsSemS(); break;
            case 5: somaLista(); break;
            case 6: calcularMediaLista(); break;
            case 7: inverterLista(); break;
            case 8: calcAreas(); break;
            case 9: inverterString(); break;
            case 10: calculadora(); break;
            case 0: printf("\n"); break;
            default: printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);
    return 0;
}
