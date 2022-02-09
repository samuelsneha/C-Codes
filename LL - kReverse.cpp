

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};


Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}


void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}


Node * reversefunc( Node * head )
{

  Node * prev = NULL;
  Node * current = head;
 Node * next = NULL ;//Initializing with NULL to be on the safer side.
    while( current != NULL )
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;

    }
   return( prev );
}
Node *kReverse(Node *head, int k)
{
	if(head==NULL)
        return NULL;
    int count=0;

    Node* t1=head;
    Node* newHead;

    for(int i=1;i<k ;i++)
    {
        if(t1->next==NULL)
            break;
        else
            t1=t1->next;
    }
    Node *h2=t1->next;
    t1->next=NULL;
    newHead=reversefunc(head);
    Node *newtail=head;

    Node* ans=kReverse(h2,k);
    newtail->next=ans;
    return newHead;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int k;
		cin >> k;
		head = kReverse(head, k);
		print(head);
	}

	return 0;
}
