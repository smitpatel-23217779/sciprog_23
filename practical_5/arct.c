#include <stdio.h>
#include <math.h>

//function declaration

double arctanh1(const double x, const double delta);
double arctanh2(const double x);

int main(){

  double delta, x;

  printf("enter the precision for the Maclaurin series: \n");
  scanf("%lf", &delta);

  int length=1000;
  double tan1[length]; //storing the result of arctan1
  double tan2[length]; //storing the result of arctan2


  int j=0; //creating array index
  x= -0.9; //initial value
  while (x<0.9 && j <length) {
        tan1[j]=arctanh1(x ,delta);
        tan2[j]=arctanh2(x);
        printf ("the difference at x=%lf between the two formula is: %.10lf.\n", x, fabs(tan1[j]-tan2[j])); // returns the absolute number
        j++;
        x+=0.1; //increment by 0.1
      }
   return 0;
}

double arctanh1(const double x, const double delta){
    double arcTan =0; //approximation
    double elem, val; // element in the series
    int n=0; //sum parameter
 do
      {
      val=2*n+1;
      elem= pow(x, val)/val;
      arcTan+=elem;
      n++;
      } while(fabs(elem)>=delta);

    return arcTan;
}

double arctanh2(const double x){
      return(log(1+x)-log(1-x))/2;
}
