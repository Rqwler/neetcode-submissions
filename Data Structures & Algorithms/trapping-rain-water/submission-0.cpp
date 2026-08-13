class Solution {
public:
    int trap(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        
        int lmax=0;
        int rmax=0;
        int total=0;

        while(start<end){
            lmax=max(lmax,height[start]);
            rmax=max(rmax,height[end]);

            if(lmax<rmax){
                total+=lmax-height[start];
                start++;
            }
            else{
                total+=rmax-height[end];
                end--;
            }
        }
        

        
        return total;
    }
};