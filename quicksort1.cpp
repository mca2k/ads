#include<iostream.h>
#include<conio.h>

int Array[] = {4,6,3,2,1,9,7};

void printline(int count) {
int i;
for(i=0;i<count-1;i++){
cout<<"=";
}
cout<<" = \n";
}

void display(){
int i;
cout<<"[";
//navigate through all items
for(i = 0;i < 7; i++) {
cout<<Array[i]<<" ";
}
cout<<"] \n";
}

void swap(int num1,int num2){
int temp = Array[num1];
Array[num1]= Array[num2];
Array[num2] = temp;
}

int partition(int left,int right,int pivot){
int leftPointer = left -1;
int rightPointer=right;
while(1) {
while(Array[++leftPointer]<pivot){
//donothing
}
while(rightPointer>0 && Array[--rightPointer] > pivot){
//donothing
}

if(leftPointer>=rightPointer){
break;
}else{
cout<<"item swapped "<<Array[leftPointer]<<" "<<Array[rightPointer]<<endl;
swap(leftPointer,rightPointer);
}
}

cout<<"pivot swapped "<<Array[leftPointer]<<" "<<Array[right]<<endl;
swap(leftPointer,right);
cout<<"UpdatedArray: ";
display();
return leftPointer;
}

void quickSort(int left,int right){
if(right-left <= 0) {
return;
}else{
int pivot= Array[right];
int partitionPoint=partition(left,right,pivot);
quickSort(left,partitionPoint-1);
quickSort(partitionPoint+1,right);
}
}

int main() {
clrscr();
cout<<"InputArray: ";
display();
printline(50);
quickSort(0,7-1);
cout<<"OutputArray: ";
display();
printline(50);
getch();
return 0;
}