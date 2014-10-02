#include"SimpsonsRule.h"
#include<cmath>

double SimpsonsRule(double (*function)(double),const double a, const double b, const double bin){

  double x=a;
  double sumfx=0;	
  double deltax=(b-a)/bin;

  while(x<=b){
    sumfx+=function(x)+4.0*function(x+deltax/2.0)+function(x+deltax);
    x+=deltax;
  }
  sumfx*=deltax/6.0;
  
  return sumfx;
}

