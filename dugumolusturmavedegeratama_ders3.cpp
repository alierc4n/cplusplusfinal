#include <iostream>
using namespace std;

struct ogrenci  // düğüm oluşturma kalıbımızı oluşturduk
{
	string ad;
	string soyad;
	char cinsiyet;
	int yas;
	struct ogrenci * next;
};

int main() {

	struct ogrenci *o1 = new ogrenci(); // düğüm oluşturduk, bellekten yer tahsis ettik.
	struct ogrenci *o2 = new ogrenci();
	struct ogrenci *o3 = new ogrenci();

	o1->ad = "orhan";
	o1->soyad = "avci";
	o1->cinsiyet = 'e';
	o1->yas = 18;

	o2->ad = "oktay";
	o2->soyad = "veli";
	o2->cinsiyet = 'e';
	o2->yas = 19;

	o3->ad = "pinar";
	o3->soyad = "avci";
	o3->cinsiyet = 'k';
	o3->yas = 18;

	o1->next = o2;
	o2->next = o3;
	o3->next = NULL;

	struct ogrenci* temp = o1;
	
	while (temp!=NULL)
	{
		cout << temp->ad << "  " << temp->soyad << "  " << temp->cinsiyet << "  " << temp->yas << endl;
		temp = temp->next;
	}




	return 0;
}