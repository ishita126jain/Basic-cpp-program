//Create a character array of size 30. Ask user to enter a string, and your program should count total number of characters, capital alphabets, small alphabets, integer character
//and special characters

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    char a[n+1];
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
    int count=0;
    int capitalCount=0,smallCount=0,intCount=0,specialCount=0;
    for(int i=0;i<=n;i++){
        if(a[i]>=65 && a[i]<=90){
            capitalCount++;
        }
        if(a[i]>=97 && a[i]<=122){
            smallCount++;
        }
        if(a[i]>=48 && a[i]<=57){
            intCount++;
        }
        if((a[i]>=32 && a[i]<=47) && (a[i]>=58 && a[i]<=64) && (a[i]>=91 && a[i]<=96) &&(a[i]>=123 && a[i]<=126)){
            specialCount++;
        }
    }
    count=capitalCount+smallCount+intCount+specialCount;
    cout<<"Total number of character "<<count<<endl;
    cout<<"Capital alphabet "<<capitalCount<<endl;
    cout<<"Small alphabet "<<smallCount<<endl;
    cout<<"Integer "<<intCount<<endl;
    cout<<"Special character "<<specialCount<<endl;
}
