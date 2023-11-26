#include <iostream>
using namespace std;
struct Point {
    double x;
    double y;
};
double kalkulatorJarak(Point p1, Point p2) {
    double deltaX = p2.x - p1.x;
    double deltaY = p2.y - p1.y;
  
    return deltaX * deltaX + deltaY * deltaY;
}
int main() {
    Point point1, point2;
    cout << "Masukkan koordinat titik pertama (x y): ";
    cin >> point1.x >> point1.y;
    cout << "Masukkan koordinat titik kedua (x y): ";
    cin >> point2.x >> point2.y;
  
    double jarak = kalkulatorJarak(point1, point2);
    cout << "Jarak antara dua titik: " << jarak <<endl;

    return 0;
}