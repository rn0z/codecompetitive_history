#include <bits/stdc++.h>

int main(){
    using namespace std;
    string str;
    int tc = 1;

    while (cin >> str && str.compare("#")) {
        if (!str.compare("HELLO")) {
            str = "ENGLISH";
        } else if (!str.compare("HOLA")) {
            str = "SPANISH";
        } else if (!str.compare("HALLO")) {
            str = "GERMAN";
        } else if (!str.compare("BONJOUR")) {
            str = "FRENCH";
        } else if (!str.compare("CIAO")) {
            str = "ITALIAN";
        } else if (!str.compare("ZDRAVSTVUJTE")) {
            str = "RUSSIAN";
        } else {
            str = "UNKNOWN";
        }

        printf("Case %d: %s\n", tc, str.c_str());
        tc++;
    }

    return 0;
}