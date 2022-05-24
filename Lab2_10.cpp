#include<iostream>

using namespace std;

void call_me(){
    static int count = 0;
    count++;
    cout << "The value of count is: " << count << endl;
}
void call_me_again(int &count){
    count++;
    cout << "The value of count is: " << count << endl;
}
int main(){
    cout <<"Using Static Variable: " << endl;
    call_me();
    call_me();
    call_me();
    cout<<"Using global variable"<<endl;
    int count = 0;
    call_me_again(count);
    call_me_again(count);
    call_me_again(count);
    return 0;
}