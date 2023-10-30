#include <stdio.h>
#include <math.h> // to perform mathematical functions

int main() {

//end point initialisation and assigning the no of points

int N = 12;
double x_0 = 0.0;
double x_12= M_PI/3.0;
double width = (x_12 - x_0)/(double)N;

// get values for f(x) = tan(x) for end points, and add them up

double X = tan(x_0) + tan(x_12);

// Get equidistant points ----> calculate tan at these points ----> store 2tan(x) at each step

double x;
double y;
double sum = X;

int i=1;
while (i<12){
    x= x_0 + width*i;
    y = tan(x);
    sum += 2*y;    
    i++;
}


// get approximate values to the equation 
double integral_approx= sum * width * 0.5;

//comparing with log(2)

double integral_exact = log(2);

printf("Your approximation of integral from x=0 to x=pi/3 of the func tan(x) w.r.t x is: \n%.5f\n", integral_approx);
printf("The exact solution is: \n%.5f\n", integral_exact);

return(0);

}