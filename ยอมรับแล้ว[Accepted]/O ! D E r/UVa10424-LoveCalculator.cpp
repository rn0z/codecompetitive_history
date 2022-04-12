#include <iostream>
#include <cstdio>

using namespace std;

int counting(string txt) {
  int rs = 0;
  for (int i = 0; txt[i]; i++) {
    if (txt[i] >= 'a' && txt[i] <= 'z')
      rs += txt[i] - 'a' + 1;
    if (txt[i] >= 'A' && txt[i] <= 'Z')
      rs += txt[i] - 'A' + 1;
  }

  return rs;
}

int sum(int a) {
  while (a >= 10) {
    int tmp = 0;
    while (a > 0)
      tmp += a % 10, a /= 10;
    a = tmp;
  }

  return a;
}

int main() {

  int a, b;
  string txt1, txt2; 
  while (cin >> txt1 >> txt2) {
    a = counting(txt1), b = counting(txt2);
    a = sum(a), b = sum(b);
    if (a > b) {
      int temp = b;
      b = a;
      a = temp;
    }
    printf("%0.2lf %%\n", (double)a * 100 / b);
  }

  return 0;
}
