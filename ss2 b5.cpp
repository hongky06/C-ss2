#include<stdio.h>
 int main (){
 	int length = 0;
 	int width = 0; 
 	 
	  scanf("%d",&length);
 	  scanf("%d",&width);
    
 	int chu_vi = (length + width) * 2;
 	printf ("chu vi cua h�nh chu nhat l� %d \n",chu_vi );
 	
 	int dien_tich = length * width ;
 	printf ("dien tich cua hinh chu nhat l� %d \n", dien_tich);
 	
 	
 	
 	return 0;
 }
