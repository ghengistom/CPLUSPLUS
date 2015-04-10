#ifndef TREENODE_H
#define TREENODE_H
template< class ItemType > class Tree; // forward declarations
/*Ensures that there is not a cyclic reference. Ask if you have questions about this.*/
// Begin TreeNode Class
template<class ItemType>
class TreeNode {
	friend class Tree< ItemType >; // make Tree a friend
public:
	TreeNode(ItemType); // constructor
	TreeNode(); // constructor with data uninitialized
	ItemType getData() const; // return data in the node
private:
	ItemType data;
	TreeNode< ItemType > *leftPtr;
	TreeNode< ItemType > *rightPtr;
};
// Constructor
template<class ItemType>
TreeNode< ItemType >::TreeNode(ItemType newItem)
{
	data = newItem;
	leftPtr = NULL;
	rightPtr = NULL;
}
template<class ItemType>
TreeNode< ItemType >::TreeNode()
{
	leftPtr = NULL;
	rightPtr = NULL;
}
// Return a copy of the data in the node
template< class ItemType >
ItemType TreeNode< ItemType >::getData() const
{
	return data;
}
#endif
