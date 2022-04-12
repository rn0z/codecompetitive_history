#include "bits/stdc++.h"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int tc{};
    cin >> tc;
    while (tc--) {
        int d{};
        string m{};
        cin >> d >> m;
        
        if (!m.compare("Jan")) {
            if (d >= 21) {
                cout << "Aquarius";
            } else {
                cout << "Capricorn";
            }
        } else if (!m.compare("Feb")) {
            if (d >= 20) {
                cout << "Pisces";
            } else {
                cout << "Aquarius";
            }
        } else if (!m.compare("Mar")) {
            if (d >= 21) {
                cout << "Aries";
            } else {
                cout << "Pisces";
            }
        } else if (!m.compare("Apr")) {
            if (d >= 21) {
                cout << "Taurus";
            } else {
                cout << "Aries";
            }
        } else if (!m.compare("May")) {
            if (d >= 21) {
                cout << "Gemini";
            } else {
                cout << "Taurus";
            }
        } else if (!m.compare("Jun")) {
            if (d >= 22) {
                cout << "Cancer";
            } else {
                cout << "Gemini";
            }
            
        } else if (!m.compare("Jul")) {
            if (d >= 23) {
                cout << "Leo";
            } else {
                cout << "Cancer";
            }
        } else if (!m.compare("Aug")) {
            if (d >= 23) {
                cout << "Virgo";
            } else {
                cout << "Leo";
            }
        } else if (!m.compare("Sep")) {
            if (d >= 22) {
                cout << "Libra";
            } else {
                cout << "Virgo";
            }
        } else if (!m.compare("Oct")) {
            if (d >= 23) {
                cout << "Scorpio";
            } else {
                cout << "Libra";
            }
        } else if (!m.compare("Nov")) {
            if (d >= 23) {
                cout << "Sagittarius";
            } else {
                cout << "Scorpio";
            }
        } else if (!m.compare("Dec")) {
            if (d >= 22) {
                cout << "Capricorn";
            } else {
                cout << "Sagittarius";
            }
        }
        cout << endl;
    }

    return 0;
}