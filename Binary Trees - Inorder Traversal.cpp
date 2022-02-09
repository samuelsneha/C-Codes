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
void Inorder( BinaryTreeNode <int> * root )
{
    if( root == NULL )
        return;

    Inorder( root -> left );
    cout << root -> data << " ";
    Inorder( root -> right );
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

int main()
{
 BinaryTreeNode<int>* root = takeInputLevelWise();
 Inorder(root);
 cout << endl;
 printLevelWise(root);
}
/// See 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1 . Its output is 4 2 5 1 8 6 9 3 7
//1) First 1 is at the formal parameters. Left of 1 is called which is 2 so 2 goes to the formal parameters. Left of 2 is called which is 4 so 4 goes to the formal parameters. Left of 4 is nothing so null goes to the formal parameters and it is returned back to 4. Now 4 gets printed and then its right is called which is again null so it is returned back to 4.
//2) Now 4 goes back to who called it ie. 2. So 2 gets printed and then right of 2 ie. 5 is called. Now left of 5 is called which is null. So null goes to formal parameters and then it returns back and then 5 gets printed. Then right of 5 is called and it returns back.
//3) Now 5 is returned back to the function who called it ie. 2. Now the left and right of 2 is done so it calls the function who called 2 ie. 1.
//4) Now incomplete statements of 1 are executed. So since the left of 1 is done, 1 gets printed and then its right is called which is 3.
//5)  Now the left of 3 is called which is 6. So 6 gos to the formal parameters and then left of 6 is called which is 8 so 8 goes to the formal parameters. Now left of 8 is called which is null so null goes to the formal parameters and the first IF statement is executed so it returns back to 8 only. Now 8 gets printed and then right of 8 is called which is null. So then it is returned back to 8.
//6) Left and right of 8 is done so it returns back to the function who called it ie. 6. Now the incomplete statements of 6 will be executed. Since the left of 6 is done, 6 gets printed and then its right is called which is 9. So now 9 goes to the formal parameters. Left of 9 is executed, it returns null then 9 gets printed and then its right is called which returns null.
//7) Since the left and right of 9 is done, i goes back to the function who called it ie. 6. Since the left and right of 6 is done it goes back to the function who called it ie. 3. So now 3 gets printed and the right of 3 ie. 7 is called.
//8) Left of 7 is called which is null so it goes back to 7 and then 7 is printed. Now right of 7 is called and it is returned back to 7 itself. Now left and right of 7 is done so 7 goes back to the function who called 7 ie. 3
//9) Left and right of 3 is done so it goes back to the function who called 3 ie. 1. Now left and right of 1 are completed so the all the recursive calls are finished and 1 goes back to the main function.
