#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		int sum_y = 0, sum_k = 0;
		
		for(int j = 0; j < 9; j++){
			int y, k;
			scanf("%d %d", &y, &k);
			
			sum_y += y;
			sum_k += k;
		}
		
		if(sum_y > sum_k){
			printf("Yonsei\n");
		}else if(sum_y < sum_k){
			printf("Korea\n");
		}else{
			printf("Draw\n");
		}
	}
}
