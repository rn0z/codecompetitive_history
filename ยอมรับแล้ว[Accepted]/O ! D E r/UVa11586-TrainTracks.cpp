#include <iostream>

using namespace std;

int main() {
    int n, i; cin >> n;
    cin.ignore();
    while (n--) {
        string peices = "";
        getline(cin, peices);
        int len = peices.length(); 
        bool isLoop = true;

        if (peices[0] == peices[len - 1])
            isLoop = false; 
        else
            for (i = 1; i < len - 1; i += 3)
                if (peices[i] == peices[i + 2]) 
                    isLoop = false;

        (isLoop)? cout << "LOOP" : cout << "NO LOOP";
        cout << endl;
    }

    return 0;
}

