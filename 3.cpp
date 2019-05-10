#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x,a,j=1;
    cin >> x;
    int cnt=1;
    while(cnt<=x)
    {
        a=3*j+2;
        if(a%4!=0)
        {
            cout << a << ' ';
            cnt++;
        }
        j++;
        }
    }
