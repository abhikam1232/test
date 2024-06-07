#include <iostream>

using namespace std;

int main() {
    double length, breadth;

    // Input length and breadth of rectangle
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    // Calculate area and perimeter
    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    // Check if area is greater than perimeter
    if (area > perimeter) {
        cout << "Area is greater than perimeter." << endl;
    } else {
        cout << "Area is not greater than perimeter." << endl;
    }

    return 0;
}
