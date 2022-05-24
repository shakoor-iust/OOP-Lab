#include<iostream>

using  namespace std;

long time_in_sec(string time){
    int hour, min, sec;
    hour = stoi(time.substr(0, 2));
    min = stoi(time.substr(3, 2));
    sec = stoi(time.substr(6, 2));
    return hour * 3600 + min * 60 + sec;
}

int main(){
    string time;
    cout << "Enter the time in hh:mm:ss format: ";
    cin >> time;
    cout << "The time in seconds is: " << time_in_sec(time) << endl;
    return 0;
}