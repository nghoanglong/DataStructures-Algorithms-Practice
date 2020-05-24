//Với mỗi số từ 0 -> num, ta nhận thấy khi % 2, kết quả sẽ rơi vào 1 trong 2 trường hợp đó là số chẵn(0) và số lẻ(1) -> ta dựa theo đó tạo biến
//ans = 0 rồi qua mỗi loop cộng vào một lượng value % 2

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans;
        for(int mask = 0;mask <= num;mask++){
            int j = mask;
            int sub_ans = 0;
            while(j > 0){
                sub_ans += (j % 2);
                j = j >> 1;
            }
            ans.push_back(sub_ans);
        }
        return ans;
    }
};