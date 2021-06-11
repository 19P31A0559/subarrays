#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int sum,psum;
    cin>>sum;
    for (int i=0;i<n;i++)
    {
        psum=a[i];
        for (int j=i+1;j<=n;j++)
        {
            if (psum==sum)
            {
                cout<<"true";
                return 1;
            }
            else if(psum>sum)
            {
                break;
            }
            psum+=a[j];
        }
    }
    cout<<"false";
}
