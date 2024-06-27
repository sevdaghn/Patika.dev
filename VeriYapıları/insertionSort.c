//insertion Sort
#include<stdio.h>
#include<conio.h>
void printArray(int array[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}
}
void insertionSort(int array[],int size){
  int step;
   for(step=0;step<size;step++){
   	int key=array[step];
   	int j=step-1;
   	   while(key<array[j]&&j>=0){
   	   	   array[j+1]=array[j];
   	   	   j--;
	   }//while
	   array[j+1]=key;
   }//for
}//fonk
int main(){
	int data[]={22,27,16,2,18,6};
	int size=sizeof(data)/sizeof(data[0]);
	insertionSort(data,size);
	printf("Sorted array in Ascending Order:\n");
	printArray(data,size);
	
}
