class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if (!root) 
            return res;
        
        queue<TreeNode*> que;
        que.push(root);  
        while (!que.empty()) {
            int size = que.size(); 
            int a;
            while (size-- > 0) {
                TreeNode* node = que.front();
                que.pop();
                a = node->val;
                if (node->left) {
                    que.push(node->left); 
                }
                if (node->right) {
                    que.push(node->right); 
                }
            }
            res.push_back(a);
        }
        return res;
    }
};
