#include <iostream>
using namespace std;

int main() {
    // Type casting
    int num1 = 10;
    double num2 = 4.5;
    
    int result = static_cast<int>(num2);  // Type cast double to int
    
    cout << "Result after type casting: " << result << std::endl;
    
    // Type conversion
    int num3 = 20;
    double num4;
    
    num4 = static_cast<double>(num3);  // Type conversion from int to double
    
    cout << "Result after type conversion: " << num4 << std::endl;
    
    return 0;
}

