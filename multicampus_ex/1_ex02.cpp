#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x, y;
    cout << "x ";
    cin >> x;
    cout << "y ";
    cin >> y;
    if (x > y)
        cout << "x>y." << endl;
    else
        cout << "y>x." << endl;
    return 0;
}

// settings-> user snippets -> cpp
// cpp.json
// "Print to console": {
// 	"prefix": "c++_main",
// 	"body": [
// 		"#include<iostream>"
// 		"using namespace std;",
// 		"",
// 		"int main(int argc, char const *argv[]){",
// 		"	$0"
// 		"	return 0;",
// 		"}"

// 	],
// 	"description": "c++ main function"
// }