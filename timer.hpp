#include<iostream>
#include<ctime>

class Timer{
private:
  clock_t start_, end_;
public:
  Timer();
  void start();
  void stop();
  double duration();
};

void Timer::start(){
  start_=clock();
}

void Timer::stop(){
  end_=clock();
}

double Timer::duration(){
  return ((double)(end_ - start_))/CLOCKS_PER_SEC;
}
