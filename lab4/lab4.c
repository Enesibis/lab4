#include <stdio.h>
#include <math.h>
#define sayi 10

int main()
{

	//8 elemanl� float diziye klavyeden de�er girin. Girilen de�erlerin ortalamas�n� hesaplay�p ekrana yazd�r�n.

	/*int ort, i, toplam;
	toplam = 0;

	float a[sayi];

	for ( i = 0; i < sayi ; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%f", &a[i]);
		toplam += a[i];
	}
	ort = toplam / 2;
	printf("Ortalama: %d", ort);
	*/



	//Klavyeden -1 girilene kadar girilen say�lar� diziye aktaran, ard�ndan her eleman�n karesini ekrana basan program� yaz�n�z. (Dizi eleman say�s� max 10 olacakt�r.)

	/*int a[sayi], i, x, kare;


	for ( i = 0; i < sayi; i++)
	{
		printf("Bir sayi giriniz:");
		scanf_s("%d", &x);

		if (x == -1)
		{
			printf("Diziden cikis yaptiniz.");
		}
		else
		{
			a[i] = x;
			kare = pow(a[i], 2);
			printf("a[%d] nin karesi = %d\n", i, kare);

		}
	}*/


	//Maksimum 5 basamakl� say�n�n basamaklar�ndaki rakamlar� diziye atan ve ekrana basan program� yaz�n�z.

	/*int a[sayi], basamak, i, x, kalan, y;
	basamak = 0;
	kalan = 0;
	printf("Bir Sayi Giriniz: ");
	scanf_s("%d", &x);
	
	y = x;

	while (y > 0)
	{
		y = y / 10;
		basamak++;
	}
	if (basamak>5)
	{
		printf("Sayi Maksimum Basamak Sayisinin Uzerinde!!");
	}
	else
	{
		for (i = 0; i < basamak; i++)
		{
		kalan = x % 10;
		a[i] = kalan;
		printf("a[%d] = %d\n", i, kalan);
		x = x / 10;
		}
	}*/


	//10 elemanl� diziyi klavyeden alan ve tersten ekrana yazan program� yaz�n�z. 

	int a[sayi], i,swap;

	printf("Bir Sayi Giriniz: ");

	for ( i = 0; i < sayi; i++)
	{
		scanf_s("%d", &a[i]);
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}

