#include <iostream>
using namespace std;

struct node { // düğüm oluşturma kalıbı
	int data;
	struct node* next;
};

int main()
{
	struct node* n1 = new node(); // ilk düğüm oluştu ve bellekte yer ayrıldı
	struct node* n2 = new node(); // ikinci düğüm oluştu ve bellekte yer ayrıldı
	struct node* n3 = new node(); // üçüncü düğüm oluştu ve bellekte yer ayrıldı
	
	n1->data = 11; // ilk düğüm verileri girildi
	n2->data = 22; // ikinci düğüm verileri girildi
	n3->data = 33; // üçüncü düğüm verileri girildi

	n1->next = n2; // ilk düğümün göstericisi ikinci düğüm olduğu söylendi
	n2->next = n3; // ikinci düğümün göstericisi üçüncü düğüm olduğu söylendi
	n3->next = NULL; // üçüncü düğümün son düğüm olduğu ve bir şey göstermeyeceği söylendi

	/* 
	cout << n1->data << " "; // birinci düğüm çıktısı
	cout << n2->data << " "; // ikinci düğüm çıktısı
	cout << n3->data << " "; // üçüncü düğüm çıktısı
	*/

	// ya da bu şekilde yazılır

	struct node* temp = n1; // birinci düğümü gösteren geçici düğüm

	while (temp!=NULL) // temp NULL'a eşit olmayana kadar devam etsin
	{
		cout << temp->data << " ";  // yazdırma komutu
		temp = temp->next;
	}
  
	return 0;
}


------------------------------------------------------------------

// class ile gösterimi

#include <iostream>

using namespace std;

class node {

public:
	int data;
	node* next;
	node(int data) {
		this->data = data;
	}

};

int main() {

	node *n1 = new node(11); // nesne tanımladık ve değeri atadık (nesne = düğüm)
	node *n2 = new node(22);
	node *n3 = new node(33);

	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;

	node* temp = n1;
	while (temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}

	return 0;
}