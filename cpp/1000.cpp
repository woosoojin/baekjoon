#include <iostream>
using namespace std;

int printSum(int a, int b) {
    int result = a + b;
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;

    int result = printSum(a, b);
    cout << result << endl;

    return 0;
}