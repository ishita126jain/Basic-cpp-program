/{ Driver Code Starts
// driver code

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}


// } Driver Code Ends
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
     Node* sptr = head;
    Node* fptr = head;

    while(sptr!=NULL && fptr!=NULL && fptr->next!=NULL){
        sptr = sptr->next; 
        fptr = fptr->next->next; 
        if(sptr == fptr){
            
            break;
        }
    }

    if(sptr==NULL || fptr==NULL || fptr->next==NULL){
       
      return;
    }
    else{
       
        

        Node* tempNode = sptr; 
        int ctr = 0; 

        while(true){
            tempNode = tempNode->next;
            ctr++;

            if(tempNode == sptr){
                break;
            }
        }

       
        Node* p1 = head;

    

        Node* p2 = head;

        while(ctr--){
            p2 = p2->next;
        }

       

        while(p1!=p2){
            p1 = p1->next;
            p2 = p2->next;
        }

     
        while(sptr->next != p1){
            sptr = sptr->next;
        }

        sptr->next = NULL;
    }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n )
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}

// } Driver Code Ends
