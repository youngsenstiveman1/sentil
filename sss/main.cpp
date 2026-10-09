#include <iostream>


using namespace std;

int main() {
    int n;
    cin>>n;
    int result =0,p=1;
    while (n>0) {
        result += (n%10)*p
        p*=8;
        n/=10;
    }
    cout <<result;

    return 0;
}
