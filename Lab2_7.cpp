#include<iostream>

using namespace std;

double power(double base, double exp){
    double result = 1;
    for(double i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}
long power(long base, long exp){
    long result = 1;
    for(long i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}

int power(string base, string exp){
    int a = stoi(base);
    int b = stoi(exp);
   
    int result = 1;
    for(int i = 0; i < b; i++){
        result *= a;
    }
    return result;
}
int power(float base, float exp){
    int result = 1;
    for(int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}

int main(){

    cout << power(double(10), double(2)) << endl;
    cout << power(long(10), long(2)) << endl;
    cout << power(10.0, 2.0) << endl;
    cout << power("10", "2") << endl;
    return 0;
}