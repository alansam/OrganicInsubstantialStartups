#include <iostream>

void getTemp(double &, double &, double &);

int main() {
  std::cout << "OrganicInsubstantialStartups" << std::endl;

  double temp1;
  double temp2;
  double temp3;

  getTemp(temp1, temp2, temp3);

  std::cout << temp1 << std::endl;
  std::cout << temp2 << std::endl;
  std::cout << temp3 << std::endl;
  std::putchar('\n');

  return 0;
}

void getTemp(double & temp1, double & temp2, double & temp3) {
  temp1 = 3.14159;
  temp2 = 2.71828;
  temp3 = 1.41421;

  return;
}
