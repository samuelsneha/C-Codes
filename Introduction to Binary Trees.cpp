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
/// MODIFICATION 1
/*int main()
{
    BinaryTreeNode <int>* root = new BinaryTreeNode <int> (1);
    BinaryTreeNode <int>* node1 = new BinaryTreeNode <int> (2);
    BinaryTreeNode <int>* node2 = new BinaryTreeNode <int> (3);
    root-> left = node1;
    root -> right = node2;
}
///MODIFICATION 2
void printTree( BinaryTreeNode<int>* root )
{
    if( root == NULL )
        return;

    cout << root -> data << ":";

    if( root -> left != NULL )
    {
        cout << "L"<<root -> left -> data;
    }

    if( root -> right != NULL )
    {
        cout <<"R"<<root -> right -> data;
    }
    cout<<endl;

    printTree( root -> left);
    printTree( root -> right );
}

int main()
{
    BinaryTreeNode <int>* root = new BinaryTreeNode <int>(1);
    BinaryTreeNode <int>* node1 = new BinaryTreeNode <int>(2);
    BinaryTreeNode <int>* node2 = new BinaryTreeNode <int>(3);
    root-> left = node1;
    root -> right = node2;
    printTree(root);
    delete root;
}

/// MODIFICATION 3

void printTree( BinaryTreeNode<int>* root )
{
    if( root == NULL )
        return;

    cout << root -> data << ":";

    if( root -> left != NULL )
    {
        cout << "L"<<root -> left -> data;
    }

    if( root -> right != NULL )
    {
        cout <<"R"<<root -> right -> data;
    }
    cout<<endl;

    printTree( root -> left);
    printTree( root -> right );
}
BinaryTreeNode<int>* takeInput()
{
    int rootData;
    cout<< " Enter the data " << endl;
    cin >> rootData;
    if( rootData == -1 )
    {
        return NULL;
    }
    BinaryTreeNode <int>* root = new BinaryTreeNode<int> ( rootData );
    BinaryTreeNode <int>* leftChild = takeInput();
    BinaryTreeNode <int>* rightChild = takeInput();
    root -> left  = leftChild;
    root -> right = rightChild;
    return(root);
}
int main()
{
    BinaryTreeNode <int>* root = takeInput();
    printTree(root);
}

/// MODIFICATION 4
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

void printTree(BinaryTreeNode<int>* root)
{
	if (root == NULL) {
		return;
	}
	cout << root->data << ":";
	if (root->left != NULL) {
		cout << "L" << root->left->data;
	}

	if (root->right != NULL) {
		cout << "R" << root->right->data;
	}
	cout << endl;
	printTree(root->left);
	printTree(root->right);
}

int main()
{
    BinaryTreeNode<int>* root = takeInputLevelWise();
	printTree(root);
	delete root;
} */
///MODIFICATION 5

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

void printLevelWise(BinaryTreeNode<int> *root)
{
// Here the ree is already made in the takeInput() function. So we just need to do the work of printing the tree and no need of making the tree.
    if( root -> data == -1 )
        return;

	queue <BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push( root );
    while( pendingNodes.size() != 0 )
    {
        BinaryTreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
        //added by me
        cout<<front->data<<":";
        if(front->left!=NULL)// here we cant do ( front -> left -> data != -1, because then if left s null then it will give error since we cant access data of null.) )
        {// also we cant do front -> left != -1 because node is not of integer type. So NULL cant be -1 .
            cout<<"L:"<<front->left->data;
            pendingNodes.push(front->left);
        }
        else
        {
            cout<<"L:-1";
        }
        if(front->right!=NULL)
        {
            cout<<",R:"<<front->right->data<<endl;
            pendingNodes.push(front->right);
        }
        else
        {
            cout<<",R:-1"<<endl;
        }
    }
    return;
}
int main() {
    BinaryTreeNode<int>* root = takeInputLevelWise();
    printLevelWise(root);
}

