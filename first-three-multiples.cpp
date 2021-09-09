#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {
  std::vector<int> value = {};
  for(int i = 1; i <= 3; i++){
    value.push_back(num*i);
  }
  return value;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}