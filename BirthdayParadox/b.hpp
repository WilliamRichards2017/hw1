#ifndef __b_h__
#define __b_h__

#include <iostream>
#include <random>
#include <map>
#include <set>

class randomTrial{
 public:
  randomTrial();
  std::map<int16_t, int16_t> runMTrials(int16_t);
  
 private:
  std::uniform_int_distribution<> dist_;
  int16_t runTrial();

};

#endif // __b_h__
