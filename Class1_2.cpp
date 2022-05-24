#include<iostream>

using namespace std;

void print_primes(int n){
    int i, j;
    int count = 0;
    for(i = 2; true; i++){
        for(j = 2; j < i; j++){
            if(i % j == 0){
                break;
            }
        }
        if(j == i){
            if (count == n){
                return;
            }
            else{
                count++;
            }
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    print_primes(n);
    return 0;
}