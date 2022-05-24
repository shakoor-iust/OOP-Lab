#include<iostream>

using namespace std;

int print_fibonacci(int n){
    int a = 0;
    int b = 1;
    int c;
    cout << a << " " << b << " ";
    for(int i = 0; i < n - 2; i++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}

int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    print_fibonacci(n);
    return 0;
}
