int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1) return 1;
        else{
        int i=0,j=n-1;
        long long sl=0,sr=0;
        while( i!=j)
        {
            if(sr>=sl){
            sl=sl+a[i];
            i++;
            }
            else{
            sr=sr+a[j];
            j--;}
        }
        if(sl!=sr) return -1;
        else return i+1;
        }
    }
