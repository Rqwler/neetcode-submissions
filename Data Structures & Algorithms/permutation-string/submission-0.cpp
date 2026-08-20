class Solution {
    bool arevectorequal(vector<int> a, vector<int> b){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        int n1=s1.size();
        vector<int> alpha1(27,0);
        vector<int> alpha2(27,0);
        for(int i=0;i<s1.size();i++){
            alpha1[s1[i]-'a']++;
        }
        int i=0,j=0;

        while(j<s2.size()){
            alpha2[s2[j]-'a']++;

            if(j-i+1==s1.size()){
                if(arevectorequal(alpha1,alpha2)) return true;
            }

            if(j-i+1<s1.size()) j++;
            else{
                alpha2[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};