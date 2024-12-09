# include<stdio.h>
void array(int a[]){
    int i;
	for(i=0;i<5;i++){
	    printf("a[%d]= %d \n",i,a[i]);
	}
}
int main(){
    int a[]={1,2,3,4,5};
    array(a);
    return 0;
}
