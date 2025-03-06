#include <iostream.h>
#include <stdlib.h>
#include <conio.h>

#define MAXSIZE 50

class Stack {
int arr[MAXSIZE];
int top;

public:
Stack() {
top = -1;
}

void push(int i);
void pop();
void print_stack();
};

void Stack::push(int i) {
if (top >= (MAXSIZE - 1)) {
cout << "\nStack is FULL";
} else {
top++;
arr[top] = i;
cout << "\nElement pushed: " << i;
}
}

void Stack::pop() {
if (top < 0) {
cout << "\nStack is empty";
} else {
cout << "\nElement deleted: " << arr[top];
top--;
}
}

void Stack::print_stack() {
int trav = top;
if (trav > -1) {
cout << "\nStack List:\n";
} else {
cout << "\nStack is empty";
}
while (trav >= 0) {
cout << arr[trav] << " ";
trav--;
}
cout << endl;
}

void main() {
Stack st;
int item, choice;
clrscr();

do {
cout << "\n\n1. Push item onto stack";
cout << "\n2. Pop item from stack";
cout << "\n3. Display stack items";
cout << "\n4. End Program";
cout << "\nEnter your choice: ";
cin >> choice;

switch (choice) {
case 1:
cout << "\nEnter the item to be pushed: ";
cin >> item;
st.push(item);
break;
case 2:
cout << "\nPop or remove top element";
st.pop();
break;
case 3:
st.print_stack();
break;
case 4:
cout << "\nEnd program";
getch();
exit(0);
default:
cout << "\nInvalid choice!";
}
} while (1);
}