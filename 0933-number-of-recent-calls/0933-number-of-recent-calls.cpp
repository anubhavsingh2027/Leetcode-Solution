class RecentCounter {
    vector<int>arr;
    int indx=-1;
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        if(indx==-1){
            indx=0;
            arr.push_back(t);
            return 1;
        }
        int start=t-3000;
        arr.push_back(t);
        while(start>arr[indx]){
            indx++;

        }
      return arr.size()-indx;  
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */