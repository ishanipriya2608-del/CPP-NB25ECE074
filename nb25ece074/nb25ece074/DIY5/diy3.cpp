#include <iostream>

class Order {
private:
    static int next_id;  
    
    int order_id;      

public:
    Order() {
        order_id = next_id++;
    }

    void displayOrder() const {
        std::cout << "Order placed successfully! Generated ID: " << order_id << "\n";
    }
};

int Order::next_id = 1001;

int main() {
    std::cout << "Creating new orders...\n";
    
    Order o1;
    o1.displayOrder();

    Order o2;
    o2.displayOrder();

    Order o3;
    o3.displayOrder();

    return 0;
}