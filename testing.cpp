#include <iostream>
#include <string.h>
#include <sstream>
#include <math.h>
#include <fstream>
using namespace std;

struct thing {
	string item;
	char one[1000];
	char two[1000];
	int size;
};

thing split(thing item){
	
	int len=item.item.length();
	item.size=0;
	
	string first,second;
	first=item.item.substr(0,len/2);
	second=item.item.substr((len/2),len-1);
	
	len=first.length();
	char ch;
	
	for(int i=0;i<len;i++){
		ch=first[i];
		item.one[i]=ch;
		item.size++;
	}	
	len=second.length();
	for(int i=0;i<len;i++){
		ch=second[i];
		item.two[i]=ch;
	}
	return item;	
}

char similar(thing item){
	
	int len=item.size;
	char ch;
	
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			if(item.one[i]==item.two[j]){
				if(item.one[i]!=' '){
					return item.one[i];
				}
			}
		}
	}
	
}

int main(){
    
    ifstream input;
    input.open("input.txt");
    
    ofstream output;
	output.open("output.txt");
    
    if(!input.is_open()){
    	cout<<"File not open."<<endl;
    	return 0;
	}
	
	thing item;
	
	input>>item.item;
	while(!input.eof()){
		
		item=split(item);
		output<<similar(item)<<endl;
		
		input>>item.item;
	}
	input.close();
	output.close();
	
	input.open("output.txt");
	
	char ch;
	int pri=0;
	
	while(!input.eof()){
		input >> ch;
		if(ch=='a')
			pri+=1;
		if(ch=='b')
			pri+=2;
		if(ch=='c')
			pri+=3;
		if(ch=='d')
			pri+=4;
		if(ch=='e')
			pri+=5;
		if(ch=='f')
			pri+=6;
		if(ch=='g')
			pri+=7;
		if(ch=='h')
			pri+=8;
		if(ch=='i')
			pri+=9;
		if(ch=='j')
			pri+=10;
		if(ch=='k')
			pri+=11;
		if(ch=='l')
			pri+=12;
		if(ch=='m')
			pri+=13;
		if(ch=='n')
			pri+=14;
		if(ch=='o')
			pri+=15;
		if(ch=='p')
			pri+=16;
		if(ch=='q')
			pri+=17;
		if(ch=='r')
			pri+=18;
		if(ch=='s')
			pri+=19;
		if(ch=='t')
			pri+=20;
		if(ch=='u')
			pri+=21;
		if(ch=='v')
			pri+=22;
		if(ch=='w')
			pri+=23;
		if(ch=='x')
			pri+=24;
		if(ch=='y')
			pri+=25;
		if(ch=='z')
			pri+=26;
			
		if(ch=='A')
			pri+=27;
		if(ch=='B')
			pri+=28;
		if(ch=='C')
			pri+=29;
		if(ch=='D')
			pri+=30;
		if(ch=='E')
			pri+=31;
		if(ch=='F')
			pri+=32;
		if(ch=='G')
			pri+=33;
		if(ch=='H')
			pri+=34;
		if(ch=='I')
			pri+=35;
		if(ch=='J')
			pri+=36;
		if(ch=='K')
			pri+=37;
		if(ch=='L')
			pri+=38;
		if(ch=='M')
			pri+=39;
		if(ch=='N')
			pri+=40;
		if(ch=='O')
			pri+=41;
		if(ch=='P')
			pri+=42;
		if(ch=='Q')
			pri+=43;
		if(ch=='R')
			pri+=44;
		if(ch=='S')
			pri+=45;
		if(ch=='T')
			pri+=46;
		if(ch=='U')
			pri+=47;
		if(ch=='V')
			pri+=48;
		if(ch=='W')
			pri+=49;
		if(ch=='X')
			pri+=50;
		if(ch=='Y')
			pri+=51;
		if(ch=='Z')
			pri+=52;
	}
	cout<<endl<<pri<<endl;
	
    return 0;
}
