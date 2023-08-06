class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int  merge(long long arr[],long long low,long long mid,long long high){
        long long count=0;
        long long n1=mid-low+1;
        long long n2=high - mid;
        long long a[n1],b[n2],i=0,j=0,k=low;
        for(int x=0;x<n1;x++) a[x]=arr[low+x];
        for(int y=0;y<n2;y++) b[y]=arr[mid+1+y];
        while(i<n1 && j<n2){
            if(a[i]<=b[j])
            {
               arr[k]=a[i];
               k++;
               i++;
            }
            else{
                count+=n1-i;
                arr[k]=b[j];
                k++;
                j++;
            }
        }
        while(i<n1){
            arr[k]=a[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            arr[k]=b[j];
            j++;k++;
        }
        return count;
    }
    long long int  mergesort(long long arr[],long long low ,long long high){
        long long int count=0;
        if(low>=high) return count;
        long long mid=(low+high)/2;
        count+=mergesort(arr,low,mid);
        count+=mergesort(arr,mid+1,high);
        count+=merge(arr,low ,mid,high);
        return count;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long count=mergesort(arr,0,N-1);
        return count;
    }

};
