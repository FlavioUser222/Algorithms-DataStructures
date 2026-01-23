#include <stdio.h>
#include <string.h>
struct Produto{
    int id;
    char nome[30];
    int preco;
};

int main() {
    struct Produto arr[10] = {
        {30, "Joao", 30},   
        {31, "Maria", 40}   
    };
    struct Produto temp;
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    
    for(int  i = 0;i < tamanho - 1;i++){
         for(int  j = i;j < tamanho - 1;j++){
            if(arr[j].id < arr[j + 1].id ){
                temp = arr[j];
                arr[j]  = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    }
        printf("Produtos ordenados por ID:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d - %s - %d\n", arr[i].id, arr[i].nome, arr[i].preco);
    }


    return 0;
}
