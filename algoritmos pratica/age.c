
#include <stdio.h>

void read_age(){
    int y;
    int m;
    int d;
    printf("Digite sua data de nascimento 0000/00/00\n");
    scanf("%d %d %d",&y,&m,&d);
    printf("%d",d);

}

int main() {
    read_age();
    
    return 0;
}
