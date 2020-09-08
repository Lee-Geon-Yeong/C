#include <iostream>
using namespace std;
int main()
{
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for (int i : list)
    {
        sum += i;
    }
    cout << sum << endl<< endl;
    for (int &i : list)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto &i : list)
    {
        cout << i << " ";
    }
    return 0;
}

//ctrl+alt n : code runner run
// .\ex01_helloworld.exe : activate file
// alt+shift f : code alignment
// code runner terminal : check-> output->terminal
// UTF-8 -> EUC-KR : korean language