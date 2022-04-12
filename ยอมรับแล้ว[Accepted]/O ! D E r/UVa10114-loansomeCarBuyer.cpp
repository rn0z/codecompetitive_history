#include <iostream>
using std::cin;
using std::cout; 

int main() {
  int dur, nRec;
  double downP, loan,
         depre[101] = {0};
  while (cin >> dur >> downP >> loan >> nRec && dur > 0) {
    int i; double p;
    while (nRec-- && cin >> i >> p)
      for (;i < 101; i++)
        depre[i] = p;

    double perMonth = loan  / dur,
           curLoan =  loan,
           curVal = (loan + downP) * (1 - depre[0]);
    int mn = 0;
    while (curVal < curLoan){
      mn++;
      curLoan -= perMonth;
      curVal *= 1 - depre[mn];
    }

    cout << "month";
    if (mn > 1) cout << "s";
    cout << " " << mn << '\n';
  }

  return 0;
}
