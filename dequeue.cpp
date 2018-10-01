#include<iostream>
using namespace std;

int f=-1;
int r=-1;
int s=5;
int q[5];

void insert(int i){
	if(r+1==size){
		cout<<"full\n";
	}
	else if(f==-1){
		f=r=0;
	}
	else{
		r+=1;
		q[r]=i;
		cout<<"ins\n";
	}
}

void remove(){
	if(f==-1){
		cout<<"empty\n";
	}
	else{
		if(f==r){
			f=r=-1;
		}
		else{
			f+=1;
		}
	}
}

int main(){
	
}


