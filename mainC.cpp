#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b; // input nilai awal dan nilai akhir

    int n = b - a + 1;          // jumlah suku
    int total = n * (a + b) / 2; // rumus jumlah deret aritmatika

    cout << total << endl; // output hasil

    return 0;
}