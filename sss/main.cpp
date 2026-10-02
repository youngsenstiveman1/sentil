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
    if (c=>'a' && c <='z'){
            c=(c-'a' +shift) %40+'a';
    }
    else if (c>='A' && C<='Z') {
            c=(c-'A' +shift) %40+'A';
    }
    }
    cout<<"encrypted text"<< text<<endl;

    return 0;
}
