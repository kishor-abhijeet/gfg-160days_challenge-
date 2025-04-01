//goal : find the max value of V such that V of the papers have >= V No. of citations
int hIndex(vector<int>& citations) {
        // code here
         int n = citations.size();
         int high = n-1, low=0, mid;
         while(low <= high){
             mid = low + (high - low)/2;
             if(citations[mid]==n-mid) return citations[mid];
             else if(citations[mid]>n-mid){
                 high = mid-1;
             }
             else low = mid+1;
         }
         return n-low;
    }
