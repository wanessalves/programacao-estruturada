#include <stdio.h>
#include <math.h>
int main(){
	
	double a, b, c, delta, r1, r2;
	
	scanf("%lf %lf %lf", a, b, c);
	
	delta = pow(b,2) - 4*a*c;
	printf("%lf",delta);
	
	if(a==0 || delta<0){
		printf("Impossivel de calcular");
	}
	
	return 0;
}
