class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0;
        int cunt=0;
        for(int n:nums){
            if(n==0){
                cunt=0;
            }
            else{
                cunt++;
            }
            if(res<cunt){
                res=cunt;
            }
        }
        return res;
    }
};