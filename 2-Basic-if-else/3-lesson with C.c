#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int oylangan_raqam, biz_aytgan_raqam;
	
	srand(time(NULL));
	oylangan_raqam = rand()%10;
	
	printf("Mana o'sha raqam %d \n", oylangan_raqam);
	printf("Qiymatni kiriting : \n");
	scanf("%d : ", &biz_aytgan_raqam);
	
	if(biz_aytgan_raqam > oylangan_raqam){
		printf("*** Sal oshib ketdi! *** \n");
	}else if(biz_aytgan_raqam < oylangan_raqam){
		printf("** Sal tushib ketdingiz! ** \n");
	}else{
		printf("Topdingiz.....");
	}
	
	
	
	return 0;
}
