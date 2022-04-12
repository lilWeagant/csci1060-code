/*
Author: Andrew Dale
*/
#include <vector> 
#include <iostream>
#include <string>

int findMax(std::vector<int>);
int main(){
  std::vector<int> vec = {5, 8, 2, 8, 5, 8, 2};
  int maxVal = findMax(vec);
  
  std::cout << "Maximum value from vector is: " << maxVal << std::endl;
  return 0;
}


int findMax(std::vector<int> v){
  int maxVal = 0;
  for(const auto &value : v){
    if(value > maxVal){
      maxVal = value;
    }
  }
  return maxVal;
}