#include <iostream>
using namespace std;

int main () {
  int y, x = 87;
  int *px;
  x = 87;
  px = &x; 
  y = *px;
  cout << "Alamat x = " << &x << endl;
  cout << "Isi px = " << px << endl;
  cout << "Isi x = " << x << endl;
  cout << "Nilai yang ditunjuk oleh px = " << *px << endl;
  cout << "Nilai y = " << y << endl;

  return 0;
}
