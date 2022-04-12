#include <bits/stdc++.h>

using namespace std;


typedef vector<pair<char, pair<int, int>>> pvi;

map<char, int> pieces{
    {'K', 1},
    {'Q', 2},
    {'R', 3},
    {'B', 4},
    {'N', 5},
    {'P', 6}
};

void sort_pieces(pvi & a, string which) {
    cerr << which <<" sorting" << endl;
    pvi temp{};
    pvi king{}, queen{}, rooks{}, bishops{}, knights{}, pawns{};
    for (auto & piece:a) {
        auto p = piece.first;
        if (p == 'K')
            king.push_back(piece);
        else if (p == 'Q')
            queen.push_back(piece);
        else if (p == 'R')
            rooks.push_back(piece);
        else if (p == 'B')
            bishops.push_back(piece);
        else if (p == 'N')
            knights.push_back(piece);
        else if (p == 'P')
            pawns.push_back(piece);
    }
    
    auto comp = [which](auto & l, auto & r) {
        if (l.second.second == r.second.second)
                return l.second.first < r.second.first;
        else 
            if (which == "White")
                return l.second.second > r.second.second;
            else
                return l.second.second < r.second.second;
    };

    sort(begin(king), end(king), comp);
    sort(begin(queen), end(queen), comp);

    sort(begin(rooks), end(rooks), comp);

    sort(begin(bishops), end(bishops), comp);

    sort(begin(knights), end(knights), comp);

    sort(pawns.begin(), pawns.end(), comp); 

    for (auto p:pawns)
        cerr << p.second.second << ' ';
    cerr << endl;

    temp.insert(temp.end(), king.begin(), king.end());
    temp.insert(temp.end(), queen.begin(), queen.end());
    temp.insert(temp.end(), rooks.begin(), rooks.end());
    temp.insert(temp.end(), bishops.begin(), bishops.end());
    temp.insert(temp.end(), knights.begin(), knights.end());
    temp.insert(temp.end(), pawns.begin(), pawns.end());

    a = temp;
    
    cerr << which << " sorted" << endl;
}

void print(pvi a, string player) {

    sort_pieces(a, player);

    int i = 0;

    cout << player << ": ";
    for (auto p:a) {
        if (p.first != 'P')
            cout << p.first << (char)('a' + p.second.first) << 8 - p.second.second;
        else
            cout << (char)('a' + p.second.first) << 8 - p.second.second;
        
        if (i < a.size() - 1) cout << ',';
        
        ++i;
    }

    cout << endl;

}

int main() {
    pvi white{};
    pvi black{};
    char f[8][8]{};
    
    int i{}, k{}, c{}, r{};
    string l;
    for (;i < 17; ++i) {
        getline(cin, l);
        if (i & 1 == 1) {
            for (k = 2, c = 0; k < l.length(); k += 4) {
                f[r][c] = l[k];
                ++c;
            }
            ++r;
        }
    }

    for (r = 0; r < 8; ++r) {
        for (c = 0; c < 8; ++c)
            if (isupper(f[r][c]))
                white.push_back({f[r][c], {c, r}});
            else if (islower(f[r][c]))
                black.push_back({toupper(f[r][c]), {c, r}});
    }

    print(white, "White");
    print(black, "Black");

    return 0;
}