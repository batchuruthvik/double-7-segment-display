#include<regx51.h>
#define display P3
sbit s1=P2^6;
sbit s2=P2^7;
int val[10]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void delay();
void main(){
	int x,y;
	s1=s2=1;
	while(1){
		for (x=0;x<100;x++){
			for(y=0;y<10;y++){
				s1=1;s2=0;
				display=(~val[x%10]);
				delay();  
				s1=0;s2=1;
				display=(~val[x/10]);
				delay();
				s1=s2=1;
			}
		}
	}
}

void delay(){
	int a,b;
	for(a=0;a<50;a++)
	for(b=0;b<100;b++);
}
