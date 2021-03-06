#include <vector>
#include <queue>
#include<bits/stdc++.h>
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

TreeNode<int>* takeInputLevelWise()
{
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);

	queue<TreeNode<int>*> pendingNodes;

	pendingNodes.push(root);
	while (pendingNodes.size() != 0) {
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter num of children of " << front->data << endl;
		int numChild;
		cin >> numChild;
		for (int i = 0; i < numChild; i++) {
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


void printAtLevelK(TreeNode<int>* root, int k)
{
	if (root == NULL)
    {
		return;
	}

	if (k == 0)
    {
		cout << root->data << endl;
		return;
	}

	for (int i = 0; i < root->children.size(); i++)
    {
		printAtLevelK(root->children[i], k - 1);
	}
}
int main()
{
    TreeNode<int>* root = takeInputLevelWise();
    int knum;
    cin >> knum;
    printAtLevelK(root, knum );
}
