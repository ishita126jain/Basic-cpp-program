The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
          // Write your code here
          if(s.empty()){
              return -1;
          }
          else if(s.size()==1){
              return s.top();
          }
          else{
              return minEle;
          }
           
           
           
       }
      
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
          if(s.empty()){
              return -1;
          }
         
          
          int a=s.top();
          s.pop();
          
          if(a<minEle){
              int y=minEle;
              minEle=2*minEle-a;
              return y;
          }
          else{
              return a;
          }
          
          
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
         
          if(s.empty()){
               s.push(x);
               minEle=x;
           }
           
           else if(x<minEle){
             s.push(2*x-minEle); 
             minEle=x;
           }
           else{
               s.push(x);
           }
         
         
          
       }
};
