#include <bits/stdc++.h>
using namespace std;

int tc = 1;
void run_case(const int w, const int n)
{
    vector<pair<string, int>> dataset{};
    int c_max = 0;
    int rs = 0;
    for (int i = 0; i < n; ++i)
    {
        string word;
        int c;
        cin >> word >> c;
        if (c > c_max)
            c_max = c;

        dataset.push_back({word, c});
    }

    vector<int> line{};
    int w_stack{};
    int high_pt = 0;
    for (auto const &e : dataset)
    {
        int pt = ceil((float)(40 * (e.second - 4)) / (c_max - 4)) + 8;
        int t = e.first.length();
        int width = ceil((float)(t * pt * 9) / 16);

        if ((w_stack + width) <= w)
        {
            w_stack += width + 10;
            high_pt = (pt > high_pt) ? pt : high_pt;
        }
        else
        {
            rs += high_pt;
            w_stack = width + 10;
            high_pt = pt;
        }
    }

    rs += high_pt;
    cout << "CLOUD" << ' ' << tc << ':' << ' ' << rs << endl;
    ;
    ;

    ++tc;
}

int main()
{
    int w, n;

    while (cin >> w >> n && (w || n))
        run_case(w, n);

    return 0;
}