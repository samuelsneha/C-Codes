#include<bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

BinaryTreeNode( T data )
{
    this -> data = data;
    left = NULL;
    right = NULL;
}
 ~BinaryTreeNode()
 {
     delete left;
     delete right;
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
/// WITHOUT RECURSION APPROACH

int numNodes(BinaryTreeNode<int>* root)
{
    if (root == NULL)
        return 0;

    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    int ans = 1;
    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        //added by me
        //cout << front->data << ":";
        if (front->left != NULL)  // here we cant do ( front -> left -> data != -1, because then if left s null then it will give error since we cant access data of null.) )
        {                         // also we cant do front -> left != -1 because node is not of integer type. So NULL cant be -1 .
            //cout << "L:" << front->left->data;
            ans++;
            pendingNodes.push(front->left);
        }
        // } else {
        //     cout << "L:-1";
        // }
        if (front->right != NULL) {
            //cout << ",R:" << front->right->data << endl;
            ans++;
            pendingNodes.push(front->right);
        }
        //else {
        //     cout << ",R:-1" << endl;
        // }
    }

    return ( ans );// since it is declared inside numnodes, till numnodes func we will get its updated value.
}



/// RECURSION APPROACH
/*int numNodes( BinaryTreeNode<int>* root )
{
    if( root == NULL )
        return 0;
    int ans1 = numNodes( root -> left);
    int ans2 = numNodes( root -> right);

    return( 1 + ans1 + ans2);
}*/

int main()
{
    BinaryTreeNode<int>* root = takeInputLevelWise();
    int answer = numNodes(root);
    cout << answer;
    delete root;
}
