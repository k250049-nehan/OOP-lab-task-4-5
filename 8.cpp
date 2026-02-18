#include <iostream>
#include <string>
using namespace std;

class Weapon {
public:
    string weaponName;
    int damage;

    Weapon(string w = "None", int d = 0) {
        weaponName = w;
        damage = d;
    }
};

class Player {
public:
    string playerName;
    int health;
    Weapon weapon;//Composition
    static int activePlayers;

    Player(string name, int h, string wName, int dmg)
        : weapon(wName, dmg) {
        playerName = name;
        health = h;
        activePlayers++;
    }

    ~Player() {
        activePlayers--;
    }

    void showStatus() const {
        cout << "Player: " << playerName << endl;
        cout << "Health: " << health << endl;
        cout << "Weapon: " << weapon.weaponName
             << " (Damage: " << weapon.damage << ")" << endl;
        cout << endl;
    }

    static void showActivePlayers() {
        cout << "Active Players: " << activePlayers << endl;
    }
};

int Player::activePlayers = 0;

int main() {
    {
        Player players[3] = {
            Player("Alex", 100, "Sword", 25),
            Player("John", 90, "Gun", 40),
            Player("Sara", 110, "Bow", 20)
        };

        Player::showActivePlayers();

        for(int i = 0; i < 3; i++) {
            players[i].showStatus();
        }
    }

    Player::showActivePlayers();

    return 0;
}
