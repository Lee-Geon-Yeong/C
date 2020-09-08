#include <string.h> // 
#include <string> //string class header file
#include <iostream>
using namespace std;
class MyString
{
private:
    char *s;
    int size;

public:
    MyString(char *c)
    {
        size = strlen(c) + 1;
        s = new char[size];
        strcpy(s, c);
    }
    ~MyString()
    {
        cout<<"mystring...delete s"<<endl;
        delete[] s;
    }
};

int main()
{
    MyString str("abcdefghijk");
}