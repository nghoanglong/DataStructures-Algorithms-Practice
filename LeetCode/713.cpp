class Solution {
public:
    /*
        Sử dụng kiến thức về Two Pointers, các bạn có thể xem phần kiến thức này ở Repo lý thuyết, mình có viết một số bài tương tự
    */
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int start = 0, end = 0, ans = 0, product = 1;
        while(end < nums.size()){
            product = product * nums[end];
            while(start < end && product >= k){
                product = product / nums[start];
                ++start;
            }
            if(product < k)
                ans = ans + (end - start + 1);
            ++end;
        }
        return ans;
    }
};