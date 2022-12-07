/**************************
**					SAKARYA ÜNÝVERSÝTESÝ
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI…...:1
**				ÖÐRENCÝ ADI...............:MUHAMMED FATÝH YILDIRIM
**				ÖÐRENCÝ NUMARASI.:G211210379
**				DERS GRUBU…………:2-A
**************************/


#include <iostream>
#include <locale.h>
#include <stdio.h>   
#include <stdlib.h>    
#include <time.h>       
using  namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Turkish");
	string yeni = "";
	string rastgelesehir[15];
	int indis[14] = { 0 };
	string sehir[81] = { "adana", "adýyaman", "afyonkarahisar", "aðrý", "aksaray", "amasya", "ankara", "antalya", "ardahan", "artvin", "aydýn", "balýkesir", "bartýn", "batman", "bayburt",
		"bilecik", "bingöl", "bitlis", "bolu", "burdur", "bursa", "çanakkale", "çankýrý", "çorum", "denizli", "diyarbakýr", "düzce", "edirne", "elazýð", "erzincan", "erzurum", "eskiþehir"
		, "gaziantep", "giresun", "gümüþhane", "hakkâri", "hatay", "ýðdýr", "ýsparta", "istanbul", "izmir", "kahramanmaraþ", "karabük", "karaman", "kars", "kastamonu", "kayseri", "kilis",
		"kýrýkkale", "kýrklareli", "kýrþehir", "kocaeli", "konya", "kütahya", "malatya", "manisa", "mardin", "mersin", "muðla", "muþ", "nevþehir", "niðde", "ordu", "osmaniye", "rize",
		"sakarya",	"samsun", "þanlýurfa", "siirt", "sinop", "sivas", "þýrnak", "tekirdað", "tokat", "trabzon", "tunceli", "uþak", "van", "yalova", "yozgat", "zonguldak" };
	int enaz = sehir[0].length();
	for (int i = 0; i < 81; i++)
	{
		if (enaz > sehir[i].size())
			enaz = sehir[i].size();
	}
	int encok = sehir[0].size();
	for (int i = 0; i < 81; i++)
	{
		if (encok < sehir[i].size())
			encok = sehir[i].size();
	}
	cout << " en az :" << enaz << endl;
	cout << " en çok :" << encok << endl;
	int control = 0;
	for (int i = enaz; i <= encok; i++)
	{
		cout << i << " : ";

		for (int j = 0; j < 100000; j++)
		{
			control = 0;
			for (int s = 0; s < i; s++)
			{
				rastgelesehir[s] = sehir[rand() % 81];
			}
			int minimum = rastgelesehir[0].length();
			for (int k = 0; k < i; k++)
			{
				if (minimum > rastgelesehir[k].length())
					minimum = rastgelesehir[k].length();
			}
			for (int k = 0; k < minimum; k++)
			{
				yeni = "";
				for (int t = 0; t < i; t++)
					yeni += rastgelesehir[t].at(k);
				for (int x = 0; x < 81; x++)
				{
					if (sehir[x] == yeni)
					{
						cout << yeni << endl;
						control = 1;
					}
				}
			}
			if (control == 1)
				break;
		}
		if (control == 0 && i != enaz)
			cout << "bulunamadý" << endl;
	}
}