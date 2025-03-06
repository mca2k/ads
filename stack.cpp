#include<iostream.h>
#include <stdlib.h>
#include<conio.h>

Class Stack
{
int arr[10];
int top;
public:
Stack(){
top=-1;
}
void push(int i);
void pop();
void print_stack();
};

void Stack :: push(int i) {
if(top >= 10){
cout<<"\n Stack is FULL";
}
else
{
top++;
arr[top]=i;
}
}

void Stack :: pop() {
if(top<0){
cout<<"\n Stack is empty";
}
else{
cout<<"\n Element deleted:"<<arr[top];
top--;
}
}

void stack :: print_stack(){
int trav = top;
if(trav>-1){
cout<<"\n Stack List:\n";
}
while(trav>= 0){
cout<<" "<<arr[trav];
trav--;
}
cout<<endl;
}

void main()
{
Stack st;
int item,choice;
clrscr();
do{
cout<<"\n \n 1.Push item on to stack";
cout <<"\n 2. pop item on to stack ";
cout <<"\n 3. Display stack items";
cout <<"\n 4. End Program";
cout<<"\n Enter your choice:";
cin >> choice;
switch(choice){
case 1:
cout<<"\n Enter the item to be pushed:";
cin>>item;
st.push(item);
break;
case 2:
cout<<"\n Pop or remove the element";
st.pop();
break;
case 3:
st.print_stack();
break;
case 4:
cout<<"\n End program";
getch();
exit(1);
}
}while(1);

}