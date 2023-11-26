#include <stdio.h>

int gcd_iteration(int a, int b);
int gcd_recursive(int a, int b);

int main(){
  int a, b;
  printf("Enter a positive integer a:\n");
  scanf("%d",&a);  

  while(a<=0){
    printf("Number is not postive, please try again...\n");
    printf("Enter a positive integer a:\n");
    scanf("%d",&a);
  }

  printf("Enter a positive integer b:\n");
  scanf("%d",&b);  

  while(b<=0){
    printf("Number is not postive, please try again...\n");
    printf("Enter a positive integer b:\n");
    scanf("%d",&b); 
  }

  int ans_i = gcd_iteration(a, b);
  int ans_r = gcd_recursive(a, b);
  printf("Using iteration, answer would be: %d\n", ans_i);
  printf("Using recursion, answer would be: %d\n", ans_r);
  return 0;
}

int gcd_iteration(int a, int b){
    int temp;
    while(b!=0){
        temp=b;
        b= a%b;
        a=temp;
    }
    return a;

}

int gcd_recursive(int a, int b){
    if (b==0){
        return a;
    }
    else
    {
        return gcd_recursive(b, a % b);
    }
}
