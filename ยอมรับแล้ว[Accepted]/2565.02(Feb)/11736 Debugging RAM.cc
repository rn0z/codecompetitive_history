#include<bits/stdc++.h>
using namespace std;

typedef vector<unsigned long long> vec_lli;
typedef pair<string, int> str_int;

/*
std::ostream&
operator<<( std::ostream& dest, __int128_t value )
{
    std::ostream::sentry s( dest );
    if ( s ) {
        __uint128_t tmp = value < 0 ? -value : value;
        char buffer[ 128 ];
        char* d = std::end( buffer );
        do
        {
            -- d;
            *d = "0123456789"[ tmp % 10 ];
            tmp /= 10;
        } while ( tmp != 0 );
        if ( value < 0 ) {
            -- d;
            *d = '-';
        }
        int len = std::end( buffer ) - d;
        if ( dest.rdbuf()->sputn( d, len ) != len ) {
            dest.setstate( std::ios_base::badbit );
        }
    }
    return dest;
}
*/


unsigned long long binary_convert(string bytes) {
    unsigned long long rs = 0;
    for (int i = 0; i < bytes.length(); ++i)
        rs = (rs << 1) + bytes[i] - '0';

    return rs;
}

void run_case() {
    int b, v;
    while (cin >> b >> v) {
        vector<str_int> map_var{};
        unordered_map<string, unsigned long long> contents{};
        for (int i = 0; i < v; ++i) {
            string s; int t;
            cin >> s >> t;
            map_var.push_back({s, t});
        }

        for (auto const& e:map_var) { // std::pair<std::string, int> cost& e
            string bytes{};
            for (int i = 0; i < e.second; i++) {
                string b;
                cin >> b;
                bytes += b;
            }
            contents[e.first] = binary_convert(bytes);
        }
        int q; cin >> q;
        while (q-- > 0) {
            string v_name; cin >> v_name;
            // /*
            if (contents.find(v_name) == contents.end()) 
                cout << v_name << '=' << endl;
            else 
                cout << v_name << '=' << contents[v_name] << endl;
            // */
        }
    }
}

int main() {
    run_case();
    return 0;
}