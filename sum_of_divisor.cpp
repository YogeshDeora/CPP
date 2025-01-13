#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sum = 0;

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) { 
            sum += i;
        }
    }

    cout << "Sum of divisors: " << sum << endl;

    return 0;
}
