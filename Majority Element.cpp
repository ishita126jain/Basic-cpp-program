//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        // unordered_map<int,int> m;
        // for(int i=0;i<size;i++){
        //     m[a[i]]++;
        // }
        // int maxi=0;
        // //int a=0;
        
        // for(auto value:m){
        //     maxi=max(maxi,value.second);
            
        // }
        // if(maxi==1){
        //     return -1;
        // }
        // if(maxi>size/2){
        //     for(auto value:m){
        //     if(value.second==maxi){
        //         return value.first;
        //     }
        // }
        // }
        // else{
        //     return -1;
        // }
        
        unordered_map<int,int> m;
        int ans; 
        int max_ans=INT_MIN;
        for(int i=0;i<size;i++){
            m[a[i]]++;
        }
        for(auto value:m){
           
            max_ans=max(max_ans,value.second);
             
        }
        int x=0;
        for(auto value:m){
            if(value.second==max_ans){
                ans=value.first;
                x=value.second;
                break;
            }
        }
       
    if(x>size/2){
        return ans;
    }     
    else{
        return -1;
    }
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
