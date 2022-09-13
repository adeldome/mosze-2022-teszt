#include <iostream>

constexpr int N_ELEMENTS = 100;

int main() {
  int sum, b[N_ELEMENTS];
  float average;

  std::cout << "1-100 ertekek duplazasa:" << std::endl;

  for (int i = 1; i <= N_ELEMENTS; i++) {
    b[i] = i * 2;
    std::cout << "Ertek:" << b[i] << std::endl;
  }

  std::cout << "Atlag szamitasa: " << std::endl;

  sum = 0;
  average = 0;

  for (int i = 1; i <= N_ELEMENTS; i++) {
    sum += b[i];
  }

  average = (float) sum / N_ELEMENTS;
  std::cout << "Atlag: " << average << std::endl;

  return 0;
}