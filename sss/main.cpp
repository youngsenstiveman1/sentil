#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    int shift;

    cout << "Enter text";
    getline(cin,text)
    cout << "Enter shift";
    cin>>shift;
    for(char &c;text){
    if (c>='a' && c =<'z'){
            c=(c-'a' +shift) %26+'a';
    }
    else if (c>='s' && c=<'Z') {
            c=(c-'A' +shift) %26+'A';
    }
    }
    cout<<"encrypted text"<< text<<endl;

    return 0;
}
