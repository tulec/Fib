#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    int f1 = 0;
    int f2 = 1;
    int ftemp;
    int fn = 1;
    if (n >= 1)
        cout << 0 << " ";
    if (n >= 2)
        cout << 1 << " ";
    for (int i = 0; i < n - 2; i++) {
        fn = f1 + f2;
        cout << fn << " ";
        f1 = f2;
        f2 = fn;
    }
    cout << endl;
    return 0;
};