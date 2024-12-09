# include <stdio.h>
int so_hoan_hao(int n){
	int sum=0,i;
	for(i=1;i<n;i++){
		if(n%i==0){
		    sum=sum+i;
		}
	}
	return sum==n;
}
int main(){
	int a,b;
	printf("nhap so thu nhat: ");
	scanf("%d",&a);
	printf("nhap so thu hai: ");
	scanf("%d",&b);
	
	if(so_hoan_hao(a)){
		printf("%d la so hoan hao\n",a);
	}else{
		printf("%d khong phai la so hoan hao\n",a);
	}
	
	if(so_hoan_hao(b)){
		printf("%d la so hoan hao\n",b);
	}else{
		printf("%d khong phai la so hoan hao\n",b);
	}
	return 0;
}		
