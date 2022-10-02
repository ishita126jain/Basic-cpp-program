//Matrix search condition given matrix is sorted

#include<bits/stdc++.h>
using namespace std;


//bruteforce method
/*
int main(){
    int r,c;
    cin>>r>>c;

    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    int k;
    cin>>k;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==k){
                cout<<"element present"<<endl;
                return 0;
            }
        }

    }
    cout<<"element not present"<<endl;

}
*/

//Optimised solution
int main(){
    int r,c;
    cin>>r>>c;

    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    int k;
    cin>>k;

    int i=0,j=c-1;
    while(i!=r-1 &&j!=0){
        if(a[i][j]>k){
            j--;
        }
        else if(a[i][j]<k){
            i++;
        }
        else if(a[i][j]==k){
            cout<<"element present"<<endl;
            return 0;
        }

    }
cout<<"element not present"<<endl;
return 0;
}
