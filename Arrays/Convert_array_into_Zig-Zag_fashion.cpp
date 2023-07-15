class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        // code here
        int i=1,j=1;
        while(j<n)
        {
            if(arr[j-1]>arr[j])
            swap(arr[j-1],arr[j]);
            if(arr[j]<arr[j+1])
            swap(arr[j+1],arr[j]);
            j=(2*i)+1;
            i++;
        }
    }
};
