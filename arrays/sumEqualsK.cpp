class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int ans = 0;
        int sum = 0;
        m[0]=1;
        for(int i = 0; i < nums.size(); i++){
            sum+=nums[i];
            if(m[sum-k]>0){
                ans+=m[sum-k];
            }
            m[sum]++;
        }
        return ans;
    }
};
