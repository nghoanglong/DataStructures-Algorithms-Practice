/*
Node is defined as 

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

    Node * insert(Node * root, int data) {
        if(!root){
            Node *temp = new Node(data);
            root = temp;
            return root;
        }
        else{
            if(root->data < data){
                root->right = insert(root->right, data);
            }
            else if(root->data > data){
                root->left = insert(root->left, data);
            }
        }
        return root;
    }

};