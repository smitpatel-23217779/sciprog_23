#include <stdio.h>
#include <math.h> 


double deg2rad(double deg);
double traprule(int N);


int main() {
    int N = 12;
    double integral_approx = traprule(N);
    double integral_exact = log(2.0);

    printf("your approximation of the integral from x=0 degrees to x=60 degrees of the function tan(x) w.r.t x is: \n%.5f\n The exact solution is:\n%.5f\n", integral_approx, integral_exact);   
}

//to convert degrees into radians   
double deg2rad(double deg){
    return (deg * M_PI)/180.0;
}


// calculate tan at these points 
double traprule(int N)
{
    int i;
    double TanValues[N+1], deg, rad, width;
    for (i=0; i<=N; i++){
        deg = i*5.0;
        rad = deg2rad(deg);
        TanValues[i] = tan(rad);
    }

// store 2tan(x) at each step  -----> get the area

    double area = TanValues[0]+ TanValues[N];
    for (i=1; i<N; i++){
        area += 2.0*TanValues[i];
    }

    width = deg2rad((60.0-0)/(2.0*N));
    area = width*area;

    return area;
}