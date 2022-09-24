//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> v;
    int high =n-1;
    int low=0;
    while(high>=low){
        int mid=low+(high-low)/2;
        if((mid==0 || x>arr[mid-1]) && arr[mid]==x){
          v.push_back(mid);
          break;
        }
        
        else if(x>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    
    if(high<low){
        v.push_back(-1);
    }
    
    int h =n-1;
    int l=0;
     while(h>=l){
        int mid=l+(h-l)/2;
        if((mid==n-1 || x<arr[mid+1]) && arr[mid]==x){
          v.push_back(mid);
          break;
        }
        
        else if(x<arr[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    
     if(h<l){
        v.push_back(-1);
    }
    
    return v;
    
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
