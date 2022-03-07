#include<iostream>
#include<cstdlib>
using namespace std;

#define MAX 20

int main() {
  int *fibo;
  int i;

  fibo = (int *) malloc(MAX * sizeof(int*));
  *(fibo + 1) = 1;
  *(fibo + 2) = 1;

  for (i=3;i<=MAX;i++) {
    *(fibo + i) = (*(fibo + i - 2) + *(fibo + i - 1));
  }
  cout << MAX << " Bilangan Fibonaci Pertama adalah : \n";
  for (i=1;i<MAX;i++) {
    cout << *(fibo+i) << " ";
  }
}