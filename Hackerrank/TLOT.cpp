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

    void levelOrder(Node * root) {
        queue<Node *> my_queue;
        my_queue.push(root);
        while(!my_queue.empty()){
            auto temp = my_queue.front();
            cout << temp->data << " ";
            if(temp->left){
                my_queue.push(temp->left);
            }
            if(temp->right){
                my_queue.push(temp->right);
            }
            my_queue.pop();
        }

    }

}; //End of Solution