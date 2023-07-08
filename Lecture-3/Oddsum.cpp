#include <iostream>
using namespace std;

class OddNumberSumCalculator {
public:
    int calculateSum() {
        int sum = 0;
        for (int i = 1; i <= 100; i += 2) {
            sum += i;
        }
        return sum;
    }
};

int main() {
    OddNumberSumCalculator calculator;
    int sum = calculator.calculateSum();
    cout << "Sum of odd numbers between 1 and 100: " << sum << endl;

    return 0;
}

