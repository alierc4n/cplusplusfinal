#include<iostream>
//Tek yönlü doğrusal bağlı listede basa eleman ekleme
using namespace std;

struct node { //yapımızı oluşturduk
	int data;
	struct node* next;
};

struct node* basaEkle(struct node* head, int key) {
	if (head==NULL) // head ilk düğümdür
	{
		struct node* temp = new node();
		temp->data = key;
		temp->next = NULL;

		head = temp;

		cout << "ilk dugum olusturuldu" << endl;
	}
	else
	{
		struct node* temp = new node();
		temp->data = key;
		temp->next = head;

		head = temp; // basa eleman ekledik ve head güncellendi

		cout << "dugumu ekleme islemi gerceklestirildi" << endl;

	}

	return head;
}

int main() {

	struct node* head = NULL;

	head = basaEkle(head, 11);
	head = basaEkle(head, 22);
	head = basaEkle(head, 33);
	head = basaEkle(head, 44);

	cout << head->data << "  ";
	cout << head->next->data << "  ";
	cout << head->next->next->data << "  ";

	struct node* temp = head;

	while (temp != NULL)
	{
		cout << temp->data << "  "; // düğümler arasında trevars işlemi gerçekleştiriliyor
		temp = temp->next;
	
	}

	return 0;
}