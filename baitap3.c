# include <stdio.h>
int fatacial(n){
	if(n==0){
		return 1;
	}
	return n*fatacial(n-1);
}
int main(){
	printf("%d",fatacial(5));
}
