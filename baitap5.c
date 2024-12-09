# include <stdio.h>
int so_nguyen_to(int n){
	if(n<10){
		switch(n){
			case 2:
			case 3:
			case 5:
		    case 7:
		    	return 1;
		}
	}	
	if(n%2!=0&&n%3!=0&&n%5!=0&&n%7!=0){
		return 1;
	}
	return 0;
}
int main(){
	int a,b;
	printf("nhap so thu nhat: ");
	scanf("%d",&a);
	printf("nhap so thu hai: ");
	scanf("%d",&b);
	
	if(so_nguyen_to(a)){
		printf("%d la so nguyen to\n",a);
	}else{
		printf("%d khong phai la so nguyen to\n",a);
	}
	
	if(so_nguyen_to(b)){
		printf("%d la so nguyen to\n",b);
	}else{
		printf("%d khong phai la so nguyen to\n",b);
	}
	return 0;
}		

