class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int left=0, right=n-1;
        int mini=INT_MAX;
        while(right>=left){
            mini=min({mini, nums[left], nums[right]});
            left++;
            right--;
        }

        return mini;
    }
};
