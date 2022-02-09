
/*int numNodes(TreeNode<int>* root)
int ans = 1;
while( root != NULL )
{
    for( int i =0; i < root -> children.size(); i++ )
    {
      ans++;// See this is wrong because suppose you have counted the children at level 2, then how will you go further and count the children of level 2 ?
 // If you do the way you though first- count the children of root in 1 for loop and then make another for loop inside which recursion will be there to count the descendants of the level 2 nodes. This will give wrong ans as you are counting  level 2 nodes twice - once in first for and then in second for loop through recursion. ( If you do some manipulation i=like ans = 0 instead of 1 and something else also ...you might get the correct o/p. But then see you are complicating the sum too much )
      // To count the children of level 2 also, we are calling the recursion on each and every children of the root so that they will go and give us the count of thier children too.
      // Suppose you are at the 3rd child of the root, call recursion on it and it will count all of its children. Repeat the same process in for loop for all of root's children.
      // And then add +1 for the root node.
    }

   int finalans =  numNodes(TreeNode<int>* root)
} */
#include <vector>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode {
	public:
	T data;
	vector<TreeNode<T>*> children;

	TreeNode(T data) {
		this->data = data;
	}

};
TreeNode<int>* takeInputLevelWise()
{
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);

	queue<TreeNode<int>*> pendingNodes;

	pendingNodes.push(root);
	while (pendingNodes.size() != 0)

    {
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter num of children of " << front->data << endl;
		int numChild;
		cin >> numChild;
		for (int i = 0; i < numChild; i++)
		{
			int childData;
			cout << "Enter " << i << "th child of " << front->data << endl;
			cin >> childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}

int numNodes(TreeNode<int>* root)
{
    if (root == NULL)
        return 0;

        int ans = 1;
    //    int finalans = 0;
        for (int i = 0; i < root->children.size(); i++)
        {
            //finalans = ans +  numNodes(root->children[i]);
            ans = ans + numNodes(root->children[i]);
// See here you need to understand why you are not doing final ans statement.
// See in finalans one, you are separately counting the nodes of each recursion call and in this process after each recursion call the finalans variable is getting updated which is wrong.
// What we want is, after recursion does its first recursion call and gets us the number of nodes, we want to add that same value to the other recursion calls ans and NOT update it with each recursion call.
// We do root ' -> ' children which means, since root is a pointer we use -> symbol for it, to point to its vector children,
         }
    return ans;
}

int main()
{
    TreeNode<int>* root = takeInputLevelWise();
    int finalans = numNodes( root );
    cout << finalans;
}

