void MyQueue:: push(int x)
{
        // Your Code
        struct QueueNode* temp=new QueueNode(x);
        if(front==NULL)
        {
            front=temp;
            rear=temp;
            
        }
        else{
        rear->next=temp;
        rear=rear->next;
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code   
        if(front==NULL) return -1;
        else{
            int a=front->data;
            front=front->next;
            return a;
        }
}
