//insertion sort

#include<iostream>
using namespace std;

int main() {
   int size;
   cin >> size;
   int array[size];

   for(int i = 0; i<size; i++) {
      cin >> array[i];
   }
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;
   }
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
