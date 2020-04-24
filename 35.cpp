class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int meio = 0;
        while(left <= right){
            meio = (left + right) / 2;
            if(nums[meio] == target){
                return meio;
            }else if(nums[meio] > target){
                right = meio - 1;
            }else{
                left = meio + 1;
            }
        }
        
        if(nums[meio] < target){
            return meio + 1;
        }else{
            if(meio == 0){
                return 0;
            }else{
                return meio;
            }
        }
        
        return meio + 1;
    }
};