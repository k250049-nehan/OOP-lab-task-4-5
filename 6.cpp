#include <iostream>
#include <string>
using namespace std;

class Player {
public:
    string name;
    static int totalPlayers;

    Player(string n) {
        name = n;
        totalPlayers++;
        cout << name << " joined the game.\n";
    }

    ~Player() {
        cout << name << " left the game.\n";
        totalPlayers--;
    }

    static void showPlayers() {
        cout << "Total players online: " << totalPlayers << endl;
    }
};

int Player::totalPlayers = 0;

int main() {
    Player::showPlayers();

    {
        Player p1("Nehan");
        Player p2("Malik");

        Player::showPlayers();
    }

    Player::showPlayers();

    return 0;
}
