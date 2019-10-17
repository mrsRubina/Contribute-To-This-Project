#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"time.h"

using namespace std;
time::time(){
	hour=min=sec=0;
}

void time::settime(int h, int m,int s){
	if((h>=0 && h<24)&&(m>=0 && m<60)&&(s>=0 && s<60)){
		hour=h;
		min=m;
		sec=s;
	}else 
	    throw invalid_argument("hour, minute and /or seconed was out of range");
	    
}
void time::printuniversal(){
	cout << sefill('0')<< setw(2) <<hour<< ":"
	<<setw(2) << min <<":"
	<<setw(2) << sec;
}
void time::printstandard(){
	cout << ((hour==0||hour==12)? 12: hour%12)<<":"
	<< setfill('0')<< setw(2) << min << ":"<< setw(2)
	<<sec << (hour <12 ? "AM" : "PM");
}
