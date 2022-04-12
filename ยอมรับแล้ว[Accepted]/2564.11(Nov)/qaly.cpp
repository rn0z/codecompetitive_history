#include"iostream"

using namespace std;

int main() {
    int N{}; cin >> N;
    float accu{};
    while (N--) {
        float q{}, y{};
        scanf("%f %f", &q, &y);
        accu = accu + q * y;
    }

    printf("%.3f\n", accu);
    return 0;
}