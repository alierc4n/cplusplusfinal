#include <iostream>
// tek yönlü doğrusal bağlı liste
using namespace std;

struct node { // kalıp oluşturuldu
	int data; // data istediğiniz ismi verebilirsiniz
	struct MyStruct
	{

	}; node* next; // buradaki next göstericidir
};

int main() {

	struct node* node1 = new node(); //ilk düğüm oluşturulup bellekte yer ayırıldı
	node1->data = 11; //değerler verildi | ilk düğüm head

	struct node* node2 = new node(); //ikinci düğüm oluşturulup bellekte yer ayırıldı
	node2->data = 22; //değerler verildi

	struct node* node3 = new node(); //ilk düğüm oluşturulup bellekte yer ayırıldı
	node3->data = 33; //değerler verildi

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL; // son düğüm NULL gösteriyor

	struct node* temp = node1;
	while (temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}

	return 0;
}