/**************************
**					SAKARYA �N�VERS�TES�
**			         B�LG�SAYAR VE B�L���M B�L�MLER� FAK�LTES�
**				    B�LG�SAYAR M�HEND�SL��� B�L�M�
**				          PROGRAMLAMAYA G�R��� DERS�
**
**				�DEV NUMARASI�...:1
**				��RENC� ADI...............:MUHAMMED FAT�H YILDIRIM
**				��RENC� NUMARASI.:G211210379
**				DERS GRUBU����:2-A
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
	string sehir[81] = { "adana", "ad�yaman", "afyonkarahisar", "a�r�", "aksaray", "amasya", "ankara", "antalya", "ardahan", "artvin", "ayd�n", "bal�kesir", "bart�n", "batman", "bayburt",
		"bilecik", "bing�l", "bitlis", "bolu", "burdur", "bursa", "�anakkale", "�ank�r�", "�orum", "denizli", "diyarbak�r", "d�zce", "edirne", "elaz��", "erzincan", "erzurum", "eski�ehir"
		, "gaziantep", "giresun", "g�m��hane", "hakk�ri", "hatay", "��d�r", "�sparta", "istanbul", "izmir", "kahramanmara�", "karab�k", "karaman", "kars", "kastamonu", "kayseri", "kilis",
		"k�r�kkale", "k�rklareli", "k�r�ehir", "kocaeli", "konya", "k�tahya", "malatya", "manisa", "mardin", "mersin", "mu�la", "mu�", "nev�ehir", "ni�de", "ordu", "osmaniye", "rize",
		"sakarya",	"samsun", "�anl�urfa", "siirt", "sinop", "sivas", "��rnak", "tekirda�", "tokat", "trabzon", "tunceli", "u�ak", "van", "yalova", "yozgat", "zonguldak" };
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
	cout << " en �ok :" << encok << endl;
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
			cout << "bulunamad�" << endl;
	}
}