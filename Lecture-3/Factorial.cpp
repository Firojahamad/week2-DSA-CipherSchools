#include <iostream>
using namespace std;

class FactorialCalculator {
private:
    int number;

public:
    FactorialCalculator(int num) {
        number = num;
    }

    int calculateFactorial() const {
        if (number < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
            return -1;
        } else if (number == 0 || number == 1) {
            return 1;
        } else {
            int factorial = 1;
            for (int i = 2; i <= number; i++) {
                factorial *= i;
            }
            return factorial;
        }
    }

    friend void displayFactorial(const FactorialCalculator& fc);
};

void displayFactorial(const FactorialCalculator& fc) {
    int factorial = fc.calculateFactorial();
    if (factorial != -1) {
        cout << "Factorial of " << fc.number << " is: " << factorial << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    FactorialCalculator fc(num);
    displayFactorial(fc);

    return 0;
}

