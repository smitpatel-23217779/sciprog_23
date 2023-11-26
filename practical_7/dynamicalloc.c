#include <stdio.h>
#include <stdlib.h>

// allocate array

int *allocate(int n){
    int *p;
    p= (int *) malloc(n*sizeof(int));
    return p;
}

// fill with ones

void fillwithones(int *array, int n){
    int i;
    for(i=0; i<n; i++){
        array[i]=1;
    }
}

// print the array

void printarray(int *array, int n){
    int i;
    for(i=0; i<n; i++){
        printf("a[%d]: %d\n", i, array[i]);
    }
}

// deallocate array

void deallocatearray(int *array){
    free(array);
}

int main(){
    int n, *a;

    printf("size of array:\n");
    scanf("%d",&n);
    a= allocate(n);
    fillwithones(a, n);
    printarray(a, n);
    deallocatearray(a);
    a= NULL;
    return 0;
}