/*********************
*   Платонова Софья  *
* Линейные алгоритмы *
*     Вариант 22     *
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
  
  //with full regeneration
  double n1;
  n1 = 1 - (1 / rho);
  
  //with partial regeneration
  double n2;
  n2 = ((rho - 1) * (pow(compression, n) - 1)) / (pow(compression, n) * (rho - 1) - sigma * (rho - pow(compression, n)));
  
  //in the absence of regeneration
  double n3;
  n3 = 1 - (1 / pow(compression, n));
  
  
  cout << "Efficiency with full regeneration = " << n1;
  cout << "\nEfficiency with partial regeneration = " << n2;
  cout << "\nEfficiency in the absence of regeneration = " << n3;
}