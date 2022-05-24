#include<iostream>

using namespace std;

struct time{
    int hour;
    int minute;
    int second;

    void setTime(int h, int m, int s){
        hour = h;
        minute = m;
        second = s;
    };
    void printTime(){
        cout << hour << ":" << minute << ":" << second << endl;
    };
};

void swap (time &a, time &b){
    time temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    time t1, t2;
    t1.setTime(1, 2, 3);
    t2.setTime(4, 5, 6);
    t1.printTime();
    t2.printTime();
    swap(t1, t2);
    cout<<"After swap"<<endl;
    t1.printTime();
    t2.printTime();
    return 0;
}