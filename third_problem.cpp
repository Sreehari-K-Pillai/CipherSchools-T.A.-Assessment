#include <bits/stdc++.h>
int max(int a, int b) { return (a > b) ? a : b; }
void printknapSack(int W, int wt[], int val[], int n)
{
	int i, w;
	int K[n + 1][W + 1];
	for (i = 0; i <= n; i++) {
		for (w = 0; w <= W; w++) {
			if (i == 0 || w == 0)
				K[i][w] = 0;
			else if (wt[i - 1] <= w)
				K[i][w] = max(val[i - 1] +
					K[i - 1][w - wt[i - 1]], K[i - 1][w]);
			else
				K[i][w] = K[i - 1][w];
		}
	}
	int res = K[n][W];
	int weight_1;
	weight_1=res;
	
	w = W;
	printf("By selecting weights: [");
	for (i = n; i > 0 && res > 0; i--) {
		if (res == K[i - 1][w])
			continue;	
		else {

			
			printf("%d ", wt[i - 1]);
			res = res - val[i - 1];
			w = w - wt[i - 1];
		}
	}
	printf("] you will get maximum value of %d",weight_1);
}

int main()
{
	int val[] = {12,10,21,15};
	int wt[] = {2,1,3,2};
	int W = 7;
	int n = sizeof(val) / sizeof(val[0]);
	printknapSack(W, wt, val, n);
	return 0;
}
