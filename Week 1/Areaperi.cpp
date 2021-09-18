#include <stdio.h>

int main(){
	int luas, panjang;
	scanf("%d", &panjang);
	scanf("%d", &lebar);
	
	int perimeter = 2*(panjang+lebar);
	int area = panjang*lebar;
	
	if(area == perimeter){
		printf("Eq\n");
		printf("%d\n", area);
		
	}else if(area > perimeter){
		printf("Area\n");
		printf("%d\n", area);
		
	}else if( area < perimeter){
		printf("Perimeter\n");
		printf("%d\n", perimeter);
		
	}
	return 0;
}
