#include<iostream>

using  namespace std;

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
        long time_in_sec(time time){
    return time.hour * 3600 + time.minute * 60 + time.second;
}

time sec_to_time(long sec){
    time t;
    t.hour = sec / 3600;
    sec = sec % 3600;
    t.minute = sec / 60;
    t.second = sec % 60;
    return t;
}
    inline time operator+(time a){
        int sec= time_in_sec(a)+time_in_sec(*this);
        return sec_to_time(sec);
    }



    
};

int main(){
    time t1, t2;
    t1.setTime(1, 2, 3);
    t2.setTime(4, 5, 6);
    t1.printTime();
    t2.printTime();
    time t3 = t1 + t2;
    t3.printTime();
    return 0;
}


