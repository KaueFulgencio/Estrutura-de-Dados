#include <stdio.h>
#include <stdlib.h>

// EXERCICIO 1
/*
int inverte_numero(int num){
    if(num == 0){return num;}

    else{
        printf("%d", num % 10);
        num = num / 10;
        return inverte_numero(num);
        }
    return 0;
}
int main()
{
    int numero;
    scanf("%d", &numero);

    inverte_numero(numero);
}*/

//EXERCICIO 2
/*
int sum(int vetor[], int tamanho){
    if(tamanho == 0) {return 0;}
    else {return vetor[tamanho - 1] + sum(vetor, tamanho - 1);}
}

int main () {
    int vetor[7] = {1,1,1,1,1,1,1};

    printf("%d\n", sum(vetor, 7));
    return 0;
}
*/

//Exercicio 3
/*
int sum(int numero){
    if(numero == 0){ return 0; }
    else{
        return numero + sum(numero - 1);
    }
}

int main(){
    int numero;

    printf("Digite o numero inteiro positivo\n");
    scanf("%d", &numero);

    if((numero % 2) == 0){
        printf("A soma eh: %d", sum(numero));
    }
    else{
        printf("ERRO!!\n");
    }
    return 0;
}*/

//Exercicio 4
/*
multiplicaKeN(int k, int n){
    if(n == 0){ return 1; }
    return k * multiplicaKeN(k, n - 1);
}

int main(){
    int k, n;

    printf("Digite k e n\n");
    scanf("%d\n%d", &k, &n);

    printf("Resultado: %d",multiplicaKeN(k,n));

    return 0;
}*/

//Exercicio 5
/*
int inverte_vetor(int vetor[], int inicio, int fim){
    if(inicio >= fim){ return 0;}

    int aux = vetor[inicio];
    vetor[inicio] = vetor[fim];
    vetor[fim] = aux;

    inverte_vetor(vetor, inicio + 1, fim - 1);
}

int main(){
    int tamanho = 100, vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                                    11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
                                    33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
                                    58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
                                    83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};

    inverte_vetor(vetor, 0, tamanho - 1);

    for(int i = 0; i < tamanho; i++){
        printf("Vetor invertido: %d \n", vetor[i]);
    }
}*/

//Exericio 6
/*
int mdc(int x, int y){
    if(y == 0){ return x; }
    else{
        return mdc(y, x % y);
    }
}

int main(){
    int x, y;

    printf("Digite x e y: ");
    scanf("%d\n%%d", &x, &y);

    printf("O mdc eh: %d", mdc(x,y));

    return 0;
}*/

//Exercicio 7
/*
int ocorrencia(int numero, int K, int nVezes)  {
    if (numero  ==  0)  {
        return nVezes;
    } else {
        if (numero % 10  ==  K)  {
            nVezes += 1;
        }
        return ocorrencia(numero / 10, K, nVezes);
    }
}

int main()  {

    int numero, K;

    printf("Insira o inteiro e o digito K:\n");
    scanf("%d\n%d", &numero, &K);

    printf("O %d aparece %d\n", K, ocorrencia(numero, K, 0));

    return 0;
}*/

//Exercicio 8
/*
int parAteN(int n){
    if(n == 0){ return; }

    printf("%d\n", n);
    parAteN(n - 2);
}

int main(){
    int numero;

    printf("Digite o numero!!\n");
    scanf("%d", &numero);

    if((numero % 2) == 0){
            parAteN(numero);
    }
    else{
        printf("ERRO!!!");
    }
    return 0;
}*/

//Exericio 9
/*
int fatorial_duplo(int numero){
    if(numero == 0) { return 0; }

    return numero * (numero  - 2);
}

int main(){
    int numero;

    printf("Digite o numero: \n");
    scanf("%d", &numero);

    printf("O fatorial duplo eh: %d\n", fatorial_duplo(numero));

    return 0;
}*/

