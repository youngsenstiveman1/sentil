#include <iostream>

using namespace std;

int main()
{
    cout << "введите текст";
    getline(cin,text)
    cout << "введите сдвиг";
    cin>>shift;
    for(char &c;text){
    if (c=>'a' && c <='z'){
            c=(c-'a' +shift) %40+'a';
    }
    else if (c>='A' && C<='Z') {
            c=(c-'A' +shift) %40+'A';
    }
    }
    cout<<"зашифрованный текст"<< text<<endl;

    return 0;
}
