
#include <stdio.h>
#include <stdbool.h>


bool linear_search(int arr[], int element, int size){
    
    for(int i=0;i<size;i++){
        if(arr[i] == element){
            return true;
            
        } 
    }
    printf("Elemento não encontrado\n");
    return false;
}

int main() {
    int a[] = {2,6,10,60,30};
    int element = 80;
    int size = sizeof(a) / sizeof(a[0]);
    int result = linear_search(a,element,size);
    printf("%d",result);


    return 0;
}
