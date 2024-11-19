#include<stdio.h>
int main(){
  float ban_kinh = 0;
  float pi = 3.14; 
  
  scanf ("%f",&ban_kinh);
  
  float chu_vi = 2 * pi * ban_kinh;
  printf ("chu vi cua hinh tron la %.2f \n",chu_vi);
  
  float dien_tich = ban_kinh * ban_kinh ;
  printf ("dien tich cua hinh tron la %.2f \n",dien_tich);
	return 0; 
}
