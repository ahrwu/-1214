#include<stdio.h>
int main(){
	int n, k = 0, clapCnt = 0;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		k = i;
		while(k){
			if(k % 10 ==3 || k % 10 == 6 || k % 10 == 9){
				clapCnt += 1;
			}
			k /= 10;
		}
	}
	printf("%d", clapCnt);
}
