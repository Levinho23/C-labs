#include <stdio.h>

int main() {
	
	int a, b, c;
	printf("A ga son kiriting : \n");
	scanf("%d", &a);
	printf("B ga son kiriting : \n");
	scanf("%d", &b);
	printf("C ga son kiriting : \n");
	scanf("%d", &c);
	
	if(a>b&&a>c){
		printf("%d katta :", a);
	}else if(b>a&&b>c){
		printf("%d katta :", b);
	}else if(c>a&&c>b){
		printf("%d katta :", c);
	}else{
		printf("3 lasi ham teng : ");
	}
	
	return 0;
}

