#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==0||n==1)
        cout << "no";
    else
    {
        int count=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                count ++;
        }
        if(count)
            cout << "no";
        else
            cout << "yes";
    }
}
