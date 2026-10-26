/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) //so here we aint getting anything god damn it ! so 
        return nullptr; //null bro 

        if(root->val ==val){
            return root; //search the left portion !
        }
        else if(root->val >val){
           return  searchBST(root->left,val); //call theem  in the part 
        }
        else{
            return searchBST(root->right,val); //search them
        }
        
    }
};