#include <iostream>

class Counter {
private:
    static int total_created;
    static int currently_alive;
    
    int id; 


public:
    

    Counter(int obj_id) : id(obj_id) {
        total_created++;
        currently_alive++;
        std::cout << "Object " << id << " created.\n";
    }

    ~Counter() {
        currently_alive--;
        std::cout << "Object " << id << " destroyed.\n";
    }

    

    static void report() {
        std::cout << "--- Status Report ---\n";
        std::cout << "Total objects ever created: " << total_created << "\n";
        std::cout << "Objects currently alive   : " << currently_alive << "\n";
        std::cout << "---------------------\n\n";
    }
};

int Counter::total_created = 0;
int Counter::currently_alive = 0;

int main() {
    Counter::report();

    Counter* c1 = new Counter(1);
    Counter* c2 = new Counter(2);
    Counter::report();

    std::cout << "Deletes Object 1...\n";
    delete c1;
    Counter::report();

    Counter* c3 = new Counter(3);
    Counter::report();

    delete c2;
    delete c3;
    Counter::report();

    return 0;
}