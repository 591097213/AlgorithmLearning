#include<iostream>
using namespace std;

int main()
{
        int a,b;
        while(cin>>a>>b)
        {
                int r=a%b;
                while(r)
                {
                        a=b;
                        b=r;
                        r=a%b;
                }
                cout<<b<<endl;
        }
}
