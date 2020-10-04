#include<iostream> 
#include<stdio.h> 
#include<algorithm> 

using namespace std; 

int ans[10001]; 

int main(void) 
{ 
	int N; 
	int x;
	
	scanf("%d", &N); 
	
	for (int i = 0; i < N; i++) 
	{ 
		scanf("%d", &x);
		ans[x]++; 
	} 
	for (int i = 1; i <= 10000; i++) 
	{ 
		for (int j = 0; j < ans[i]; j++) 
		{ 
			printf("%d\n", i); 
		} 
	} 
}
