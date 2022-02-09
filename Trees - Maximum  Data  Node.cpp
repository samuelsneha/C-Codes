#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {

   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};
TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}
TreeNode<int>* maxDataNode(TreeNode<int>* root)
{
    if( root == NULL )// Edge Case noy Base case. Its not a Base case but it acts like a Base Case.
        return root;//So even though its not BC, still this condition will be checked in every recursive call.


    TreeNode < int > *  max = root ;//1,2,3,4,5,6,7

    for( int i=0; i < root -> children.size(); i++ )
    {
        TreeNode<int>* maxChild=maxDataNode( root -> children[i] );
        if( maxChild -> data > max -> data )
     //1,2,3, 4,5,6,7
            max =  maxChild ;
    }
     return max;


}
int main() {

    TreeNode<int>* root = takeInputLevelWise();
    TreeNode<int>* ans = maxDataNode(root);

    if (root != NULL)
    {
        cout << ans->data;
    }
}
