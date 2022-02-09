#include<bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
#include<queue>
// See we are using queue because the order in which I want the tree, in that order only I want to give the inputs. So queue takes care of the order required. Hence we use a queue.
BinaryTreeNode<int>* takeInputLevelWise()
{
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}

	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while (pendingNodes.size() != 0) {
		BinaryTreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter left child of " << front->data << endl;
		int leftChildData;
		cin >> leftChildData;
		if (leftChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
			front->left = child;
			pendingNodes.push(child);
		}
		cout << "Enter right child of " << front->data << endl;
		int rightChildData;
		cin >> rightChildData;
		if (rightChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
			front->right = child;
			pendingNodes.push(child);
		}
	}
	return root;
}

/// WITH RECURSION
/*bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if( root == NULL )
        return false;

    if( root -> data == x )
        return true;

 //   if( root -> left -> data == x || root -> right -> data == x )
 //       return true;

    bool ans1 = isNodePresent( root -> left , x );
    if( ans1 )
    return true;
    bool ans2 = isNodePresent( root -> right, x );
    if( ans2 )
    return true;
    // return( ans1 || ans 2);
*/

 ///WITHOUT RECURSION
bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if( root == NULL )
        return false;

    if( root -> data == x )
        return true;

    queue <BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push( root );
    while( pendingNodes.size() != 0 )
    {
        BinaryTreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
         if( front != NULL && front -> data == x )
        {
          return true ;
        }
         if ( front -> left != NULL )
        {
          pendingNodes.push( front -> left );
        }
         if ( front -> right != NULL )
        {
          pendingNodes.push( front -> right );
        }
    }
    return false;
}
int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    int x;
    cin >> x;
    cout << ((isNodePresent(root, x)) ? "true" : "false");
}
