#include <iostream>

using namespace std;

unsigned fibRec(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    return fibRec(n - 1) + fibRec(n - 2);
}

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    cout << fibRec(n);

    return 0;
}