#include<iostream>

using namespace std;

void zeroSmaller(int &a, int &b){
    if(a < b){
        a = 1;
    }
    else{
        b = 1;
    }
}

int main(){
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    zeroSmaller(a, b);
    cout << "The first number is: " << a << endl;
    cout << "The second number is: " << b << endl;
    return 0;
}