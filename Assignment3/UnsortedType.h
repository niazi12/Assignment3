#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

#include <iostream>

const int MAX_LENGTH = 15;

template <class ItemType> class UnsortedType;

template <class ItemType>
std::ostream &operator<<(std::ostream &output, const UnsortedType<ItemType>& uTypeObj);

template <class ItemType>
class UnsortedType
{
public:
    struct NodeType {
		ItemType info;
		NodeType* next;

        NodeType(ItemType newInfo = ItemType()
                , NodeType* newNext = nullptr)
            :   info(newInfo)
            ,   next(newNext)
        {
        }
	};

	UnsortedType();
	UnsortedType(const UnsortedType& src);
    UnsortedType& operator=(const UnsortedType& src);
    ~UnsortedType();

	bool IsFull() const;
	int GetLength() const;
	void MakeEmpty();
	bool IsEmpty() const;
	ItemType GetItem(ItemType item, bool& found) const;
	bool PutItem(ItemType item);
	bool DeleteItem(ItemType item);

	//Iterator Operations	
	void ResetList();
	bool HasNextItem() const;
	ItemType GetNextItem();

    friend std::ostream &operator<<(std::ostream &output, const UnsortedType<ItemType>& uTypeObj){
        auto curr = uTypeObj.listData;
        while (curr != nullptr) {
            output << curr->info;
            curr = curr->next;
        }
        output << "List size: " << uTypeObj.length << "\n";
        return output;
    }

private:
	NodeType* listData = nullptr;
	int length = 0;
	NodeType* currentPos = nullptr;
};

#endif