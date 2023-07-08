#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex() : real(0), imaginary(0) {}

    Complex(int r, int i) : real(r), imaginary(i) {}

    Complex operator+(const Complex& other) {
        Complex sum;
        sum.real = real + other.real;
        sum.imaginary = imaginary + other.imaginary;
        return sum;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);

    Complex sum = c1 + c2;
    sum.display();

    return 0;
}

