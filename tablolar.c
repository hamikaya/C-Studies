#include<stdio.h>
int main() {
	int sayilar[9], sayac = 0, tamamla = 0, enbuyuk = 0, tg = 1, tt = 1, bosluklar[9];
	while (tamamla == 0) { //klavyeden girilen say�lar�n 50 den k���k olup olmad��� kontrol edilen d�ng�
		sayac = 0;
		printf("50'den kucuk 9 adet sayi girin: ");
		scanf_s("%d %d %d %d %d %d %d %d %d", &sayilar[0], &sayilar[1], &sayilar[2], &sayilar[3], &sayilar[4], &sayilar[5], &sayilar[6], &sayilar[7], &sayilar[8]); //klavyeden girilen 9 adet say�, sayilar dizisine aktar�l�yor
		for (int i = 0; i < 9; i++) {
			if (sayilar[i] >= 50) {
				sayac++; //50 ve 50'den b�y�k bir say� girildiyse saya� art�r�l�yor
			}
		}
		if (sayac == 0) tamamla = 1; //sayac s�f�ra e�it ise while d�ng�s�n�n durmas� i�in tamamla de�i�keni de�eri 1 olarak de�i�tiriliyor
		else printf("! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * !\nUYARI: Lutfen 50'den kucuk sayilar girin. \n! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * !\n"); //klavyeden girilen 50 veya 50'den y�ksek bir de�er olursa kullan�c�ya uyar� verilip de�erleri tekrar girmesi isteniyor
	}
	tamamla = 0; //yeni while d�ng�s� i�in tamamla de�i�keni tekrar s�f�ra tan�mlan�yor
	while (tamamla == 0) {
		printf("Lutfen tablo genisligi secin (1, 3, 5 ya da 7): ");
		scanf_s("%d", &tg); //klavyeden girilen de�er de�i�kene atan�yor
		if (tg != 1 && tg != 3 && tg != 5 && tg != 7) printf("! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * !\nUYARI: Lutfen 1, 3, 5 veya 7 degerini girin. \n! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * !\n"); //klavyeden girilen de�er 1, 3, 5 veya 7 de�ilse kullan�c�ya uyar� verilip tekrar de�er girmesi isteniyor
		if (tg == 1 || tg == 3 || tg == 5 || tg == 7) tamamla = 1; //klavyeden girilen de�er 1, 3, 5 veya 7 de�erine e�it oldu�unda tamamla de�i�keninin de�eri 1 yap�l�yor ve while d�ng�s� duruyor
	}
	for (int j = 0; j < 9; j++) {//Tavan y�ksekli�ini bulabilmek i�in sayilar dizisindeki en b�y�k eleman tespit ediliyor
		if (enbuyuk < sayilar[j]) enbuyuk = sayilar[j];
	}
	printf("\nYATAY TABLO\n");
	for (int b = 0; b < 9; b++) {
		for (int k = 0; k <= enbuyuk + 1; k++) {//Tavan k�sm�n (+---+) yazd�r�ld��� d�ng�
			if (k == 0) printf("  +");
			else if (k == enbuyuk + 1) printf("+\n");
			else printf("-");
		}
		int sayi = 0;
		int gecici = enbuyuk - sayilar[b]; //Bo�luk say�s� ve �er�evelerin de�eri
		for (int l = 0; l < tg; l++) {//Sat�r olu�turulan d�ng�
			if (sayilar[b] < 10) { //Say� tek basamakl� ise bu d�ng�ye girilip say�n�n soluna fazladan 1 adet bo�luk b�rak�l�yor
				if (tg == 1 && l == 0) printf(" ");
				else if (tg == 3 && l == 1) printf(" ");
				else if (tg == 5 && l == 2) printf(" ");
				else if (tg == 7 && l == 3) printf(" ");
			}
			//Say�lar yazd�r�l�yor. l de�i�keni sat�r� temsil ediyor. Tablo geni�li�ine g�re belirli sat�rlarda say�lar yazd�r�l�yor
			if (tg == 1 && l == 0) printf("%d", sayilar[b]);
			else if (tg == 3 && l == 1) printf("%d", sayilar[b]);
			else if (tg == 5 && l == 2) printf("%d", sayilar[b]);
			else if (tg == 7 && l == 3) printf("%d", sayilar[b]);
			else printf("  "); //Say�lar�n yazd�r�lmayaca�� sat�ra say� yerine bo�luk ekleniyor
			for (int y = 0; y <= enbuyuk + 1; y++) { //Y�ld�z ve duvarlar�n yazd�r�ld��� d�ng�
				if (y == 0) printf("|"); //y, 0 ise ilk olarak sol duvar yazd�r�l�yor
				else if (y == enbuyuk + 1) printf("|"); //sa� duvar yazd�r�l�yor
				else if (y <= sayilar[b]) printf("*"); //y�ld�zlar yazd�r�l�yor
				else printf(" "); //�st k�s�mdaki ko�ullar sa�lanmad���nda, y�ld�zlardan sonraki bo�luklar yazd�r�l�yor
			}
			printf("\n"); //Yeni sat�ra ge�iliyor
		}
	}
	for (int k = 0; k <= enbuyuk + 1; k++) {//Taban k�sm�n (+---+) yazd�r�ld��� d�ng�
		if (k == 0) printf("  +");
		else if (k == enbuyuk + 1) printf("+\n");
		else printf("-");
	}
	printf("\nDIKEY TABLO\n");
	for (int u = 0; u < 9; u++) { //Bo�luk say�lar�n�n bulundu�u d�ng�
		bosluklar[u] = enbuyuk - sayilar[u]; //En b�y�k say�dan mevcut say� ��kar�larak mevcut say�n�n �st�ndeki bo�luk say�s� bulunuyor
	}
	for (int i = 0; i < 9; i++) { //Tavan k�sm�n (+---+) yazd�r�ld��� d�ng�
		printf("+");
		for (int j = 0; j < tg; j++) printf("-");
		if (i == 8) printf("+");
	}
	for (int j = enbuyuk; j > 0; j--) { //SATIR
		for (int i = 0; i < 9; i++) { //S�TUN
			if (i == 0) printf("\n");
			printf("|");
				if (bosluklar[i] > 0) { //Mevcut say�n�n bo�luk de�eri s�f�rdan y�ksek ise ekrana bo�luk yazd�r�l�yor ve bo�luk de�eri 1 say� eksiltiliyor
					for (int l = 0; l < tg; l++) printf(" ");
					bosluklar[i] = bosluklar[i] - 1;
				}
				else { //Bo�luk say�s� s�f�ra e�it ise de ekrana y�ld�zlar yazd�r�l�yor
					for (int l = 0; l < tg; l++) printf("*");
				}
				if (i == 8) printf("|"); //Sat�r sonuna gelindi�inde sa� duvar yazd�r�l�yor
		}
	}
	for (int i = 0; i < 9; i++) { //Taban k�sm�n (+---+) yazd�r�ld��� d�ng�
		if (i == 0) printf("\n");
		printf("+");
		for (int j = 0; j < tg; j++) printf("-");
		if (i == 8) printf("+");
	}
	printf("\n");
	for (int k = 0; k < 9; k++) {
		int sayi = sayilar[k];
		while (sayi >= 10) sayi = sayi / 10; //Mevcut say�n�n ilk basama�� bulunuyor
		//TG (Tablo geni�li�i) de�erine g�re, mevcut say�n�n ilk basama�� bo�luklu halde yazd�r�l�yor
		if (tg == 1) printf(" %d", sayi);
		else if (tg == 3) printf("  %d ", sayi);
		else if (tg == 5) printf("   %d  ", sayi);
		else if (tg == 7) printf("    %d   ", sayi);
	}
	printf("\n"); //Say�lar�n ikinci basamaklar� yazd�r�lmak �zere alt sat�ra ge�iliyor
	for (int k = 0; k < 9; k++) {
		if (sayilar[k] >= 10) { //Mevcut say� 10 veya 10'dan b�y�k m� diye kontrol ediliyor
			int son_basamak = sayilar[k] % 10; //Mevcut say�n�n son basama�� bulunuyor
			//TG (Tablo geni�li�i) de�erine g�re, mevcut say�n�n son basama�� bo�luklu halde yazd�r�l�yor
			if (tg == 1) printf(" %d", son_basamak);
			else if (tg == 3) printf("  %d ", son_basamak);
			else if (tg == 5) printf("   %d  ", son_basamak);
			else if (tg == 7) printf("    %d   ", son_basamak);
		}
		else { //Mevcut say� 10'dan k���k ise, g�r�nt�n�n bozulmamas� i�in tg de�erine g�re bo�luk yazd�r�l�yor
			if (tg == 1) printf("  ");
			else if (tg == 3) printf("    ");
			else if (tg == 5) printf("      ");
			else if (tg == 7) printf("        ");
		}
	}

	getchar();
	getchar();
	getchar();
}