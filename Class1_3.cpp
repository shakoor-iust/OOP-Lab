#include<iostream>

using namespace std;

int reverse(int num){
    int rev = 0;
    while(num > 0){
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main (){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The reverse of the number is: " << reverse(num) << endl;
    return 0;
}