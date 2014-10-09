#include<iostream>
#include<cmath>
#include<math.h>

class Generator{
private:
	long double m=pow(2.,32.);
  static const int  a = 1664525;
  static const int  c =1013904223;
  int r;
public:
  int generate();
  int max();
  Generator(int seed);
};

Generator::Generator(int seed){
  r = seed;
}

int Generator::generate(){
  return (a*r+c)%m;
}

int Generator::max(){
  return m;
}
