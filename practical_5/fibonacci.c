#include <stdio.h>
#include <stdlib.h>

//Function declaration
//input arguments: Fn-1 and Fn-2

void fibonacci(int *a, int *b);


int  main(){
    int n, i;
    int f0=0, f1=1;

    printf("Enter a postive integer\n");
    scanf("%d", &n);

    if(n<1){
        printf("Please enter positive number");
        exit(1);
    }
    
    printf("The fabonaaci sequence is: \n");
    printf("%d, %d,", f0,f1);

    //calculating fabonacci sequqence from 2
    for (i=2; i<=n; i++){
        fibonacci(&f1, &f0);
        printf("%d, ",f1);

        if((i+1)%10 == 0) printf("\n");
    }
    return 0;
}

void fibonacci(int *a, int *b){

    int next;
    // *a= fn-1 *b=fn-2 next=fn
    next= *a+*b;
    //*a=fn *b=fn-1
    *b=*a;
    *a= next;
}