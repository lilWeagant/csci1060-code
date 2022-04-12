/*
Author: Andrew Dale
Edited by: Riley Weagant
*/
#include <vector> 
#include <iostream>
#include <string>

using namespace std;

int findMax(vector<int>);
int main(){
  vector<int> vec = {5, 8, 2, 8, 5, 8, 2};
  int maxVal = findMax(vec);
  
  cout << "Maximum value from vector is: " << maxVal << std::endl;
  return 0;
}


int findMax(vector<int> v){
  int maxVal = 0;
  for(int i = 0; i < v.size(); i++){
    if(v[i] > maxVal){
      maxVal = v[i];
    }
  }
  return maxVal;
}