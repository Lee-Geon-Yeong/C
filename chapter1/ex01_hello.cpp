#include <iostream>
#include <string>
    using namespace std;
int main(int argc, char const*argv[])
{
    string s1 = "Good";
    string s2 = "Morning";
    string s3 = s1 + " " + s2 + "!";
    cout << s3 << endl;
    string s4 = "Good";
    string s5 = "Bad";
    bool b = (s4 == s5);
    cout << b << endl;
    return 0;
}

//ctrl+alt n : 코드러너 실행
// .\ex01_helloworld.exe 실행파일 실행
// alt+shift f : 코드 정렬
// code runner terminal 체크하면 출력창 말고 터미널창 뜸