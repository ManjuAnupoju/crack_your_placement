class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        
        struct node* p=NULL,*c=head,*next;
        int i=1;
        while(c!=NULL && i<=k)
        {
            next=c->next;
            c->next=p;
            p=c;
            c=next;
            i++;
        }
        if(c!=NULL)
        {
            struct node* q=reverse(c,k);
            head->next=q;
        }
        return p;
    }
};
