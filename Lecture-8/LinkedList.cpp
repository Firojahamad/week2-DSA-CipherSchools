#include <iostream>

class Time {
private:
    int hours;
    int minutes;

public:
    void setTime(int min) {
        hours = min / 60;     // Calculate hours
        minutes = min % 60;   // Calculate remaining minutes
    }

    void displayTime() {
        std::cout << "Time: " << hours << " hours, " << minutes << " minutes" << std::endl;
    }
};

int main() {
    int minutes;

    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;

    Time t;  // Create an object of the Time class

    t.setTime(minutes);   // Set the time based on the input minutes
    t.displayTime();      // Display the calculated hours and minutes

    return 0;
}

