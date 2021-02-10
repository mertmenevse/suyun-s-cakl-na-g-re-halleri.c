#include <stdio.h>
int main(){
	
	int sicaklik;
	
	printf("Suyun sicakligini giriniz=");
	scanf("%d",&sicaklik);
	
	if(sicaklik<0){
		printf("Suyun sicakligi %d ve kati haldedir.",sicaklik);
	}
	else if(0<sicaklik && sicaklik<100){
		printf("Suyun sicakligi %d ve sivi haldedir.",sicaklik);
	}
	else{
		printf("Suyun sicakligi %d ve gaz haldedir.",sicaklik);
	}
		
	
	
	
	
	return 0;
}
