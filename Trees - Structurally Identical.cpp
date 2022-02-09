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
bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2)
{
    //change
    if(root1==NULL && root2==NULL)
        return true;
    if(root1==NULL || root2==NULL)
        return false;
    if( root1 -> data  != root2 -> data)
        return false;

    queue < TreeNode <int> * > pendingNodes1;
    queue < TreeNode <int> * > pendingNodes2;
    pendingNodes1.push(root1);
    pendingNodes2.push(root2);
    while( pendingNodes1.size() != 0 && pendingNodes2.size() != 0 )
    {
        TreeNode < int > * topone1 = pendingNodes1.front();
        TreeNode < int > * topone2 = pendingNodes2.front();
        pendingNodes1.pop();
        pendingNodes2.pop();
        for( int i = 0; i < topone1 ->children.size() && i < topone2 ->children.size(); i++ )
        {
            if ( topone1-> children[i]-> data !=  topone2-> children[i]-> data )
                return false;
             pendingNodes1.push( topone1 -> children[i] );
             pendingNodes2.push( topone2 -> children[i] );
        }
    }
    if( pendingNodes1.size()!= 0 || pendingNodes2.size()!= 0 )
        return false;
    else
        return true;
}
/*bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2){
    if(root1==NULL && root2==NULL)
        return true;
    if(root1==NULL || root2==NULL)
        return false;

    if(root1->data!=root2->data)
        return false;
    if(root1->children.size()!=root2->children.size())
        return false;

    for(int i=0;i<root1->children.size();i++)
    {
        bool smallans=areIdentical(root1->children[i],root2->children[i]);
        if(smallans==false)
            return false;
    }
    return true;
} */
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
int main()
{
    TreeNode<int>* root1 = takeInputLevelWise();
    TreeNode<int>* root2 = takeInputLevelWise();
    cout << (areIdentical(root1, root2) ? "true" : "false");
}
