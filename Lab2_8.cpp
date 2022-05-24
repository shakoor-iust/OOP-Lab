#include<iostream>

using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main ()
{
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    swap(a, b);
    cout << "The swapped first number is: " << a << endl;
    cout << "The swapped second number is: " << b << endl;
    return 0;
}