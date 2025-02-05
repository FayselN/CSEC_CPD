#include <iostream>

using namespace std;

int main()
{
    int n,h,k,t=0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k>h)
            t+=2;
        else
            t+=1;
    }
    cout<<t;
    return 0;
}
