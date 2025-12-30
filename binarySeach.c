#include <stdio.h>

int binary_seach(int a[], int element,int size){
    int lo = 0;
    int hi =  size - 1;
    
    while(lo <= hi){
        int mid = lo + (hi - lo ) / 2;
        
        if(a[mid] == element){
            return mid;
        } else if(a[mid] < element){
            lo = mid + 1;
        } else{
            hi = mid - 1;
        }
        
    } 
    return -1;
    
}

int main() {
    int a[] = {2,5,9,13};
    int element = 2;
    int size = sizeof(a) / sizeof(a[0]);
    
    int result = binary_seach(a,element,size);
    if(result == -1){
        printf("Elemento nao encontrado");
    } else{
        printf("Elemento encontrado");
    }


    return 0;
}
