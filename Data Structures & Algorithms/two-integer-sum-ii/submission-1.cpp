class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int st=0, end=numbers.size()-1;
    
    
    while(end>st){
        if(numbers[st]+numbers[end]>target){
            end--;
        }
        else if(numbers[st]+numbers[end]==target){
            break;
        }
        else{
            st++;
        }
    }

    return {st+1, end+1};

    }
};
