#include <iostream>
#include <cmath>

using namespace std;

int main () {
  for (int i = 1; i < 1000; i++) {
      for (int j = i; j < 1000 - i; j++ ) {
          if ( i + j + sqrt (i * i + j * j) == 1000 ) 
              cout << i << " " << j;
      }
   }
   return 0;
}
