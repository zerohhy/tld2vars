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
