#include <iostream>

using namespace std;



struct Point {
    double x;
    double y;
};

int main() {
    /*
    Point m {2.5, 3};
    cout << "Size of Point " << sizeof(Point) << endl;
    cout << "Point X = " << m.x;
    cout << "Point Y = " << m.y;
    */

    Point triangle[4];
    for(int i = 0; i < 4; i++) {
        cin >> traingle[i].x;
        cin >> traingle[i].y;
    }
    cout << "Traingle ABC location by coorinates: " << endl;
    cout << "A(" << traingle[0].x << ";" << traingle[0].y << ")" << endl;
    cout << "B(" << traingle[1].x << ";" << traingle[1].y << ")" << endl;
    cout << "C(" << traingle[2].x << ";" << traingle[2].y << ")" << endl;
}