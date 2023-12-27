Input:
             10
          /      \
        -2        6
       /   \     /  \
      8    -4   7    5
Output:
            20
          /     \
        4        12
       /  \     /  \
     0     0   0    0
Explanation:
           (4-2+12+6)
          /           \
      (8-4)          (7+5)
       /   \         /  \
      0     0       0    0


          <-------------------CODE------------------->
  class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        // Your code here
        int leftSum=0;
        int rightSum=0;
        
        if(node->left) leftSum+=node->left->data;
        
        if(node->right) rightSum+=node->right->data;
        
        if(node->left)
        {
            toSumTree(node->left);
            leftSum+=node->left->data;
        }
        
        if(node->right)
        {
            toSumTree(node->right);
            rightSum+=node->right->data;
        }
        
        node->data=leftSum+rightSum;
    }
};
