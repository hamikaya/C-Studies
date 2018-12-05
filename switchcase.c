#include<stdio.h>
int main() {
	int islemturu, birincisayi, ikincisayi;
	printf("//////////////////\n 1- Toplama\n 2- Cikarma\n 3- Carpma\n 4- Bolme\n//////////////////\n\nYapmak istediginiz islemi secin:");
	scanf("%d", &islemturu);
	if (islemturu <= 4 && islemturu != 0) {
		printf("Birinci sayiyi girin: ");
		scanf("%d", &birincisayi);
		printf("Ikinci sayiyi girin: ");
		scanf("%d", &ikincisayi);
	}
	switch (islemturu)
	{
	case 1: {
		printf("\nToplama islemi sonucu: %d + %d = %d", birincisayi, ikincisayi, birincisayi+ikincisayi);
		break;
			}
	case 2: {
		printf("\nCikarma islemi sonucu: %d - %d = %d", birincisayi, ikincisayi, birincisayi-ikincisayi);
		break;
			}
	case 3: {
		printf("\nCarpma islemi sonucu: %d * %d = %d", birincisayi, ikincisayi, birincisayi*ikincisayi);
		break;
			}
	case 4: {
		printf("\nBolme islemi sonucu: %d / %d = %d", birincisayi, ikincisayi, birincisayi/ikincisayi);
		break;
			}
	default:
		printf("\nHatali sayi girdiniz.");
		break;
	}
	getchar();
	getchar();
	getchar();

}
