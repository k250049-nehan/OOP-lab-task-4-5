#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    double price;
};

int main() {
    Book books[5];

    for(int i = 0; i < 5; i++) {
        cout << "Enter title of book " << i + 1 << ": ";
        getline(cin, books[i].title);

        cout << "Enter price of book " << i + 1 << ": ";
        cin >> books[i].price;
        cin.ignore(); 
    }

    cout << "\nBook Details:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Book " << i + 1 << ":\n";
        cout << "Title: " << books[i].title << endl;
        cout << "Price: " << books[i].price << endl;
        cout << endl;
    }

    return 0;
}
