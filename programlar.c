#include <stdio.h>
#include <math.h>

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

void ana_menu() {

	jump:
	printf("\nThe Math Program by Hazar Belge\n\n"
			"0-Programdan cikmak.\n"
			"1-2.dereceden bir bilinmeyenli denklem cozmek.\n"
			"2-Girilen sayilari siralamak.\n"
			"3-Faktoriyel hesaplamak.\n\n");
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
	default:
        goto jump;
	}
}

int main() {

	ana_menu();

}
