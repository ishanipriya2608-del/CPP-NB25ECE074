#include <iostream>
#include <iomanip>

class Time {
private:
    int hh; 
    int mm; 

    

    int toMinutes() const {
        return (hh * 60) + mm;
    }

public:
    Time(int h, int m) : hh(h), mm(m) {}

    void display() const {
        std::cout << std::setfill('0') << std::setw(2) << hh << ":"
                  << std::setfill('0') << std::setw(2) << mm << "\n";
    }

    friend Time laterOf(Time t1, Time t2);
};

Time laterOf(Time t1, Time t2) {
    

    if (t1.toMinutes() >= t2.toMinutes()) {
        return t1;
    } else {
        return t2;
    }
}

int main() {
    Time time1(14, 30);
    Time time2(09, 45); 

    std::cout << "Time 1: "; time1.display();
    std::cout << "Time 2: "; time2.display();

    Time later = laterOf(time1, time2);
    std::cout << "The later time is: ";
    later.display();

    return 0;
}