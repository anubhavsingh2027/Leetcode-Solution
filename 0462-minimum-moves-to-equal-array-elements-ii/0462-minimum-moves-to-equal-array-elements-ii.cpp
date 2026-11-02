class Solution {
public:
    int minMoves2(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int n=nums.size();
     int mid=floor(n/2);;
     int end=mid+1;
     int start=mid-1;
     int mnop=0;
     while(start>=0){
        mnop+=(nums[mid]-nums[start]);
        start--;
     }
     while(end<n){
        mnop+=(nums[end]-nums[mid]);
            end++;
        }
      
     return mnop; 
    }
};
