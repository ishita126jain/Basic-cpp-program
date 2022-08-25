//print largest word in a sentence.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

   int i=0;
   int curLength=0,maxLength=0;
   while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(curLength>maxLength){
                maxLength=curLength;
            }

            curLength=0;

        }
        else{
            curLength++;
        }

        if(arr[i]=='/0'){
            break;
        }
        i++;
   }
   cout<<maxLength;
    return 0;
}
