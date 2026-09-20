/*********************
* Платонова Софья    *
* Линейные алгоритмы *
* Вариант 22         *
**********************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double rho, compression, sigma, polytope;

  cout << "rho = ";
  cin >> rho;

  cout << "compression = ";
  cin >> compression;

  cout << "sigma = ";
  cin >> sigma;

  cout << "polytope = ";
  cin >> polytope;

  double n;
  n = (polytope - 1) / polytope;

  double n1, n2, n3;

  //with full regeneration
  n1 = 1.0 - (1.0 / rho);

  //with partial regeneration
  n2 = ((rho - 1.0) * (pow(compression, n) - 1.0)) / (pow(compression, n) * (rho - 1.0) - sigma * (rho - pow(compression, n)));

  //in the absence of regeneration
  n3 = 1.0 - (1.0 / pow(compression, n));

  cout << "Efficiency with full regeneration = " << n1
       << "\nEfficiency with partial regeneration = " << n2
       << "\nEfficiency in the absence of regeneration = " << n3;
}