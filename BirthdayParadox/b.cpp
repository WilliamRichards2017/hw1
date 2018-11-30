#include <random>
#include <iostream>

#include "b.hpp"

// https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
// c++ 11 Random Number generation best practices

randomTrial::randomTrial()
{
}


int16_t randomTrial::runTrial()
{
  std::uniform_int_distribution<int16_t> distr(1, 4000);
  std::random_device rd;
  std::mt19937 mt(rd());
  std::set<int16_t> randomNumbers;

  while(randomNumbers.insert(distr(mt)).second) {}

  return randomNumbers.size()+1;
}

std::map<int16_t, int16_t> randomTrial::runMTrials(int16_t m)
{
  std::map<int16_t, int16_t> trialsMap;

  for(unsigned u = 0; u < m; ++u){
    int16_t k = randomTrial::runTrial();
    std::cout << "It took: " << k << " trials " << std::endl;
  }
  
  return trialsMap;
}


int main() 
{
  randomTrial r;
  auto results = r.runMTrials(300);
  
  return 0;
}





