
int numLeafNodes(TreeNode<int>* root)
{
    int leaf = 0;
    if(root -> children.size() == 0)
    {
        return leaf+1;
    }
    
    for(int i =0; i < root -> children.size(); i++)
    {
        leaf = leaf + numLeafNodes(root -> children[i]);
    }
    
    return leaf;

}


