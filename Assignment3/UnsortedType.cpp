#include "UnsortedType.h"
#include <exception>
#include <iostream>

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
    :   length(0)
    ,   listData(nullptr)
    ,   currentPos(nullptr)
{
	length = 0;
	listData = nullptr;
	currentPos = nullptr;
}


template<class ItemType>
UnsortedType<ItemType>::UnsortedType(const UnsortedType& src)
        :   length(0)
        ,   listData(nullptr)
        ,   currentPos(nullptr)
{
    NodeType* node = src.listData;
	NodeType* insertionPoint = nullptr;
	NodeType* newHead = nullptr;
    while (node != nullptr)
    {
    	if(!newHead)
		{
			newHead = new NodeType(node->info, nullptr);
			insertionPoint = newHead;
		}
		else
		{
			insertionPoint->next = new NodeType(node->info, nullptr);
			insertionPoint = insertionPoint->next;
		}
		length++;
		node = node->next;
    }
	listData = newHead;
}

template<class ItemType>
UnsortedType<ItemType>& UnsortedType<ItemType>::operator=(const UnsortedType& src) {
	if(this == &src)
		return *this;

	this->MakeEmpty();

	NodeType* node = src.listData;
	NodeType* insertionPoint = nullptr;
	NodeType* newHead = nullptr;
	while (node != nullptr)
	{
		if(!listData)
		{
			newHead = new NodeType(node->info, nullptr);
			insertionPoint = newHead;
		}
		else
		{
			insertionPoint->next = new NodeType(node->info, nullptr);
			insertionPoint = insertionPoint->next;
		}
		length++;
		node = node->next;
	}
	listData = newHead;
	return *this;
}

template<class ItemType>
UnsortedType<ItemType>::~UnsortedType(){
	MakeEmpty();
}

template<class ItemType>
bool UnsortedType<ItemType>::IsFull() const{
	try{
		NodeType* newNode = new NodeType();
		delete newNode;
	}
	catch (std::bad_alloc exception){

		return true;
	}

	return (length > MAX_LENGTH);
}

template<class ItemType>
int UnsortedType<ItemType>::GetLength() const{
	return length;
}

template<class ItemType>
void UnsortedType<ItemType>::MakeEmpty(){
	NodeType* locationToDelete = nullptr;
	while (listData != nullptr){
		locationToDelete = listData;
		listData = listData->next;
		if (currentPos == locationToDelete){

			currentPos = currentPos->next;
		}

		delete locationToDelete;
		length--;
	}
}

template<class ItemType>
bool UnsortedType<ItemType>::IsEmpty() const{
	return (length == 0 && listData == nullptr);
}

template<class ItemType>
ItemType UnsortedType<ItemType>::GetItem(ItemType item, bool & found) const{
	NodeType* curr = listData;
	found = false;
	while (curr != nullptr && !found){
		if (curr->info != item)
			curr = curr->next;
		else{

			found = true;
			return curr->info;
		}
	}

	return item;
}

template<class ItemType>
bool UnsortedType<ItemType>::PutItem(ItemType item){
	if (IsFull())
		return false;

	NodeType* newNode = new NodeType(item, listData);
	listData = newNode;
	length++;
	return true;
}

template<class ItemType>
bool UnsortedType<ItemType>::DeleteItem(ItemType item){
	if(IsEmpty())
		return false;

	NodeType* curr = listData;
	NodeType* prev = nullptr;
	bool found = false;
	while (curr != nullptr && !found){
		if (curr->info == item) {
			found = true;
			if (prev == nullptr) {

				listData = curr->next;
			}
			else {
				prev->next = curr->next;
			}
			delete curr;
			length--;
		}
		else {
			prev = curr;
			curr = curr->next;
		}
	}

	return found;
}

template<class ItemType>
void UnsortedType<ItemType>::ResetList(){
	currentPos = nullptr;
}

template<class ItemType>
bool UnsortedType<ItemType>::HasNextItem() const{
	if (currentPos == nullptr)
		return (listData != nullptr);

	return (currentPos->next != nullptr);
}

template<class ItemType>
ItemType UnsortedType<ItemType>::GetNextItem(){

	currentPos = ((currentPos == nullptr) ? listData : currentPos->next);
	return currentPos->info;
}

