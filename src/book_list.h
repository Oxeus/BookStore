#include "book.h"

class BookList
{
public:
	void readinFile();
	void printAll();
	void markPrice();
	void changeInv();
	void writetoFile();

	BookList();
	~BookList();

private:
	int bookCount;
	Book ** booklist;
};