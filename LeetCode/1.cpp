class Solution {
public:
    /*
        Đề: Tìm cặp số a và b sao cho a + b bằng với target

        Idea: 
        B1:Sử dụng hash map với các cặp pair(key, value), với key là giá trị phần tử, value là vị trí trong mảng
        B2: Với mỗi phần tử a thuộc mảng, tìm phần tử còn lại b với giá trị = target - a trong map
        B3: nếu có phần tử b thỏa mãn -> trả về kết quả

        Đpt: O(n)
        
    */
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> my_map;
        vector<int> ans;
        for(int i = 0;i < nums.size();i++){
            if(my_map.find(nums[i]) != my_map.end()){
                continue;
            }
            else{
                my_map.insert(pair<int, int>(nums[i], i));
            }
        }
        for(int i = 0;i < nums.size();i++){
            int check = target - nums[i];
            if(my_map.find(check) != my_map.end() && my_map[check] != i){
                ans.push_back(i);
                ans.push_back(my_map[check]);
                break;
            }
        }
        return ans;
    }
};