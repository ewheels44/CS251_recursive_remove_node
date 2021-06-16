struct node {
  int val;
  node *next;
};

struct List
{
   node* Head;
   int   Count;
};

void lst_free3(node *lst) {

   if(lst==nullptr)
     return;
   lst_free3(lst->next);
   delete lst;
}
// deletes nodes right-to-left

void push_front(List &mylist, int value1)
{
	node *newN = new node;
	newN->next = mylist.Head;
	mylist.Head = newN;

	mylist.Count++;

}


int main() {
  
	List mylisyofnodes;
	mylisyofnodes.Head = nullptr;
	mylisyofnodes.Count = 0;

	for (int i = 0; i < 5; i++)
	{
		push_front(mylisyofnodes, i);
	}

	lst_free3(mylisyofnodes.Head);

  return 0;
}
