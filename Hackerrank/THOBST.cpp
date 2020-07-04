/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        if(root == NULL){
            return -1;
        }
        int h_left = height(root->left);
        int h_right = height(root->right);
        return 1 + ((h_left > h_right) ? h_left : h_right);
    }

}; //End of Solution