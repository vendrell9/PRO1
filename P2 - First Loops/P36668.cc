#include <iostream>
using namespace std;

int main() {
    int n;
    int total = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        total += i*i;
    }
    cout << total << endl;
}
