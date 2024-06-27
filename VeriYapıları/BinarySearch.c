#include<stdio.h>
int binarySearch(int array[],int x,int low,int high){
	while(low<=high){
		int mid=low+(high-low)/2;
		if(array[mid]==x)
		    return mid;
		if(array[mid]<x)
		   low=mid+1;
		else
		   high=mid-1;
	}
	return -1;
}
int main(){
	int array[]={7, 5, 1, 8, 3, 6, 0, 9, 4, 2};
	int n=sizeof(array)/sizeof(array[0]);
	int x=9;
	int sonuc=binarySearch(array,x,0,n-1);
	if(sonuc==-1)
		printf("Bulunamadi\n");
	else
	    printf("Elemanin bulundugu indis:%d dir\n",sonuc);

	return 0;
	
}
