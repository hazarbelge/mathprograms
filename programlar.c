#include <stdio.h>
#include <math.h>

void donus_menu() {

	jump:
	printf("\nCikmak istiyorsaniz 0'a, ana menuye donmek istiyorsaniz 1'ye basin.");
	fflush(stdout);
	int cikis;
	scanf("%d", &cikis);
	switch (cikis){

	case 0:
		break;
	case 1:
		ana_menu();
		break;
	default:
		goto jump;
	}
}

void sayisiralamak() {
	int b; //sayilar arrayindeki sayý adeti.
	printf("\nGirmek istediginiz sayi adetini girin: ");
	fflush(stdout);
	scanf("%d", &b);
	int sayilar[b];
	int i,a;
	int y;
	for(y=0; y<b; y++){
		printf("%d. sayiyi girin: ", y+1);
		fflush(stdout);
		scanf("%d", &sayilar[y]);
	}

	for(i=1; i<b; i++){
		for(a=0; a<(b-1); a++){
			if (sayilar[a] > sayilar[a+1])
			{
				int gecici;
				gecici = sayilar[a+1];
				sayilar[a+1] = sayilar[a];
				sayilar[a] = gecici;
			}
		}
	}
	int x;
	printf("Sayi Siralamasi: ");
	fflush(stdout);
	for (x=0; x < b; x++){
		if (x < b-1){
			printf("%d-", sayilar[x]);
		}
		else{
			printf("%d", sayilar[x]);
		}
	}
	int cikis;
	jump:
	printf("\nCikmak istiyorsaniz 0'a, tekrardan siralamak istiyorsaniz 1'e, "
			"ana menuye donmek istiyorsaniz 2'ye basin.");
	fflush(stdout);
	scanf("%d", &cikis);
	switch (cikis){

	case 0:
		break;
	case 1:
		sayisiralamak();
		break;
	case 2:
		ana_menu();
		break;
	default:
		goto jump;
	}
}

void kokbulmak(){
	int a,b,c;
	float delta;
	float x1,x2;
	int cikis;
	printf("\nax^2 + bx + c seklindeki denklemin: \n");
	fflush(stdout);
	printf("a = ");
	fflush(stdout);
	scanf("%d",&a);
	printf("b = ");
	fflush(stdout);
	scanf("%d",&b);
	printf("c = ");
	fflush(stdout);
	scanf("%d",&c);
	delta = pow(b,2) - 4*a*c;
	x1 = (-b - (sqrt(delta)) ) / 2*a;
	x2 = (-b + (sqrt(delta)) ) / 2*a;
	printf("\n Denklemin kokleri: \n");
	fflush(stdout);
	printf("x1 = %f \n", x1);
	fflush(stdout);
	printf("x2 = %f \n \n", x2);
	fflush(stdout);
	jump:
	printf("\nCikmak istiyorsaniz 0'a, tekrardan kok bulmak istiyorsaniz 1'e, "
			"ana menuye donmek istiyorsaniz 2'ye basin.");
	fflush(stdout);
	scanf("%d", &cikis);
	switch (cikis){

	case 0:
		break;
	case 1:
		kokbulmak();
		break;
	case 2:
		ana_menu();
		break;
	default:
		goto jump;
	}
}

void faktoriyel(){

	int i,a;
	long long int sonuc = 1;
	printf("\nFaktoriyelini almak istediginiz sayiyi girin: ");
	fflush(stdout);
	scanf("%d", &a);
	for(i=1; i<a+1; i++){

		sonuc = sonuc*i;

	}
	printf("%d! = %lld\n",a,sonuc);
	fflush(stdout);
	jump:
	printf("\nCikmak istiyorsaniz 0'a, tekrardan faktoriyel almak istiyorsaniz 1'e, "
				"ana menuye donmek istiyorsaniz 2'ye basin.");
	fflush(stdout);
	int cikis;
	scanf("%d", &cikis);
	switch (cikis){

	case 0:
		break;
	case 1:
		faktoriyel();
		break;
	case 2:
		ana_menu();
		break;
	default:
		goto jump;
	}


}

void kombinasyon(){

	int i,a, b;
	long long int sonuc1 = 1;
	long long int sonuc2 = 1;
	long long int sonuc3 = 1;
	long long int sonuc4;
	printf("\nKombinasyon islemini yapmak istediginiz sayilari girin: \n"
			"1.sayi = ");
	fflush(stdout);
	scanf("%d", &a);
	printf("2.sayi = ");
	fflush(stdout);
	scanf("%d", &b);
	for(i=1; i<a+1; i++){

		sonuc1 = sonuc1*i;

	}

	for(i=1; i<b+1; i++){

		sonuc2 = sonuc2*i;

	}
	for(i=1; i<a-b+1; i++){

		sonuc3 = sonuc3*i;

	}
	sonuc4 = sonuc1 / (sonuc2*sonuc3);
	printf("%d sayisinin %d'li kombinasyonu = %lld \n",a,b, sonuc4);
	fflush(stdout);
	jump:
	printf("\nCikmak istiyorsaniz 0'a, tekrardan kombinasyon hesaplamak icin 1'e, "
				"ana menuye donmek istiyorsaniz 2'ye basin.");
	fflush(stdout);
	int cikis;
	scanf("%d", &cikis);
	switch (cikis){

	case 0:
		break;
	case 1:
		kombinasyon();
		break;
	case 2:
		ana_menu();
		break;
	default:
		goto jump;
	}

}

void alan_hesaplama(){

	float a,b,h,a1,a2;
	float alan;
	float PI = 3.14;
	float r, r1, r2;
	jump:
	printf("\nAlan Hesaplama Programi\n\n"
				"0-Ana Menuye Donmek.\n"
				"1-Kare.\n"
				"2-Dikdortgen.\n"
				"3-Cember.\n"
				"4-Elips.\n"
				"5-Paralelkenar.\n"
				"6-Eskenar Ucgen.\n"
				"7-Ucgen.\n"
				"8-Yamuk.\n\n");
	fflush(stdout);
	printf("Yapmak istediginiz islem: ");
	fflush(stdout);
	int giris;
	scanf("%d", &giris);
	switch (giris){

	case 0:
		ana_menu();
		break;
	case 1:
		printf("Karenin bir kenarini girin: \n");
		fflush(stdout);
		printf("a = ");
		fflush(stdout);
		scanf("%f", &a);
		alan = a*a;
		printf("%.2f", alan);
		fflush(stdout);
		donus_menu();
		break;
	case 2:
		printf("Dikdortgenin farklý iki kenarini girin: \n");
		fflush(stdout);
		printf("a = ");
		fflush(stdout);
		scanf("%f", &a);
		printf("b = ");
		fflush(stdout);
		scanf("%f", &b);
		alan = a*b;
		printf("%.2f", alan);
		donus_menu();
		break;
	case 3:
		printf("Cemberin yaricapini girin: \n");
		fflush(stdout);
		printf("r = ");
		fflush(stdout);
		scanf("%f", &r);
		alan = PI*r*r;
		printf("%.2f", alan);
		donus_menu();
		break;
	case 4:
		printf("Elipsin iki yaricapini girin: \n");
		fflush(stdout);
		printf("r1 = ");
		fflush(stdout);
		scanf("%f", &r1);
		printf("r2 = ");
		fflush(stdout);
		scanf("%f", &r2);
		alan = PI*r1*r2;
		printf("%.2f", alan);
		donus_menu();
		break;
	case 5:
		printf("Paralelkenarin bir kenarini ve o kenara ait"
				"yuksekligini girin: \n");
		fflush(stdout);
		printf("a = ");
		fflush(stdout);
		scanf("%f", &a);
		printf("h = ");
		fflush(stdout);
		scanf("%f", &h);
		alan = a*h;
		printf("%.2f", alan);
		donus_menu();
		break;
	case 6:
		printf("Eskenar ucgenin bir kenarini girin: \n");
		fflush(stdout);
		printf("a = ");
		fflush(stdout);
		scanf("%f", &a);
		alan = a*a*(sqrt(3)/4);
		printf("%.2f", alan);
		donus_menu();
		break;
	case 7:
		printf("Ucgenin bir kenarini ve o kenara ait yuksekligini girin: \n");
		fflush(stdout);
		printf("a = ");
		fflush(stdout);
		scanf("%f", &a);
		printf("h = ");
		fflush(stdout);
		scanf("%f", &h);
		alan = a*h*(1/2);
		printf("%.2f", alan);
		donus_menu();
		break;
	case 8:
		printf("Yamugun alt ve ust kenarlarini ve yuksekligini girin: \n");
		fflush(stdout);
		printf("a1 = ");
		fflush(stdout);
		scanf("%f", &a1);
		printf("a2 = ");
		fflush(stdout);
		scanf("%f", &a2);
		printf("h = ");
		fflush(stdout);
		scanf("%f", &h);
		alan = ((a1+a2)*h)*(1/2);
		printf("%.2f", alan);
		donus_menu();
		break;
	}

}

void ana_menu() {

	jump:
	printf("\nThe Math Program by Hazar Belge\n\n"
			"0-Programdan cikmak.\n"
			"1-2.dereceden bir bilinmeyenli denklem cozmek.\n"
			"2-Girilen sayilari siralamak.\n"
			"3-Faktoriyel hesaplamak.\n"
			"4-Kombinasyon hesaplamak.\n"
			"5-Alan hesaplamak.\n\n");
	fflush(stdout);
	printf("Yapmak istediginiz islem: ");
	fflush(stdout);
	int giris;
	scanf("%d", &giris);
	switch (giris){

	case 0:
		break;
	case 1:
		kokbulmak();
		break;
	case 2:
		sayisiralamak();
		break;
	case 3:
		faktoriyel();
		break;
	case 4:
		kombinasyon();
		break;
	case 5:
		alan_hesaplama();
		break;
	default:
        goto jump;
	}
}

int main() {

	ana_menu();

}
