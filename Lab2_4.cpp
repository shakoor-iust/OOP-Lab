#include<iostream>

using namespace std;

void larger(int &a, int &b){
    if(a > b){
        cout << "The larger number is: " << a << endl;
    }
    else{
         cout << "The larger number is: " << b << endl;
    }
}

int main(){
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    larger(a, b);
    return 0;
}