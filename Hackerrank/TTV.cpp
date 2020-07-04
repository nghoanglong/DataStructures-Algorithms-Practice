/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/
    /*
        Idea: node root ta sẽ có level = 0, đi qua node->left thì level - 1, đi qua node->right level + 1
                        1(0)
                            2(1)
                                5(2)
                            3(1)       6(3)
                                4(2)
        ->ans = 1 2 5 6
        ta tạo ra một map lưu các level, nếu đến node nào mà level đã có trong map -> ko in ra, ví dụ node 3 và node 4, level đã có trong map
        ->2 node này đã bị che phủ nên nhìn từ top xuống ko thể thấy đc
        
    */
    void topView(Node * root) {
        if(root == NULL) return;
        queue<pair<Node *,int>> my_queue;
        map<int, int> ans;
        my_queue.push(make_pair(root, 0));
        while(!my_queue.empty()){
            auto node = my_queue.front();
            if(ans.count(node.second) == 0){
                ans.insert(make_pair(node.second,node.first->data));
            }
            //cout << node->data << " ";
            if(node.first->left){
                my_queue.push(make_pair(node.first->left, node.second - 1));
            }
            if(node.first->right){
                my_queue.push(make_pair(node.first->right, node.second + 1));
            }
            my_queue.pop();
        }
        for(auto temp = ans.begin();temp != ans.end();++temp){
            cout << temp->second << " ";
        }
    }
