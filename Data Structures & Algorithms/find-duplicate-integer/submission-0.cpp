class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0,fast=0;
        int n=nums.size();

        while(fast<=n-1){
            slow=nums[slow];
            fast=nums[nums[fast]];

            if(slow==fast) break;
        }

        int slow2=0;
        while(slow2<=n-1){
            slow=nums[slow];
            slow2=nums[slow2];

            if(slow2==slow) break;
        }

        return slow2;

    }
};
