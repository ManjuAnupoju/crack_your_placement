class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        struct Node* p=head,*q=NULL;
        map<int,int> m;
        
        while(p!=NULL)
        {
            if(m.count(p->data))
            {
                q->next=p->next;
                p->next=NULL;
                p=q->next;
            }
            else{
                m[p->data]=1;
                q=p;
                p=p->next;
            }
        }
        return head;
    }
};



