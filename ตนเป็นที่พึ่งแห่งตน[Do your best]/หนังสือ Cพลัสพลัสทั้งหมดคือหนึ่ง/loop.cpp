#include <bits/stdc++.h>

using namespace std;

int main() {

  int x = 0;

  for (int i = 1; i <= 100; i++) {
    x += i;
  }

  cout << x << endl;

  double y = 0.0;

  for (double i = 0.1; i <= 100; i += 0.1) {
    y += i;
  }

  cout << y << endl;

  string A = "Hello";
  string B = "1122334455";

  for (int i = 0, j = 0; i < 5; i++, j += 2) {
    cout << A[i] << B[j] << endl;
  }
  cout << endl << endl;

  int range[] = {1, 2, 3, 4, 5};
  for (auto i: range) {
    cout << i << endl;
  }

  cout << endl << endl;

  string hello = "Hello";
  int values[] = {1, 2, 3, 4, 5,  1};
  //int values[] = {1, 2, 3, 4, 5, 0, 1};
  //int values[] = {1, 2, 3, 4, 5, 0, 1};
  //for (int i = 0; char c = hello[i]; i++) {
  for (int i = 0; auto c = values[i]; i++) {
    cout << c << endl;
  }
  cout << endl << endl;

  double number = 10.0;
  cout << pow(number, 0.00001) << endl;


  return 0;
}