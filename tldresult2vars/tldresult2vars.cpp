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

	l=1;
	ifstream f;
	f.open(fileName);	//read file
	while(1){	//check if the file reaches the end
		f>>line;
		if(0){	//avoid reading last line twice
        		f.close();
        		break;
        }
        cout<<l<<" ";
    if(l%6!=0){
    	stringstream convert(line); 	// stringstream used for the conversion initialized with the contents of Text
		if ( !(convert >> itemp) ){		//give the value to Result using the characters in the string
    		cout<<"NaN "<<itemp<<endl;	//if that fails set Result to 0
    	}
		//cout<<itemp<<endl;//Result now equal to 456 
    }
    else{
    	stringstream convert(line); 	// stringstream used for the conversion initialized with the contents of Text
		if ( !(convert >> dtemp) ){		//give the value to Result using the characters in the string
    		cout<<"NaN "<<dtemp<<endl;	//if that fails set Result to 0
    	}
    	//cout<<dtemp<<endl;
   	}
        
        if(l%6==1){
        	frame=itemp;
        	cout<<itemp<<" frame: "<<frame<<endl;
		}
		else if(l%6==2){
			Xbl=itemp;
        	cout<<itemp<<" Xbl: "<<Xbl<<endl;
		}
		else if(l%6==3){
			Ybl=itemp;
        	cout<<itemp<<" Ybl: "<<Ybl<<endl;
		}
		else if(l%6==4){
			Lx=itemp;
        	cout<<itemp<<" Lx: "<<Lx<<endl;
		}
		else if(l%6==5){
			Ly=itemp;
        	cout<<itemp<<" Ly: "<<Ly<<endl;
		}
		else if(l%6==0){
			likehood=dtemp;
        	cout<<dtemp<<" likehood: "<<likehood<<endl;
		}
		
    cout<<"Quuuuuuud: "<<findq(Xbl+Lx/2,Ybl+Ly/2)<<endl;
    l++;
    //cout<<line<<" "<<l<<endl;

	}
	f.close(); //close file
}






int main(){


read_print("runing8");


}
