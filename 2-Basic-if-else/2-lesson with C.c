#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int son_raqami, raqam_soni;
	
	srand(time(NULL));
	son_raqami = rand()%10;
	
	printf("Qiymatni kiriting : \n");
	scanf("%d : ", &raqam_soni);
	
	if(son_raqami == raqam_soni){
		printf("**** Ha topdingiz! **** \n");
	}else{
		printf("Yo'q topa olmadingiz");
	}
	
	
	
	return 0;
}
