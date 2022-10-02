//sum of each subarray of the given array.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100];
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {

        for(int j=i; j<n; j++)
        {
            int sum=0;
            for(int k=i; k<=j; k++)
            {
                sum=sum+a[k];
            }

            cout<<sum;
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
