#include <iostream>
#include <vector>
#include <bitset>
#include <chrono>

int main() {
  // Size of the bit array
  size_t size = 1000000;

  // Using std::vector<bool>
  auto start = std::chrono::high_resolution_clock::now();
  std::vector<bool> vec_bool(size); 
  for (size_t i = 0; i < size; ++i) {
    vec_bool[i] = (i % 2 == 0);
  }
  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << "std::vector<bool> time: " << duration.count() << " ms" << std::endl;

  // Using std::bitset
  start = std::chrono::high_resolution_clock::now();
  std::bitset<1000000> bitset_bool;
  for (size_t i = 0; i < size; ++i) {
    bitset_bool[i] = (i % 2 == 0);
  }
  end = std::chrono::high_resolution_clock::now();
  duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << "std::bitset time: " << duration.count() << " ms" << std::endl;

  return 0;
}
