#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int st=0,ed=0;
        int sum=0;
        vector<int> v;
       while(st!=n && ed!=n){
          sum=sum+arr[ed];

        if(sum==s){
            v.push_back(st+1);
            v.push_back(ed+1);
            return v;
     }
        ed++;
        if(sum>s){
        st++;
        ed=st;
        sum=0;
     }

   }
    v.push_back(-1);
    return v;
   
        }
        
    };


int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
