#include <iostream>
using namespace std;

class uk {
public:
    int kms;
    int mts;

    void display() {
        cout << kms << " kms and " << mts << endl;
    }
};

class us {
public:
    int miles;
    int feet;

    us(int m, int f) {
        miles = m;
        feet = f;
    }

    us(uk obj) {
        miles = obj.kms / 1.6;
        feet = obj.mts / 0.3;
    }

    void display() {
        cout << miles << " miles and " << feet << " feet" << endl;
    }

    operator uk() {
        uk duk;
        duk.kms = miles * 1.6;
        duk.mts = feet * 0.3;
        return duk;
    }
};

int main() {
    us dus(5, 10);
    uk duk;

    duk = (uk)dus;
    duk.display();

    us dus2 = duk;
    dus2.display();

    return 0;
}

