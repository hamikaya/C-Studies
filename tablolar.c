#include<stdio.h>
int main() {
	int sayilar[9], sayac = 0, tamamla = 0, enbuyuk = 0, tg = 1, tt = 1, bosluklar[9];
	while (tamamla == 0) { //klavyeden girilen sayýlarýn 50 den küçük olup olmadýðý kontrol edilen döngü
		sayac = 0;
		printf("50'den kucuk 9 adet sayi girin: ");
		scanf_s("%d %d %d %d %d %d %d %d %d", &sayilar[0], &sayilar[1], &sayilar[2], &sayilar[3], &sayilar[4], &sayilar[5], &sayilar[6], &sayilar[7], &sayilar[8]); //klavyeden girilen 9 adet sayý, sayilar dizisine aktarýlýyor
		for (int i = 0; i < 9; i++) {
			if (sayilar[i] >= 50) {
				sayac++; //50 ve 50'den büyük bir sayý girildiyse sayaç artýrýlýyor
			}
		}
		if (sayac == 0) tamamla = 1; //sayac sýfýra eþit ise while döngüsünün durmasý için tamamla deðiþkeni deðeri 1 olarak deðiþtiriliyor
		else printf("! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * !\nUYARI: Lutfen 50'den kucuk sayilar girin. \n! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * !\n"); //klavyeden girilen 50 veya 50'den yüksek bir deðer olursa kullanýcýya uyarý verilip deðerleri tekrar girmesi isteniyor
	}
	tamamla = 0; //yeni while döngüsü için tamamla deðiþkeni tekrar sýfýra tanýmlanýyor
	while (tamamla == 0) {
		printf("Lutfen tablo genisligi secin (1, 3, 5 ya da 7): ");
		scanf_s("%d", &tg); //klavyeden girilen deðer deðiþkene atanýyor
		if (tg != 1 && tg != 3 && tg != 5 && tg != 7) printf("! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * !\nUYARI: Lutfen 1, 3, 5 veya 7 degerini girin. \n! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * ! * !\n"); //klavyeden girilen deðer 1, 3, 5 veya 7 deðilse kullanýcýya uyarý verilip tekrar deðer girmesi isteniyor
		if (tg == 1 || tg == 3 || tg == 5 || tg == 7) tamamla = 1; //klavyeden girilen deðer 1, 3, 5 veya 7 deðerine eþit olduðunda tamamla deðiþkeninin deðeri 1 yapýlýyor ve while döngüsü duruyor
	}
	for (int j = 0; j < 9; j++) {//Tavan yüksekliðini bulabilmek için sayilar dizisindeki en büyük eleman tespit ediliyor
		if (enbuyuk < sayilar[j]) enbuyuk = sayilar[j];
	}
	printf("\nYATAY TABLO\n");
	for (int b = 0; b < 9; b++) {
		for (int k = 0; k <= enbuyuk + 1; k++) {//Tavan kýsmýn (+---+) yazdýrýldýðý döngü
			if (k == 0) printf("  +");
			else if (k == enbuyuk + 1) printf("+\n");
			else printf("-");
		}
		int sayi = 0;
		int gecici = enbuyuk - sayilar[b]; //Boþluk sayýsý ve çerçevelerin deðeri
		for (int l = 0; l < tg; l++) {//Satýr oluþturulan döngü
			if (sayilar[b] < 10) { //Sayý tek basamaklý ise bu döngüye girilip sayýnýn soluna fazladan 1 adet boþluk býrakýlýyor
				if (tg == 1 && l == 0) printf(" ");
				else if (tg == 3 && l == 1) printf(" ");
				else if (tg == 5 && l == 2) printf(" ");
				else if (tg == 7 && l == 3) printf(" ");
			}
			//Sayýlar yazdýrýlýyor. l deðiþkeni satýrý temsil ediyor. Tablo geniþliðine göre belirli satýrlarda sayýlar yazdýrýlýyor
			if (tg == 1 && l == 0) printf("%d", sayilar[b]);
			else if (tg == 3 && l == 1) printf("%d", sayilar[b]);
			else if (tg == 5 && l == 2) printf("%d", sayilar[b]);
			else if (tg == 7 && l == 3) printf("%d", sayilar[b]);
			else printf("  "); //Sayýlarýn yazdýrýlmayacaðý satýra sayý yerine boþluk ekleniyor
			for (int y = 0; y <= enbuyuk + 1; y++) { //Yýldýz ve duvarlarýn yazdýrýldýðý döngü
				if (y == 0) printf("|"); //y, 0 ise ilk olarak sol duvar yazdýrýlýyor
				else if (y == enbuyuk + 1) printf("|"); //sað duvar yazdýrýlýyor
				else if (y <= sayilar[b]) printf("*"); //yýldýzlar yazdýrýlýyor
				else printf(" "); //üst kýsýmdaki koþullar saðlanmadýðýnda, yýldýzlardan sonraki boþluklar yazdýrýlýyor
			}
			printf("\n"); //Yeni satýra geçiliyor
		}
	}
	for (int k = 0; k <= enbuyuk + 1; k++) {//Taban kýsmýn (+---+) yazdýrýldýðý döngü
		if (k == 0) printf("  +");
		else if (k == enbuyuk + 1) printf("+\n");
		else printf("-");
	}
	printf("\nDIKEY TABLO\n");
	for (int u = 0; u < 9; u++) { //Boþluk sayýlarýnýn bulunduðu döngü
		bosluklar[u] = enbuyuk - sayilar[u]; //En büyük sayýdan mevcut sayý çýkarýlarak mevcut sayýnýn üstündeki boþluk sayýsý bulunuyor
	}
	for (int i = 0; i < 9; i++) { //Tavan kýsmýn (+---+) yazdýrýldýðý döngü
		printf("+");
		for (int j = 0; j < tg; j++) printf("-");
		if (i == 8) printf("+");
	}
	for (int j = enbuyuk; j > 0; j--) { //SATIR
		for (int i = 0; i < 9; i++) { //SÜTUN
			if (i == 0) printf("\n");
			printf("|");
				if (bosluklar[i] > 0) { //Mevcut sayýnýn boþluk deðeri sýfýrdan yüksek ise ekrana boþluk yazdýrýlýyor ve boþluk deðeri 1 sayý eksiltiliyor
					for (int l = 0; l < tg; l++) printf(" ");
					bosluklar[i] = bosluklar[i] - 1;
				}
				else { //Boþluk sayýsý sýfýra eþit ise de ekrana yýldýzlar yazdýrýlýyor
					for (int l = 0; l < tg; l++) printf("*");
				}
				if (i == 8) printf("|"); //Satýr sonuna gelindiðinde sað duvar yazdýrýlýyor
		}
	}
	for (int i = 0; i < 9; i++) { //Taban kýsmýn (+---+) yazdýrýldýðý döngü
		if (i == 0) printf("\n");
		printf("+");
		for (int j = 0; j < tg; j++) printf("-");
		if (i == 8) printf("+");
	}
	printf("\n");
	for (int k = 0; k < 9; k++) {
		int sayi = sayilar[k];
		while (sayi >= 10) sayi = sayi / 10; //Mevcut sayýnýn ilk basamaðý bulunuyor
		//TG (Tablo geniþliði) deðerine göre, mevcut sayýnýn ilk basamaðý boþluklu halde yazdýrýlýyor
		if (tg == 1) printf(" %d", sayi);
		else if (tg == 3) printf("  %d ", sayi);
		else if (tg == 5) printf("   %d  ", sayi);
		else if (tg == 7) printf("    %d   ", sayi);
	}
	printf("\n"); //Sayýlarýn ikinci basamaklarý yazdýrýlmak üzere alt satýra geçiliyor
	for (int k = 0; k < 9; k++) {
		if (sayilar[k] >= 10) { //Mevcut sayý 10 veya 10'dan büyük mü diye kontrol ediliyor
			int son_basamak = sayilar[k] % 10; //Mevcut sayýnýn son basamaðý bulunuyor
			//TG (Tablo geniþliði) deðerine göre, mevcut sayýnýn son basamaðý boþluklu halde yazdýrýlýyor
			if (tg == 1) printf(" %d", son_basamak);
			else if (tg == 3) printf("  %d ", son_basamak);
			else if (tg == 5) printf("   %d  ", son_basamak);
			else if (tg == 7) printf("    %d   ", son_basamak);
		}
		else { //Mevcut sayý 10'dan küçük ise, görüntünün bozulmamasý için tg deðerine göre boþluk yazdýrýlýyor
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