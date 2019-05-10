#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    cin >> a;
    cin >> b;
    if (b - a > 0)
    {
        a = b;
        int f = 1;
        for (int i = 3; i <= n; i++)
        {
            cin >> b;
            if (b - a < 0)
            {
                f=2;
            }
            if(b-a >0 && f==2)
            {
                cout << "false";
                f=3;
                break;
            }
            a = b;
        }
        if (f==1 || f==2)
        {
            cout << "true";
        }
    }
    else if (b - a < 0)
    {
        a = b;
        int f = 1;
        for (int i = 3; i <= n; i++)
        {
            cin >> b;
            if (b - a > 0)
            {
                f=2;
            }
            if(b-a <0 && f==2)
            {
                cout << "false";
                f=3;
                break;
            }
            a = b;
        }
        if (f==1 || f==2)
        {
            cout << "true";
        }
    }
    
}
