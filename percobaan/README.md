# percobaan 1 : Cara memberikan nilai pada array dan mengakses array

## Code
``` c
#include <iostream>
using namespace std;

int main () {
  int i, j, n[10];
  for ( i = 0; i < 10; i++ ) {
    n[i] = i + 100;
  }
  for (j = 0; j < 10; j++ ) {
    cout << "Element[" << j << "] = " << n[j] << endl;
  }
  return 0;
}
```
## Output
![image](https://user-images.githubusercontent.com/89684302/159172582-8248a71f-51ab-4aa3-b364-ea6f7ff9f360.png)
