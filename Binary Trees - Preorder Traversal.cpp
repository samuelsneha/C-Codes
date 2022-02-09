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

void preOrder(BinaryTreeNode<int> *root)
{
    if( root == NULL )
        return;

	cout << root -> data << " ";
    preOrder( root-> left );
    preOrder( root -> right );
}
///See the sample input 1: 5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
//1) Now first in the above eg. 5 gets printed.and recursion is called at its left where the part 6 - 2 - 3 - 9 where 6 is the root.
//2) Now this 6 - 2 - 3 - 9 goes to the formal parameters with 6 as the root.
//3) Now 6 gets printed as 6 is the root. Now again at its left recursion is called where it is just 2.
//4) Now 2 goes to the formal parameters and gets printed. Now its left is called at the formal parmeters which is null so we return to 6 while 2 goes off the stack.
//5) Now right of 6 is called in recursion and 3 - 9 goes to the formal parameters where 3 is the root. 3 gets printed.
//6) There is nothing to the left of 3, so the call returns to 3 and then its right is called to the formal parameters which is 9.
//7) 9 gets printed, then nothing is there to its left nor right so the function goes back to 3 while 9 is popped out of the stack.
//8) Left and right of 3 has alredy been done, so we go back to the funcion who called 3 ie. 6. Left and right of 6 is already done so we go back to the function who called it ie. 5
//9) The left of 5 is already done, so recursion is called at its right . So 10 goes to the formal parameters as it is and as the root is 10 10 gets printed.
//10) Nothing is there to its left and right so function is called back to 5 . As the left and right of 5 is done, 5  is poped out of the stack and then it goes to the main function..

int main()
{
    BinaryTreeNode<int>* root = takeInputLevelWise();
    preOrder(root);
}
