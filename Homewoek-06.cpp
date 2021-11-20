//...........................Homework-06............................
//B.A Thisara Dilshan
//IM/2019/005
//Vendor machine--

#include<iostream>
using namespace std;

int main(){
	
	int pass=9933;

   //While password is correcrt progrram will continue......
		int Countrs1=100;
		int Countrs2=100;
		int Countrs5=100;
		int Countrs10=100;
	do{
		cout<<"...................WELCOME................."<<endl;
	//products and values.
		int proA=40;
		int proB=30;
		int proC=20;
		int proD=10;
	
		int input;
		int value;
	    int reqAmount;
	//Enter coins...
		int Payrs1,Payrs2,Payrs5,Payrs10;
	//count of coins.....	
		
	//balance coins...	
		int Balrs1,Balrs2,Balrs5,Balrs10;
		
		int EntValue;
		int balance=0;
	
		
	
		cout<<"Select the product :"<<endl<<endl<<"Enter 1 for product A "<<endl<<"Enter 2 for product B "<<endl<<"Enter 3 for product C "
		<<endl<<"Enter 4 for product D "<<endl;
	
		cout<<endl;
	
	
		cout<<"Enter your Product :";
		cin>>input;
		cout<<"\n";
//Enter valid nomber to select your desired product..............
    	while(input<1 || input>4){
    		cout<<"Invlid input..please try again..."<<endl;
    		cout<<"Enter your Product :";
	   		cin>>input;
			cout<<"\n";
		}
		if(input==1){
			cout<<"Price :"<<proA<<" Rs";
			value=proA;
		}
		if(input==2){
			cout<<"Price :"<<proB<<" Rs";
			value=proB;
		}
		if(input==3){
			cout<<"Price :"<<proC<<" Rs";
			value=proC;
		}
		if(input==4){
			cout<<"Price :"<<proD<<" Rs";
			value=proD;
	
		}
		cout<<endl;

	 	EntValue=0;
	 
		cout<<"Enter the a valid payment : "<<endl;
		cout<<"\n";
		
//Enter a valid amount of coins..
		while(value>EntValue){

			cout<<"Enter coins of rs.01 :";
			cin>>Payrs1;
			Countrs1+=Payrs1;
	
			cout<<"Enter coins of rs.02 :";
			cin>>Payrs2;
			Countrs2+=Payrs2;
	
			cout<<"Enter coins of rs.05 :";
			cin>>Payrs5;
			Countrs5+=Payrs5;
		
			cout<<"Enter coins of rs.10 :";
			cin>>Payrs10;
			Countrs10+=Payrs10;
	

  	    	EntValue+=Payrs1*1+Payrs2*2+Payrs5*5+Payrs10*10;
  	    	reqAmount=value-EntValue;
  			cout<<endl;
   			if(value>=EntValue){
    			cout<<"Insufficient value..........Enter required ammount "<<endl;
				cout<<"Entered amount is : "<<EntValue<<"Rs          "<<"Your total cost = "<<value<<"Rs"<<endl;
				cout<<"plese enter required amount = "<<reqAmount<<" Rs"<<endl<<endl;
    			
			}
		}

 
//Count the balance and return the balance in coins...    	
    	balance=EntValue-value;
   		cout<<"\n";
   	
	   	cout<<"Your Balance is :"<<balance<<endl;
		cout<<"\n";
   	
        int max;
    	Balrs10=balance/10;
    	if(Balrs10!=0){
   			if(Balrs10<=Countrs10){
   				balance%=10;
   				cout<<"Rs.10 :"<<Balrs10<<endl;
   				Countrs10-=Balrs10;
			}else{
				Balrs10=Countrs10;
				max=Countrs10*10;
				balance-=max;
   				cout<<"Rs.10 :"<<Balrs10<<endl;
   				Countrs10-=Balrs10;
			}
	}
		
       	Balrs5=balance/5;
       	if(Balrs5!=0){
    		if(Balrs5<=Countrs5){
    			balance%=5;
    			cout<<"Rs.5 :"<<Balrs5<<endl;
    			Countrs5-=Balrs5;
			}else{
				Balrs5=Countrs5;
				max=Countrs5*5;
				balance-=max;
   				cout<<"Rs.5 :"<<Balrs5<<endl;
   				Countrs5-=Balrs5;
			}	
		}
		
    	Balrs2=balance/2;
		if(Balrs2!=0){	
    		if(Balrs2<=Countrs2){ 	
    			balance%=2;
    			cout<<"Rs.2 :"<<Balrs2<<endl;
    			Countrs2-=Balrs2;
			}else{
				Balrs2=Countrs2;
				max=Countrs2*2;
				balance-=max;
   				cout<<"Rs.2 :"<<Balrs2<<endl;
   				Countrs2-=Balrs2;
			}	
		}
		
		if(Balrs1!=0){
    		Balrs1=balance/1;	
       	 	if(Balrs1<=Countrs1){
    			cout<<"Rs.1 :"<<Balrs1<<endl;
    			Countrs1-=Balrs1;
			}else{
				Balrs1=Countrs1;
				max=Countrs1*1;
				balance-=max;
   				cout<<"Rs.1 :"<<Balrs1<<endl;
   				Countrs1-=Balrs1;
			}
		}
		cout<<"\n";
   		
//If any bucket has get fulled(over 200 coins),then put the extra coins into the overflow bucket...
	if(Countrs1>100 || Countrs2>100 || Countrs5>100 || 	Countrs10>100){
		int excoins1=Countrs1-200;
		int excoins2=Countrs2-200;
		int excoins5=Countrs5-200;
		int excoins10=Countrs10-200;
		 
		if(excoins1>0){
			cout<<"Include "<<excoins1<<" of 1 rs coins into overflow bucket"<<endl;
		}
		if(excoins2>0){
			cout<<"Include "<<excoins2<<" of 5rs coins into overflow bucket"<<endl;
		}
		if(excoins5>0){
			cout<<"Include "<<excoins5<<" of 2rs coins into overflow bucket"<<endl;
		}
		if(excoins10>0){
			cout<<"Include "<<excoins10<<" of 10rs coins into overflow bucket"<<endl;
		}	
	}
	cout<<endl;
	cout<<"Thank you...come again";
	cout<<"\n"<<endl;
	cout<<endl;

//End of the proccess and new customer has to enter 0 to continue his process.
	cout<<"Enter password to terminate(author only):"<<endl<<"If u are a customer please enter 0 to continue :"<<endl;
	cout<<endl<<"Enter password : ";
	cin>>pass;
   	cout<<"\n";
   	while(pass!=0 && pass!=9933){
   		cout<<"wrong password..enter again.."<<endl;
   		cout<<endl<<"Enter password : ";
		cin>>pass;
	   }
    cout<<endl<<"........................................................................................"<<endl<<endl;
	}
while(pass!=9933);
}
	






