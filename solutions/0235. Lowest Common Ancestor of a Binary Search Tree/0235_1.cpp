// Time complexity: O(h)
// Space complexity: O(1)
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        assert(p != nullptr);
        assert(q != nullptr);
        while(true) {
            assert(root != nullptr);
            if (p->val < root->val && q->val < root->val)
                root = root->left;
            else if (p->val > root->val && q->val > root->val)
                root = root->right;
            else    
                return root;
        }
    }  
};