//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int x=arr.size();
        int i=0;
        int a=k;
        if(k==n){
            reverse(arr.begin()+0,arr.begin()+k);
        }
        if(k>n){
            reverse(arr.begin()+0,arr.begin()+n);
        }
        
        if(k<n){
            while(x>=a){
            
       
        
        
            reverse(arr.begin()+i,arr.begin()+k);
            x=x-a;
             if(x<a){
        reverse(arr.begin()+k,arr.begin()+n);
        break;
        
    }
    
            i=i+a;
            k=k+a;
        }
        }
       
    }
};

//{ Driver Code Starts.
int main() {
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends
