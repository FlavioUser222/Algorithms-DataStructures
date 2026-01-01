
#include <stdio.h>

void read_Index(){
   int index;
   printf("Digite o indice de poluicao medido");
   scanf("%f",&index);
   if(index >= 0.05 && index <= 0.25){
       printf("Indice aceitável");
   } else if(index >= 0.3 && index < 0.4){
       printf("Grupo 1 suspenso");
   } else if(index > 0.4 || index < 0.5){
       printf("Grupo 1 e 2 suspensos");
   } else{
       printf("Todos os grupos suspensos");
   }

}

int main() {
    read_Index();
    
    return 0;
}
