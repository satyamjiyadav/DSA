class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, j=0;
        int n=nums.size();
        while(i<n && j<n){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                j++;
                i++;
            }
            else{
                j++;
            }
        }
        
    }
};
