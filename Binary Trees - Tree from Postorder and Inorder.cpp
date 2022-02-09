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
void printLevelATNewLine(BinaryTreeNode<int> *root) {
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL) {
            if (q.empty()) {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL) {
            q.push(first->left);
        }
        if (first->right != NULL) {
            q.push(first->right);
        }
    }
}
/*int search(int *inorder,int inEnd,int x)
{
    int ans = -1;// We can initialize this with any minimum number that can't be the array index.
    for(int i = 0; i < inEnd; i ++)
    {
        if( inorder[i] == x )
        {
            ans = i;
            return ans;
        }
    }
}*/

BinaryTreeNode<int>* buildTreeHelper (int *postorder,  int *inorder, int postStart, int postEnd, int inStart, int inEnd )
{
     if( inStart > inEnd || postStart > postEnd)// even if 1 array is empty return.
        return NULL;

    int rootData = postorder[postEnd];
    int rootIndex = -1;
     for(int i = inStart; i <= inEnd; i ++)
    {
        if( inorder[i] == rootData )
        {
            rootIndex = i;
            break;
        }
    }
 //   int rootIndex = search( inorder, inEnd, rootData );
    int linStart = inStart;
    int linEnd = rootIndex - 1;
    int lpostStart = postStart;
    int lpostEnd = linEnd - linStart + lpostStart;
    int rinStart = rootIndex + 1;
    int rinEnd = inEnd;
    int rpostStart = lpostEnd + 1;
    int rpostEnd = postEnd - 1 ; // similar to lpreStart in the previous code.

   BinaryTreeNode<int>* root = new BinaryTreeNode <int> ( rootData );
   root -> left = buildTreeHelper( postorder, inorder, lpostStart, lpostEnd, linStart, linEnd );
   root -> right = buildTreeHelper( postorder, inorder, rpostStart, rpostEnd, rinStart, rinEnd );
   return( root );

}


 BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength)
 {
   BinaryTreeNode<int>* root = buildTreeHelper( postorder, inorder, 0 , postLength - 1, 0 , inLength - 1 );
    return root;
 }


 int main()
 {
    int size;
    cin >> size;
    int *post = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> post[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(post, size, in, size);
    printLevelATNewLine(root);
}
