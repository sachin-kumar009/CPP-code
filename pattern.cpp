#include <iostream>
using namespace std;
// Hollow diamond pattern
int main (){
  int n = 4 ;
  // Upper part of the diamond
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n-i-1; j++) {
      cout << " ";
    }
    cout << "*";
    if (i != 0) {
      for (int j = 0; j< 2*i-1; j++) {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
  }

    for (int i = 0 ; i < n-1; i++) {
      for (int j = 0; j < i+1; j++) {
      cout << " ";
    }
    cout << "*";
    if (i != n-2) {
      for (int j = 0; j< 2*(n-i)-5; j++) {
        cout << " ";
      }
      cout << "*";
    }
    cout << endl;
    }
    return 0;
  }