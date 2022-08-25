//Create a character array of size 10 and initialize array with following 10 characters. In the end printall characters on screen.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
