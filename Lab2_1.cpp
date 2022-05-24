#include<iostream>

using namespace std;

float  circle_area(int r){
    float area;
    area = 3.14 * r * r;
    return area;
}

int main(){
    int r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "The area of the circle is: " << circle_area(r) << endl;
    return 0;
}