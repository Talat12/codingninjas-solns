#include<iostream>
using namespace std;

int main() {
	int n,x;
    cin >> n;
    for(int i=1;i<=(n/2);i++){
        x=n-(i*i);
        if(x==0){
            cout << i;
            break;
        }
        else if(x<0){
            cout << i-1;
            break;
        }
    }
}
