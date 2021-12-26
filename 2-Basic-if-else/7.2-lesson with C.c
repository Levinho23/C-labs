#include <stdio.h>

int main(){
  
  int hafta_kunlari;
  scanf("%d", &hafta_kunlari);
  switch(hafta_kunlari){

case 1:
    printf("Monday :");
    break;
case 2:
    printf("Thusday:");
    break;

case 3:
    printf("Wensday :");
    break;

case 4:
    printf("Thuesday :");
    break;

case 5:
    printf("Friday :");
    break;
    
case 6:
    printf("Satuday :");
    break;
    
case 7:
    printf("Sunday :");
    break;

    default:
        printf("There isn't this week! I'm really sorry! :");
}
        
    return 0;
        
}
