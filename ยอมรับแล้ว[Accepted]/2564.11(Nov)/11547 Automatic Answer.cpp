#include"iostream"
using namespace std;
int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n{}; cin >> n;
        int rs = ((n * 567 / 9) + 7492) * 235 / 47 - 498;
        int colten = rs / 10 % 10;
        cout << ((colten < 0)?colten * -1 : colten) << endl;
    }

    return 0;
}