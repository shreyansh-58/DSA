#include <iostream>
using namespace std;

int revNum(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main() {
    int val = 42324068;
    cout << revNum(val) << endl;
    return 0;
}