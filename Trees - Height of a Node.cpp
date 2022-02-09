#include <vector>
#include <queue>
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
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

int getHeight(TreeNode<int>* root)
{
    if( root == NULL )// This is being checked in every recursive call.
        return 0;

    int maxHeight = 0;
    for( int i =0; i < root-> children.size(); i++ )
    {
        int h2 =  getHeight( root -> children[i]);// After every recursive call of the child, whatever is the height of that particular child is being stored in h1
        maxHeight = max(maxHeight,h2);// In this the the maximum height of all the children till now is stored in this.
        // This is then compared with h2. If h2 is greater than maxHeight then h2 becomes maxHeight.
       // So in every recursive call, h2 is being updated and compared to maxHeight.
    }
    int h1 = 1 + maxHeight;
    return h1;
}

int main()
{
    TreeNode<int>* root = takeInputLevelWise();
    cout << getHeight(root);
}
