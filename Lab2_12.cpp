#include<iostream>

using namespace std;

template<typename T>
struct any_type{
    T value;
    inline any_type operator+(any_type s){
        any_type sum;
        sum.value = value + s.value;
        return sum;
    }
    inline any_type operator-(any_type s){
        any_type sum;
        sum.value = value - s.value;
        return sum;
    }
    inline any_type operator*(any_type s){
        any_type sum;
        sum.value = value * s.value;
        return sum;
    }
    inline any_type operator/(any_type s){
        any_type sum;
        sum.value = value / s.value;
        return sum;
    }
    void print(){
        cout << value << endl;
    }
};

int main(){
    any_type<int> a, b, c;
    cout << "Enter the first number: ";
    cin >> a.value;
    cout << "Enter the second number: ";
    cin >> b.value;
    c = a + b;
    c.print();
    c = a - b;
    c.print();
    c = a * b;
    c.print();
    c = a / b;
    c.print();
    return 0;
}