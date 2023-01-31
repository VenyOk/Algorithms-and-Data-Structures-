

#include <stdio.h>



int main(){

	long long num;
	scanf("%lld",&num);
	long i=0;
	long k=0;
	long long fib1=2;
	long long fib2=1;
	long long t=0;
	while (fib1<=num){
		t=fib2;
		fib2=fib1;
		fib1=t+fib1;
		i++;
	}

	if (fib1>num){
		t=fib1;
		fib1=fib2;
		fib2=t-fib2;
	}
	char ans[100000] = "";
	while (num>0){
		if (fib1<=num){
			ans[k]='1';
			num-=fib1;
		}
		else
		{
			ans[k]='0';
		}

		t=fib1;
		fib1=fib2;
		fib2=t-fib2;
		k++;

	}
	while (i+1>k){
		ans[k]='0';
		k++;
		
	}
	printf("%s\n",&ans);




	return 0;
}

