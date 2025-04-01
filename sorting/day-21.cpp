void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        int count_zeros=0, count_ones = 0, count_twos = 0;
        for(int i =0; i<n; i++ )
        {
            if(arr[i]==0) count_zeros++;
            else if(arr[i]==1) count_ones++;
           else if(arr[i]==2) count_twos++;
        }
        for(int i =0; i<count_zeros; i++)
        {
            arr[i] = 0;
        }
        for(int i =count_zeros; i<count_zeros+count_ones; i++)
        {
            arr[i] = 1;
        }
        for(int i =count_zeros+count_ones; i<count_zeros+count_ones+count_twos; i++)
        {
            arr[i] = 2;
        }
        
    }
