class Solution {
public:
    int search(vector<int>& nums, int target) {
        bool found=false;
        int st=0, end=nums.size()-1;
        int pos;

        while(st<=end && !found){
            if(nums[st]==target){
                pos=st;
                found=true;
            }
            else if(nums[end]==target){
                pos=end;
                found=true;
            }
            else{
                st++;
                end--;
            }
        }

        if(found) return pos;
        else return -1;
    }
};
