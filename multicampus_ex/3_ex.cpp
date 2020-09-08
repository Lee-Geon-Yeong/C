#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "When in Rome, do as the Romans.";
//read
    for (auto &ch : s){       //char &ch=s[i]
        cout << ch << ' ';
    }
    for (auto ch : s){       //char ch=s[i]
        cout << ch << ' ';
    }
//write
    for (auto &ch : s){     //char &ch=s[i]->reccomend because not copy string
        ch='T';
        cout << ch << ' ';
    }
    for (auto ch : s){      //char ch=s[i]->no reccomend in write
        ch='w';
        cout << ch << ' ';
    }
    return 0;
}