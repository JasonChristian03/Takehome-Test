#include<stdio.h>
int main(){
	int L, B;
	scanf("%d%d",&L,&B);
	int area=L*B;
	int peri=(L+B)*2;
	if(area>peri){
		printf("Area\n%d",area);
	}else if(area<peri){
		printf("Peri\n%d",peri);
	}else{
		printf("Eq\n%d",area);
	}
	return 0;
}
