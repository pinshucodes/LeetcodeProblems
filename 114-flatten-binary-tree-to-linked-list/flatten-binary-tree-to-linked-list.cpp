class Solution {
public:
    void flatten(TreeNode* root) {
        
        while(root){
            if(root->left){
                // Step 1: Finding Predecessor of Root Node
                TreeNode* pred = root->left;
                while(pred->right) pred = pred->right;

                // Step 2: Left Part ka end -> Right Part ka Head
                pred->right = root->right;

                // Step 3: Root ka right part = Root ka left part
                root->right = root->left;

                // Step 4: Root ka left is of no use now
                root->left = NULL;
            }

            // Step 5: Move on to next node
            root = root->right;
        }
    }
};