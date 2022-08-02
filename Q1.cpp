#include <iostream>
using namespace std;

int add(int a,int b) {
 return a*b;
}
double add(double  c,double d) {
  return c*d;
}


int main() {

cout << "Multiplication of whole numbers : " <<  add(11,33) << endl;
cout << "Multiplication of real numbers : " << add(19.25,11.326)<< endl;

  return 0;
}
