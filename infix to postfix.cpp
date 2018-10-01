#include <iostream>
using namespace std;
int size=15;
int s[15];
int top=-1;
 
 void push(int item){
   if(top +1 == size)
   {
     cout<<"stop pusshing..Stack overflow";
   }
   else
   {
     top++;
     s[top]=item;
     cout<<item<<" is pushed."<<endl;

   }
}

 int pop(){
   int item;
   if(top==-1){
     cout<<"stop popping...Stack underflow";}
   else
   {
     item=s[top];
     top--;
     cout<<item<<" is popped."<<endl;
   }
   return item;
}


void tra(){
  int i;
  for(i=0; i<=top; i++){
    cout<<s[i]<<endl;
  }
}
   
int main() {
	
  	int a,b,c,v;
 	char p[200];
 	cout<<"Type postfix expression that you want to evaluate";
 	cin.getline(p, 200);
 	push(char('('));
 	
 	tra();
 	
 	
 }
