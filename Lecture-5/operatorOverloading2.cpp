#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    Counter(int initialValue) : count(initialValue) {}

    Counter operator++() { // Pre-increment operator
        count++;
        return *this;
    }

    Counter operator++(int) { // Post-increment operator
        Counter temp(*this);
        count++;
        return temp;
    }

    Counter operator--() { // Pre-decrement operator
        count--;
        return *this;
    }

    Counter operator--(int) { // Post-decrement operator
        Counter temp(*this);
        count--;
        return temp;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5);

    cout << "Original Count: ";
    c1.display();

    // Pre-increment
    ++c1;
    cout << "After Pre-increment: ";
    c1.display();

    // Post-increment
    Counter c2 = c1++;
    cout << "After Post-increment: ";
    c2.display();
    cout << "Updated Count: ";
    c1.display();

    // Pre-decrement
    --c1;
    cout << "After Pre-decrement: ";
    c1.display();

    // Post-decrement
    Counter c3 = c1--;
    cout << "After Post-decrement: ";
    c3.display();
    cout << "Updated Count: ";
    c1.display();

    return 0;
}

