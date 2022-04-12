#include <bits/stdc++.h>

using namespace std;

int main() {
    int expensiveComp;
    int cheapComp;
    int *ptrComp;

    ptrComp = &expensiveComp;
    *ptrComp = 20000;

    ptrComp = &cheapComp;
    *ptrComp = 500;
    cout << ptrComp<< endl;
    cout << cheapComp << endl;
    cout << expensiveComp << endl;
    cout << endl << endl;

    string *phrase = new string("All presidents are cool!!!");
    cout << *phrase << endl;
    (*phrase)[20] = 'r';
    cout << *phrase << endl;
    phrase->replace(22,4, "oked");
    cout << *phrase << endl;
    
  
    delete phrase;
    return 0;
}