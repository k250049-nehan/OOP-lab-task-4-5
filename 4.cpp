#include <iostream>
#include <string>
using namespace std;

class Engine {
public:
    int horsepower;

    Engine(int hp) {
        horsepower = hp;
    }
};

class Car {
public:
    string model;
    Engine engine;

    Car(string m, int hp) : engine(hp) {
        model = m;
    }

    void showDetails() {
        cout << "Car Model: " << model << endl;
        cout << "Engine Horsepower: " << engine.horsepower << " HP" << endl;
    }
};

int main() {
    Car c("Toyota Corolla", 180);
    c.showDetails();
    return 0;
}
