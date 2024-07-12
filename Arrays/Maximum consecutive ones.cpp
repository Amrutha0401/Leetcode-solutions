class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j=0;
        int maxone=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count=0;
            }
            maxone=max(count,maxone);
            
        }
        return maxone;
    }
};
