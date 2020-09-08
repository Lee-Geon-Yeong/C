#include <iostream>
using namespace std;

class Second{
    public:
        int sec;

    Second(){
        sec=0;
    }    
    Second(int s){
        sec=s;

    }
};
// Second second; // defalt constructor
// Second second(20);

class Time{
public:
    int hour;
    int minute;
    Second sec;
    // 생성자
    Time() {
        hour=0;
        minute=0;
        sec.second=20; // after making sec instance, then can do this work
    }
    Time(int h, int m):hour(h), minute(m), sec(20){

    }    
    void print()  // Time t-> call by value , Time&t->reference, Time *time->adress{
        cout << hour << ":" << minute << endl;
    }
 
    void printTime(Time t)  // Time t-> call by value , Time&t->reference, Time *time->adress{
        cout << t.hour << ":" << t.minute << endl;
    }
};

int main()
{

    Time b(10, 25);

    b.printTime(b);
    
    return 0;
}