//given an unsorted array A of size N of non negative integers find a continous subarray which adds to a given number s.

//Brute force method

#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    int n,s,sum;
    cin>>n>>s;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=i; j<n; j++)
        {
            sum=sum+a[j];
            if(sum>s)
            {
                break;
            }
            else if(sum==s)
            {
                cout<<i<<" "<<j;
                return 0;
            }


        }
    }
    return 0;
}*/

//Optimized solution

int main(){
    int n,s,sum=0;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
    }

    int st=0,ed=0;

   while(st!=n && ed!=n){
     sum=sum+a[ed];

     if(sum==s){
        cout<<st<<" "<<ed<<endl;
        return 0;
     }
    ed++;
     if(sum>s){
        st++;
        ed=st;
        sum=0;
     }

   }
   if(st== n && sum!=s){
    cout<<"-1"<<endl;
   }
}
