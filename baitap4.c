# include <stdio.h>
# include<stdio.h>
int  arrMax(int a[]){
    int i,max;
	max=a[0];
	for(i=1;i<5;i++){
        if(a[i]>max){
        	max=a[i];
		}
	}
}
int main(){
    int a[]={1,2,3,4,5};
	printf("so lon nhat trong mang la: %d", arrMax(a));
	return 0;
}
