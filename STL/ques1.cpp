//given n strings print unique string in lexiographical order with their frequency.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    map<string,int> m;
    for(int i=0;i<n;i++){
        cin>>s;
        m[s]++;
    }
    map<string,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" " <<it->second;
        cout<<endl;
    }
}
