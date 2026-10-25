
class Solution {
public:
    int diff = INT_MAX;
    TreeNode* prev = NULL;

    void dfs(TreeNode* root) {
        if (root == NULL) return;

        if (root->left) dfs(root->left);

        if (prev != NULL) {
            diff = min(diff, abs(prev->val - root->val));
        }

        prev = root;

        if (root->right) dfs(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        dfs(root);
        return diff;
    }
};
