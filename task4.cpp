#include <iostream>
#include <string>
using namespace std;
int main(){
    string* str = new string;
    string* revStr = new string;
    cout << "Enter string you want to save: ";
    getline(cin, *str);
    for (int i = (*str).length() - 1; i >= 0; i--) {
        *revStr += (*str)[i];
    }
    cout << *revStr << endl;
    delete str;
    delete revStr;
    return 0;
}