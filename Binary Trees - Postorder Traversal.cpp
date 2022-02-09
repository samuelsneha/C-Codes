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
void postOrder(BinaryTreeNode<int> *root)
{
    if( root == NULL )
        return;

    postOrder( root -> left );
    postOrder( root -> right );
    cout << root -> data << " ";
}
int main()
{
    BinaryTreeNode<int>* root = takeInputLevelWise();
    postOrder(root);
}
/// See the sample input 1 - 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
//1) Initially 1 is there at the formal parameters. 1 is not null so its left is called. Now 2 - 4 - 5 part is called where 2 is the root. Then again recursion is called to the left of 2 and 4 goes to the formal parameters. Then 4 is not NULL so then again recursion is called to the left of 4 which is NULL. So NULL goes to the formal parameters and first if condition is TRUE.
//2) And then it returns from there and goes back to 4 to complete its further recursive calls. Now right of 4 is called which is null, NULL goes to the formal parameters. The first IF condition is satisfied and it return from there and goes back to 4 to complete its statements.
//3) Now in the third statement 4 is the root since it came back to 4 and 4 is printed. Now the left and right of 4 is finished, it goes back to the node who called 4 to complete its recursive calls.
//4) The left of 2 was called and finished, so now the next recursive call of 2 ie. right of 2 is called which is 5. 5 goes to the formal parameters and the left of 5 is called. Left of 5 is NULL, null goes to the formal parameters and it is returned from there. Other recursive calls of 5 is yet to be completed.
//5) Now the right of 5 is called which is null, NULL is returned and it goes back to 5. The third statement of 5 is executed and 5 is printed.
//6) Now left and right of 5 is finished and 5 goes back to the function who called it ie. 2. Now the left and right of 2 is finished so recursive call is given to the function who called it ie. 1.
//7) Now the incomplete recursive calls of 1 is done. So the right of 1 is called which is 3. Again recursive calls of 3  are made, and its left is called.
//8) Left of 6 is called which is null so it returns. Other recursive call of 6 is done to its right which is null. It is returned from there to 6 itself. Now the third statement is executed which is printing of the root which is 6.
//9) Left and right calls of 6 is done so 6 returns back to the node which called 6 ie. 3 and the incomplete calls of 3 is done.
//10) Right of 3 is called which is 7 so 7 goes to the formal parameters. Now left of 7 is called, it is null so it is returned back to 7 to complete its recursive calls. Right of 7 is called hich is null and then it is returned back to 7 only to complete its third statement. Ihe third statement is executed and 7 gets printed as it is the root.
//11) Now the left and right of 7 is finished and it goes back to the function who called it ie. 3. Since the left and right of 3 is finished it goes back to the function who called 3 ie. 1
//12) Now the left and right of 1 is executed and the third statement of 1 which was left to be executed is done. So 1 gets printed as 1 is the root.
//13) Now all the recursive calls are completed so function goes back to the main function.
