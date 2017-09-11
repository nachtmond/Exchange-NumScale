//Main source code
#include <iostream>
using namespace std;
int main()
{	

//Repeat command : head
int choice=0;
do
{	
	int xn, xm, tf;
	int ordNum[]={0,1,2,3,4,5,6,7,8,9};
	char *extNum[]={"0","1","2","3","4","5","6","7","8","9","a","b","c","d","e","f","g","h","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	
	cout<<"Please input integral number: ";
	cin>>xn;
	cout<<"What scale system you need transfer? ; max 62 scale : ";
	cin>>tf;

	//This roop for determination each digit number from minimam, and output in order from minimam digit.
	//If output 10, advance 1 to one upper digit
	if(tf>=2 && tf<=62)
	{	
		while((xn/tf)>=1)		//divide input number by cardinal number, if this give more than 1, roop continue.
		{	
			xm=xn%tf;
			
			int n=ordNum[xm];
			char *k=extNum[xm];


			if(xn!=0 && xm==0)
			{
				cout<<0;
				xn=xn+1;
			}
			else if(xm<=10)
			{
				cout<<n;
			}
			else
			{
				cout<<k;
			}

			xn=xn/tf;
			cout<<endl;

		}

		//Determination maximum digit number
		xm=xn%tf;
		
		int n=ordNum[xm];
		char *k=extNum[xm];


		if(xn!=0 && xm==0)
		{
			cout<<0<<endl<<1;
		}
		else if(xm<=10)
		{
			cout<<n;
		}
		else
		{
			cout<<k;
		}

		cout<<endl;			
		
	}
	else
	{
		cout<<"ERROR!"<<endl;
	}

//Repeat command : tail
	choice=1;
	cout<<"If you need continue : input 0, quit this application : input other.";
	cin>>choice;
}while(choice==0);
		
}
