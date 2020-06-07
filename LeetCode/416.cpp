class Solution {
public:
    //Idea: Xem lại bài toán chia kẹo ở phần lí thuyết
    bool canPartition(vector<int>& nums) {
        int S = 0;
        for(int i = 0;i < nums.size();i++){
            S = S + nums[i];
        }
        if(S % 2){
            return false;
        }
        int temp = S / 2;
        vector<int> DP(temp + 1);
        DP[0] = 1; DP[temp] = 0;
        for(int i = 0;i < nums.size();++i){
            for(int k = temp;k >= nums[i];--k){
                if(DP[k] == 0 && DP[k - nums[i]]){
                    DP[k] = 1;
                }
            }
        }
        if(DP[temp]){
            return true;
        }
        return false;
    }
};