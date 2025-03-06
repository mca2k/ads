#include<iostream.h>
#include<conio.h>

class Queue {
int arr [10];
int front, rear, size;
public:

Queue(){
front=-1;
rear=-1;
size = 0;
}

void enqueue(int num)//Insert item in Queue
{

if(size >= 10){
cout<<"\n Queue is FULL ";
}
else
{
rear = (rear + 1) % 10;   
if(front == -1){
front = rear;
}
arr[rear]=num;
size++;
}
}


void delqueue(){
int item;
if(size <= 0)
{
cout<<"\n Queue is EMPTY ";
}
else
{
item=arr[front];
cout<<"\n Item deleted is "<<item;
front = (front + 1) % 10;
size--;
}
}

void display(){
int i = front, s = size;
cout<<"\n Queue Elements \n";

if (i == -1) {
i= 0;
}

while(s > 0){
cout<<" "<<arr[i];
i = (i+1) % 10;
s--;
}
}

};

int main()
{
clrscr();
Queue Q1;
int choice,item;
do{
cout<<"\n 1.Insert item in Queue";
cout<<"\n 2.DeleteitemfromQueue";
cout<<"\n 3.DisplayQueueElement";
cout<<"\n 4.ExitProgram";
cout<<"\n Enter your choice";
cin>>choice;
switch(choice){
case 1:
cout<<"\n Enter item to be inserted: ";
cin>>item;
Q1.enqueue(item);
break;
case 2:
Q1.delqueue();
break;
case 3:
Q1.display();
break;
case 4:
getch();
return 0;
}
}while(1);

}