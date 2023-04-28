#include<stdio.h>
#include<stdlib.h>

int main() {
	int n,x[100000],max,sum,i;
	scanf("%d",&n);
	max = -99999;
	sum = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	for (i = 0; i < n; i++) {
		sum = sum + x[i];
		if (sum > max) {
			max = sum;
		}
		if (sum < 0) {
			sum = 0;
		}
	}
	printf("%d",max);
	return 0;
}
