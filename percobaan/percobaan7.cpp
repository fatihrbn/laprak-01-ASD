#include <iostream>
using namespace std;

int main () {
  int my_array[] = {1,23,17,4,-5,100};
  int *ptr;
  int i;

  ptr = &my_array[0]; 
  printf("\n\n");
  for (i = 0; i < 6; i++) {
    cout << "my_array[" << i << "] = " << my_array[i];
    cout << "ptr + " << i << " = " << *(ptr + i) << endl;
  }

  return 0;
}
