#include <iostream>
using namespace std;

class TV {
public:
    TV(int h, int w) : height(h), width(w) {}; //member initalizer list part is to initalize height 
    void area() {                               //and width respectally with h and w.
        cout << height * width;
    }

private:
    int height;
    int width;
};

int main() {
    int h, w;

    cout << "Enter the height of the TV: ";
    cin >> h;

    cout << "Enter the width of the TV: ";
    cin >> w;

    // Create a TV object with the name myTV by calling the constructor
    TV myTV(h, w);

    cout << "Area of the TV: ";
    myTV.area();

    return 0;
}
