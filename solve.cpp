
#include <iostream>
#include <cmath>
using namespace std;
double fun(double x) {
  return pow(x, 3) - 18; // Use pow() function instead of math.h version
}
int main() {
  float a, b, x, eps;
  int i = 0;
  cout << "Enter lower: ";
  cin >> a ;
  cout<< "upper limit: ";
  cin >> b;
  
  cout << "// Accuracy upto 3 decimal example eps=0.001 \nEnter epsilon value eps=";
  cin >> eps;
  if (fun(a) * fun(b) > 0) {
    cout << "Starting values are unsuitable. Ensure f(a) and f(b) have opposite signs." << endl;
  } else {
    while (abs((b - a) / b) > eps) {
      x = (a + b) / 2.0;
      i++;
      if (fun(x) * fun(a) > 0) {
        a = x;
      } else {
        b = x;
      }
    }
    cout << "Solution converges to a root." << endl;
    cout << "Number of iterations: " << i << endl;
    cout << "Approximate root: " << x << endl;
  }

  return 0;
}