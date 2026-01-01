
#include <stdio.h>

typedef struct{
    int a;
    int b;
    int c;
} NumInteiros;

void read_Nums(NumInteiros *n){
    scanf("%d",&n->a);
    scanf("%d",&n->b);
    scanf("%d",&n->c);
}
void calc_expression(NumInteiros *n){
    int r = (n->a + n->b) * 2;
    int s = (n->b + n->c) * 2;
    int d  = r + s / 2;
    printf("O valor final é %d",d);
}

int main() {
    NumInteiros Nums;
    read_Nums(&Nums);
    calc_expression(&Nums);
    
    return 0;
}
