#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "The sum of all even numbers from 1 to " << n << " is: ";
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    return 0;
}
