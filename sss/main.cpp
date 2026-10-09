#include <iostream>
#include <string>
using namespace std;

int main(){
        int n;
        cin >> n;

        string s = "";
        if (n == 0) {
                cout <<"0";
                return 0;
        }

        while (n > 0) {
                if (n % 2 == 0){
                        s = "0" + s;
                } else{
                        s = "1" + s;
                }
                n = n / 2;
        }
        cout << s << endl;

    return 0;
}
