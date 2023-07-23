class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        struct Node* p=head;
        int arr[1000000],i=0;
        while(p!=NULL)
        {
            arr[i]=p->data;
            p=p->next;
            i++;
        }
        sort(arr,arr+i);
        p=head;
        i=0;
        while(p!=NULL)
        {
            p->data=arr[i];
            i++;
            p=p->next;
        }
        return head;
        
    }
};

