#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,x,y,n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a>=b && (a+b)%2==0)
        {
            x=(a+b)/2;
            y=(a-b)/2;
            cout<<x<<" "<<y<<endl;
        }
        else
            cout<<"impossible"<<endl;
    }

    return 0;
}
