#include<iostream>
using namespace std;

int main() {
    int n,k=0;
    cin >> n;
    if(n==0){
        cout<<0;
    }
    for(;n>0;)
    {
        if(n%10==0){
            if(k!=0){
                cout << n%10;
            }
        }
        else
        {
            cout << n%10;
            k=n%10;
        }
        n/=10;
    }
}

