#include <bits/stdc++.h>

using namespace std;

void run_case() {
    string line;
    while (getline(cin, line)) {
        double tot_fat{}, tot_c{};
        if (line == "-") break;
        do {
            if (line == "-") break;
            int a, b, c, d, e, tot_percent{};
            char a_u, b_u, c_u, d_u, e_u;
            double temp_fat{}, temp_c{};
            sscanf(line.c_str(), "%d%c %d%c %d%c %d%c %d%c\n", &a, &a_u, &b, &b_u, &c, &c_u, &d, &d_u, &e, &e_u);

            if (a_u == 'g') temp_c += a * 9, temp_fat = a * 9;
            if (a_u == 'C') temp_c += a, temp_fat += a;
            if (a_u == '%') tot_percent += a;

            if (b_u == 'g') temp_c += b * 4;
            if (b_u == 'C') temp_c += b;
            if (b_u == '%') tot_percent += b;

            if (c_u == 'g') temp_c += c * 4;
            if (c_u == 'C') temp_c += c;
            if (c_u == '%') tot_percent += c;

            if (d_u == 'g') temp_c += d * 4;
            if (d_u == 'C') temp_c += d;
            if (d_u == '%') tot_percent += d;

            if (e_u == 'g') temp_c += e * 7;
            if (e_u == 'C') temp_c += e;
            if (e_u == '%') tot_percent += e;

            double curr_c = temp_c;
            double denominator = ((double)curr_c / (100 - tot_percent) * 100);
            if (a_u == '%') temp_c += denominator * ((double)a / 100), temp_fat += denominator * ((double)a / 100);
            if (b_u == '%') temp_c += denominator * ((double)b / 100);
            if (c_u == '%') temp_c += denominator * ((double)c / 100);
            if (d_u == '%') temp_c += denominator * ((double)d / 100);
            if (e_u == '%') temp_c += denominator * ((double)e / 100);

            tot_fat += temp_fat;
            tot_c += temp_c;
        } while (getline(cin, line));

        cout << round(tot_fat / tot_c * 100) << '%' << endl;
    }

}

int main() {
    run_case();
    return 0;
}