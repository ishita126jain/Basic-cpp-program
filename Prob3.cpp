//Create an array of size 30 and ask user to enter string. Your program should find the length of array

#include<bits/stdc++.h>
using namespace std;

int main(){


    char a[20];

    cin.getline(a,20);
    int length=0;

    int i=0;
    while(1){
        if(a[i]=='\0'){
            break;
        }
        length++;
        i++;
    }

    cout<<length;

    }
