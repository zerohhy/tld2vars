# include<iostream>
# include<fstream>
# include<string>
#include <sstream>
using namespace std;




int findq(int x,int y){
	//640*480 resolution
	int resx=160;
	int resy=120;
	int lx=resx/2;
	int ly=resy/2;
	
	if(x<=lx){
		if(y<=ly){
			return 1;
		}
		else{
			return 3;
		}
	}
	else{
		if(y<=ly){
			return 2;
		}
		else{
			return 4;
		}
	}

}

int read_print (char *fileName){
	double likehood;
	int Xbl;
	int Ybl;
	int Lx;
	int Ly;
	int frame;
	double dtemp=0;
	int itemp=0;
	string line;
	unsigned short i;
	unsigned short j;
	unsigned short k;
	long int l;
	unsigned short n;
	unsigned short c;
	long int linecount;
	
	
	l=1;
	fstream f;
	f.open(fileName);	//read file
	
	while(1){
		f>>line;
		if(linecount==l){
				while(!f.eof()){	//check if the file reaches the end
					f>>line;
					if(f.eof()){	//avoid reading last line twice
       		 				f.close();
       		 				break;
       				}
        		cout<<l<<" "<<line<<endl;
       		 	/*

   		 		*/
   		 		l++;
   		 		//cout<<line<<" "<<l<<endl;

				}
			//stopFrame=frame;
			f.close(); //close file
			linecount=1;
			f.open(fileName);
			
	
		}
		linecount++;
	}
}





int main(){


read_print("runing6");


}
