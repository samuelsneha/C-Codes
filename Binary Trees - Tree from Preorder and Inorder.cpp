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

int search(int *inorder,int inEnd,int x)
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
}

BinaryTreeNode<int>* buildTreeHelper( int * inorder, int * preorder, int inStart, int inEnd, int preStart, int preEnd )
{
    // Now we have created a helper function and the parameters are the starting indexes and the ending indexes of inorder and preorder arrays. Inorder and Preorder arrays itself are also the parameters.
    // Understand that from the if statement will give either of these answers :  0 || 0 / 1 || 1 /  0 && 0 / 1 && 1 only
    if( inStart > inEnd || preStart > preEnd) // So since 0 || 0 == 0 && 0  and 1 || 1 ==  1  && 1 , it wont matter whether we put OR  or  AND.
        return NULL; // This is the BC only for the cases where the given array is empty. So no '>='. The arrays having 1 element to ifinite are handled below.
   // Though here in this question, we are assuming that the lengths of both the arrays will be same there can be chances that in other questions the lengths of both the arrays may not be same, so we are putiing the '||' condition and checking for both the arrays. If anyone of them is NULL, its still fine and we can continue with it.

    /*int rootData = preorder[preStart];
     int rootIndex = -1;
     for (int i = inStart; i < inEnd; i++)
     {
         if( inorder[i] == rootData )
             // rootIndex = i;
         {
             rootIndex = i;
             break;// we cant return because nothing to catch it. Also if we don't do break the loop will continue till its end but if we do break, the moment we got it we come out of the loop.
         }
     }*/
// This is also correct but it was giving RTE so we created another search function.
//1) See now how we manually solve this question, by first figuring out the root from preorder and then finding the root in the inorder.
//2) Once we find it in the inorder, we partition the inorder array into 2 parts ie. L & R with the root being in the middle as the middle element.
//3) Now remember that, in arrays we do the partition/ break the array with the help of indexes. So once we got the index of the root in inorder array, the process becomes easier.
    int rootData = preorder[preStart];
	int rootIndex = search(inorder,inEnd,rootData); // The value returned by ans will be stored in the rootIndex variable.
	// Original Array/Tree = 1 2 3 4 5 6 7
	// PO = 1 2 4 5 3 6 7. Remember that Preorder will always assign the root and the Inorder will always assign the subtrees. First always look at the Preorder and then look at the Inorder.
	// IO = 4 2 5 1 6 3 7 where 1 is the root and it has been found at the 3rd index. So 4 - 2 - 5 is the L and 6 - 3 - 7 is the R.
    int linStart = inStart; // Basic common sense
    int linEnd = rootIndex - 1 ; // Basically after partition IO  - left consists of 4 - 2 - 5 and ends at 5 which is one node before 1 in inorder array.
    int lpreStart = preStart + 1; // Since 1 we took as the root from the preorder, now 2 4 5 3 6 7 are only left in preorder. And since preorder gives us root we take the next element in the array as the root which is 2 ( preStart + 1) . Then we look for 2 at the IO and thus figure out its L & R. So first we always look at the preorder and then at the inorder and the cycle continues.
    int lpreEnd  = linEnd - linStart + lpreStart;// This is a formula which we need to understand. LpreEnd - LPrestart is length of left array for preorder and linEnd - linStart  is the length of left array for inorder. And lpreEnd - lpreStart == linEnd - linStart as they are different traversals of the same tree. So it will always be true and equal too. So mathematically we derieve the formula for lpreEnd.
    int rinStart =  rootIndex + 1;// Basic common sense
    int rinEnd = inEnd;// Basic common sense.
    int rpreStart = lpreEnd + 1; // lpreEnd finished at 5 and rpreStart started at 3 which is lpreEnd +1.
    int rpreEnd = preEnd; // Basic common sense. See here suppose it was a case where the lenghts of both PO & IO are same rpreEnd == inEnd. But here we are taking all cases so rpreEnd == preEnd only.

    BinaryTreeNode<int>* root = new BinaryTreeNode <int> ( rootData );// Here unlike other sums, array element is given and we have to convert array element into Node.The rootData we got is getting converted into a node.
    // We are diving the root into  parts on the basis of left and right.
    root -> left = buildTreeHelper( inorder, preorder, linStart, linEnd, lpreStart, lpreEnd );
    root -> right = buildTreeHelper( inorder, preorder, rinStart, rinEnd, rpreStart, rpreEnd );

    return root ;
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength)
{
    //return buildTreeHelper( inorder, preorder, 0 , size -1, 0 , size -1 ); You can also write it this way in C++
    // In C++ there is a internal buffer which stores the thrown variable and returns its. So we don't need to create a variable for catching the thrown variable. So the below two statements have been clubbed into a single statement above.
    // Basically, [ return + function call ] always works in C++.
    BinaryTreeNode<int>* root = buildTreeHelper( inorder, preorder, 0 , inLength - 1, 0 ,preLength  -1 );
    // We are creating a helper function because we will be solving this sum using the indexes of the preorder and inorder arrays.
    return root;
}


int main()
{
    int size;
    cin >> size;
    int *pre = new int[size];
    int *in = new int[size];
    for (int i = 0; i < size; i++) cin >> pre[i];
    for (int i = 0; i < size; i++) cin >> in[i];
    BinaryTreeNode<int> *root = buildTree(pre, size, in, size);
    printLevelATNewLine(root);
}


