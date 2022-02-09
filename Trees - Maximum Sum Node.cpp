#include<bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode
{
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
//You will need a Queue beause you have to traverse throughout the Tree
TreeNode<int>* maxSumNode(TreeNode<int>* root)
{
    int sum = 0;
    int fsum = 0;
    TreeNode <int> * fnode;
    queue <TreeNode <int>* > pendingNodes;
    pendingNodes.push( root );
    while( pendingNodes.size() != 0 )
    {
        TreeNode <int> * topone = pendingNodes.front();
        // fnode = topone;
        sum = 0;
        pendingNodes.pop();
        for( int i = 0; i < topone -> children.size(); i++ )
        {
            sum = sum + ( topone -> children[i] -> data );
            pendingNodes.push( topone -> children[i] );
        }
        sum = sum + (topone -> data);
        if( sum > fsum )
        {
            fsum = sum;
            fnode = topone;
        }
    }
    return( fnode );
}
int main()
{
    TreeNode<int>* root = takeInputLevelWise();

    TreeNode<int>* ans = maxSumNode(root);

    if (ans != NULL) {
        cout << ans->data;
    }
}
