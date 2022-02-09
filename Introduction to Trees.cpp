/// 1) Here we are just typing the class and the main function- to create the roots, nodes and then to connect them with each other.
/*#include <vector>
//Since in the class we will be using the inbuilt function of vector.
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
    public: // So that they can be accessed from anywhere
    T  data;
    vector <TreeNode <T> *> children;
// This is basically like you have a vector of TreeNodes ( nodes ). The vector stores TreeNodes in it.
// Each node in a Tree will have this vector- children to the children of that particular node.
// Now this TreeNode is of what type - it will be of the type of its parent only. Even if you don't write T , it will assume it as T because the children will be of same type as that of its parent.
// And the name of the vector is children.
// So the root or any of the nodes will have a data and a vector with itself. And since data and vector haven't been declared using 'new' keyword, it means they are statically created and NOT dynamically.
// So as you delete the root/node, the data and the vector will automatically get deleted.
    TreeNode ( T data ) // Constructor so that when its objects are declared, the process becomes easier.
    {
        this -> data = data;
    }
};
int main()
{
    TreeNode < int > * root = new TreeNode < int > (1 );
    TreeNode < int > * node1 = new TreeNode < int > (2 );
    TreeNode < int > * node2 = new TreeNode < int > (3 );
// Till here we created 1 root and 2 nodes separately ie. they are disconnected.
    root -> children.push_back( node1 );
    root -> children.push_back( node2 );
// Here in the above two steps we connect the two nodes to the root.
// In the next part we will see how to print them.
}


///2) - Here we are Introducing Print Function along with the class and the main function.
#include <vector>
//Since in the class we will be using the inbuilt function of vector.
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
    public: // So that they can be accessed from anywhere
    T  data;
    vector <TreeNode <T> *> children;
     TreeNode ( T data ) // Constructor so that when its objects are declared, the process becomes easier.
    {
        this -> data = data;
    }
};

void printTree( TreeNode < int > * root )
{
    cout << root -> data << endl;
    for( int i = 0; i < root -> children.size(); i++ )
    {
        printTree( root -> children[i] );
    }
}

int main()
{
    TreeNode < int > * root = new TreeNode < int > (1 );
    TreeNode < int > * node1 = new TreeNode < int > (2 );
    TreeNode < int > * node2 = new TreeNode < int > (3 );
    root -> children.push_back( node1 );
    root -> children.push_back( node2 );
    printTree( root );
}


/// 3) - Here we have added takeInput function. Also here we have our normal class, Print Function which we have modified, and takeInput function which is user friendly as compared to inputing the fixed data from the main function and the main function itself.
//See here the the takeInput function is similar to how pre order traversal works.

#include <vector>
//Since in the class we will be using the inbuilt function of vector.
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
    public: // So that they can be accessed from anywhere
    T  data;
    vector <TreeNode <T> *> children;
     TreeNode ( T data ) // Constructor so that when its objects are declared, the process becomes easier.
    {
        this -> data = data;
    }
};

void printTree( TreeNode < int > * root )
{
    if ( root == NULL )// This is NOT B.C. Its an Edge Case.
        return;
    cout << root -> data <<  ":";// Printing the root
    for( int i = 0; i < root -> children.size(); i++ )
    {
        cout << root -> children[i] -> data << "," ;// Printing level 1.
    }
    cout << endl;
    for( int i = 0; i < root -> children.size(); i++ )
    {
        printTree( root -> children[i]);// Calling recursion to print after level 1.
    }
}

TreeNode < int > * takeInput()//Here we take input from the user and return the root. Thats why the return type is TreeNode<int>*.
// This function will create a Tree and will return root.
{
    int rootData;
    cout << " Enter the data"<< endl;
    cin >> rootData;
    TreeNode < int > * root = new TreeNode < int > (rootData);
    int n;
    cout <<" Enter the number of children of " << rootData << endl;
    cin >> n;
    for ( int i = 0; i < n; i++ )
    {
        TreeNode<int>* child = takeInput();
        root -> children.push_back( child);// push_back since we are inserting child into the vector children .
    }
    return ( root);
}
int main()
{
    TreeNode<int>* root = takeInput();
    printTree( root );
}

/// 4) Here the takeInput() function has been modified to the Level Wise. Rest all functions - main and the print remains the same. The class also remains the same as the previous.

#include<queue>
#include <vector>
//Since in the class we will be using the inbuilt function of vector.
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
    public: // So that they can be accessed from anywhere
    T  data;
    vector <TreeNode <T> *> children;
     TreeNode ( T data ) // Constructor so that when its objects are declared, the process becomes easier.
    {
        this -> data = data;
    }
};

TreeNode <int> * takeInputLevelWise()
{
 //Making things ready for the root
    int rootData;
    cout<< " Enter the data " << endl;
    cin >> rootData;
    TreeNode <int> * root = new TreeNode <int> ( rootData );
 //Creating the queue
    queue < TreeNode < int > *> pendingNodes;
    pendingNodes.push( root );
 //Saving and then poping the element in front of the queue , asking it its number of children, then connecting them with its root and then poping those children also into the queue.
    while( pendingNodes.size() != 0 )
    {
 // First saving the node into a new variable.
        TreeNode < int > * front = pendingNodes.front();
        pendingNodes.pop();// Then popping it.
  // Asking the user the number of children the current node has and its preparations.
        int numchild;
        cout << "How many children does " << front -> data << " has" << endl;
        cin >> numchild;
        for( int i = 0; i < numchild; i++ )
        {
 // Asking the user the data of its kids of the current node and its preparations.
            int childData;
            cout << " Enter the data of the " << i<< " th child of " << front -> data << endl;
            cin >> childData;
            TreeNode <int> * child = new TreeNode <int> ( childData );
// Making the connections between the front and its children by connecting its kids into its children vector.
            front -> children.push_back( child );
// We need to push the entire node and not just the data of the node into the queue.
            pendingNodes.push( child);

        }
    }
    return( root ); // Don't forget to type this. You had forgotten this.
}
void printTree( TreeNode < int > * root )
{
    if ( root == NULL )// This is NOT B.C. Its an Edge Case.
        return;

    cout << root -> data <<  ":";// Printing the root
    for( int i = 0; i < root -> children.size(); i++ )
    {
        cout << root -> children[i] -> data << "," ;// Printing level 1.
    }

    cout << endl;

    for( int i = 0; i < root -> children.size(); i++ )
    {
        printTree( root -> children[i]);// Calling recursion to print after level 1.
    }
}
int main()
{
    TreeNode<int>* root = takeInputLevelWise();
    printTree( root );
} */

///5) Here we will modify takeInput() function Level Wise. Rest all will remain the same- the main function, takeInput() function and the Class.

#include<queue>
#include <vector>
//Since in the class we will be using the inbuilt function of vector.
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
    public: // So that they can be accessed from anywhere
    T  data;
    vector <TreeNode <T> *> children;
     TreeNode ( T data ) // Constructor so that when its objects are declared, the process becomes easier.
    {
        this -> data = data;
    }
};

TreeNode <int> * takeInputLevelWise()
{
 //Making things ready for the root
    int rootData;
    cout<< " Enter the data " << endl;
    cin >> rootData;
    TreeNode <int> * root = new TreeNode <int> ( rootData );
 //Creating the queue
    queue < TreeNode < int > *> pendingNodes;
    pendingNodes.push( root );
 //Saving and then poping the element in front of the queue , asking it its number of children, then connecting them with its root and then poping those children also into the queue.
    while( pendingNodes.size() != 0 )
    {
 // First saving the node into a new variable.
        TreeNode < int > * front = pendingNodes.front();
        pendingNodes.pop();// Then popping it.
  // Asking the user the number of children the current node has and its preparations.
        int numchild;
        cout << "How many children does " << front -> data << " has" << endl;
        cin >> numchild;
        for( int i = 0; i < numchild; i++ )
        {
 // Asking the user the data of its kids of the current node and its preparations.
            int childData;
            cout << " Enter the data of the " << i<< " th child of " << front -> data << endl;
            cin >> childData;
            TreeNode <int> * child = new TreeNode <int> ( childData );
// Making the connections between the front and its children by connecting its kids into its children vector.
            front -> children.push_back( child );
// We need to push the entire node and not just the data of the node into the queue.
            pendingNodes.push( child);

        }
    }
    return( root ); // Don't forget to type this. You had forgotten this.
}

void printLevelWise( TreeNode<int> * root )
{
    queue <TreeNode <int>* > pendingNodes;// UNDERSTAND WHY
    pendingNodes.push( root );//UNDERSTAND WHY
    while( pendingNodes.size() != 0 )
    {
        TreeNode <int> * topone = pendingNodes.front();
       // pendingNodes.pop();
        cout << topone -> data << ":";
        pendingNodes.pop();
        for( int i =0; i < topone -> children.size(); i++ )
        {
            cout << topone-> children[i] -> data;
            if( i != topone -> children.size()- 1 )
                cout << ",";
            pendingNodes.push( topone -> children[i]);//UNDERSTAND WHY
        }
        cout << endl;
    }
}

int main()
{
    TreeNode<int>* root = takeInputLevelWise();
    printLevelWise(root);
}
 // Undestand that while printing also we require a queue, so that element comes and gets printed in a correct manner (FIFO).
 //There is no need of recursion in while loop.
