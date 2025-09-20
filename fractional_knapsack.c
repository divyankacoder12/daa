# include<stdio.h>
void knapsack(int n, float weight[], float profit[], float capacity) {
  float totalProfit = 0.0;
	int i;
	for(i = 0; i < n; i++){
		if(capacity == 0.0)
			break;
		if(weight[i] <= capacity){
			totalProfit += profit[i];
			capacity -= weight[i];
		} else{
			totalProfit += profit[i]*(capacity/weight[i]);
			capacity = 0.0;
		}
	}
	printf("Maximum profit is:- %f\n",totalProfit);
    
}

int main() {
	float weight[20], profit[20], capacity;
	int num, i, j;
	float ratio[20], temp;
	printf("Enter the no. of objects: ");
	scanf("%d", &num);
	printf("Enter the weights and profits of each object:\n");
	for (i = 0; i < num; i++) {
		scanf("%f %f", &weight[i], &profit[i]);
	}
	printf("Enter the capacity of knapsack:");
	scanf("%f", &capacity);
	for (i = 0; i < num; i++) {
}
