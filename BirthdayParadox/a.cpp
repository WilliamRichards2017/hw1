#include <set>
#include <random>
#include <iostream>

#include <set>
#include <random>
#include <iostream>


int main() {
  std::random_device rd;
  //mersene twister 19937 pseudo-random number generator                                                                                                                                             
  std::mt19937 mt(rd());

  //used to generated random values with random seed in range 1-4000
  std::uniform_int_distribution<int16_t> dist(1, 4000);
  //store each generated number in set
  std::set<int16_t> randomNumbers;

  //when insert iterator returns false, a non-unique number was generated
  while(randomNumbers.insert(dist(mt)).second){
  }
  
  //Number of trials is 1 more than size of unique set
  std::cout << "It took " <<  randomNumbers.size()+1 << " trials before finding non-unique element" << std::endl;
}




