#include <iostream>
using namespace std;

class Car {
private:
    int speed;

public:
    void setSpeed(int s) {
        speed = s;
    }

    void showSpeed() const {
        cout << "Car speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car c;
    c.setSpeed(80);
    c.showSpeed();
    return 0;
}
