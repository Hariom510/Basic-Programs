#include<stdio.h>
#include<math.h>
void main(){
    int n, rev = 0;
		printf("enter the no:\n");
        scanf("%d", &n);
		 for (int i =0 ;n > 0; n/=10) {
			rev = rev + (n % 10) * (pow(2,i));
			i++;
		}
		printf("Equivalent decimal no:%d", rev);
}
		