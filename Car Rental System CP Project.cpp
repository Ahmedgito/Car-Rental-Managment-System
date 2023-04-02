#include <iostream>
#include <stdlib.h>
using namespace std;

// SYSTEM(PAUSE) = USES TO PAUSE THE PROGRAM
// SYSTEM(CLS) = CLEARS THE SCREEN 


 struct Cars {

    string name [8] = {"Suzuki","Audi","Lamborghini","Toyota","Hyundai","Honda","BMW"};

    string color [8]={"White","Purple","Blue","Gun Metallic","Red","Maroon","Silver" };

    string m_speed [8]={"180 Km/h ","230 Km/h","300 Km/h","210 Km/h","130 Km/h","220 Km/h","270 Km/h"};

    int model [8]= { 2010 , 2017 , 2019 , 2014 , 2013 , 2015 , 2018 };
    
    int price [8] ={8000,19000,25000,9000,8000,11000,23000 } ;

    string category [8] = {"Moderate","LUXURY","SUPREME","HIGH","MODERATE","S-CLASS","LUXURY"};

			};


   struct Info {

   string Name [10];
   string Natio_ID [10] ;
   int payment_acc [ 10] ;
   };

 Cars car ;
 Info info ;



int login(){
   string pw ;
   string ch;
   cout <<"\n\n\n\n\t\t\t\t\t*********  Car Rental System  *********";
   cout <<" \n\t\t\t\t\t\t                          BY SYED AHMED REHMAN -0101   ";
   cout <<" \n\t\t\t\t\t\t                                BY MOHAMMAD AHMED -0194   ";
   cout<<"   \n\n\n\n\n\n\n\n\n\t\t\t\t\t\t **** LOGIN ***** ";
   cout << "\n\t\t\t\t\t\tEnter Password: ";
   
   cin>>ch ;
   pw = ch  ; 
    if(pw == "maju"){
      cout << "\n\n\n\n\t\t\t\t\t  Access Granted! Welcome To Our System \n\n";
      system("PAUSE");
      system("CLS");
}
	else{
      cout << "\n\n\n\n\t\t\t\t\tAccess Aborted...Please Try Again!!\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
   void list ()
 {

	int num=1;
   
 for(int i=0 ;i<7;++i)
 {
 	cout<<"\t\t\t";
    cout<<"Enter " <<num<<"\t- To Select  "<<car.name[i]<<endl;
    num++ ;
 }

 }

  void Details (int theChoice)
  {
   	system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - "<<car.name[theChoice-1]<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tColor : "<<car.color[theChoice-1]<<endl;
     cout<<"\t\t\tModel : "<<car.model[theChoice-1]<<endl;
     cout<<"\t\t\tCategory : "<<car.category[theChoice-1]<<endl;
     cout<<"\t\t\tPrice = "<<"PKR"<<car.price[theChoice-1]<<" **PER DAY**"<<endl;
	

  }
   
   void check (int j )
  {
      if(info.payment_acc[j]  >= car.price[j])
           cout<<"\n\n\n\t\t\tProcess has been done successfully!! " <<endl;
           else
              cout<<"\n\n\n\t\t\tNot Available " <<endl;

  }
    void user_input (int theChoice, int tot)
   {
   	system("CLS");
        int j=theChoice-1 ;
       cout<<"\t\t\t----------------------------------------\n";
       cout<<"\t\t\tPlease Provide Your Personal Details  : \n";
       cout<<"\t\t\t----------------------------------------\n\n";
       cout<<"\n\tNOTE: PROVIDE FIRST NAME ONLY, DONOT ENTER SPACE WHILE PROVIDING NAME,\n\tPAYMENT WON'T PROCEED IF THE GIVEN AMOUNT IS LESS THEN THE RATE OF CAR\n\n\n\n";
       cout<<"\n\t\tYOUR TOTAL AMOUNT IS = "<< tot<<"PKR";
	   cout<<"\n\n\t\t\tEnter Your Name : ";
       cin>>info.Name[j];
       cout<<"\t\t\tEnter Your National ID : ";
       cin>>info.Natio_ID[j] ;
       cout<<"\t\t\tPayment Amount: " ;
       cin>>info.payment_acc[j] ;


     check( j ) ;
   }

int rent(int x,int num){
	int tot ;
	tot = car.price[num-1]*x ;
	return tot ;
}
void showrent(int theChoice,int days,int rent )
    {
    	system("CLS");
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|" <<"#FA22BSCS"<<" |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|" <<info.Name[theChoice-1]<<" |"<<endl;
    cout << "\t\t	| Car Name :"<<"--------------------|" <<car.name[theChoice-1]<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|" <<days<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|" <<rent<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|" <<rent<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
    cout << "\t\t	 require an authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    int f;
    system("PAUSE");
    
    system ("CLS");
}
int main()
{
	int ren;
	int login();
    login();

         string decide ="yes" ;
     cout<<"\t\t\t----------------------------------------------\n";
     cout<<"\t\t\t\tSIMPLE CAR RENTAL SYSTEM \n";
     cout<<"\t\t\tWelcome to Our Company ,Choose from the menu : "<<endl;
     cout<<"\t\t\t----------------------------------------------\n";
     while(decide!="exit")
     {
         list();
     cout<<"\n\n\n\t\t\tEnter Only the Number to select the Car : ";
     int theChoice,tot ;
     cin>>theChoice ;
     Details(theChoice);
     cout<<"\n\n\n\t\t\tEnter the Number of Days you want to Rent this Car for = ";
	 cin>>ren;
	 cout<<" \n\n\n\t\t\tTOTAL PRICE IS =  "<<rent(ren,theChoice)<<"PKR" ;
	 tot = rent(ren,theChoice)  ;
	 cout<<"\n\n\n\t\t\tAre You Sure, you want to rent this Car? (yes /no /exit ) : ";
     cin>>decide ;
     if(decide=="yes") {
        user_input(theChoice,tot);
         showrent(theChoice,ren,tot) ;
        cout<<"\n\n\t\t\tDo you want to continue ?(yes/no) ";
        cin>>decide;
        if (decide=="no") break ;
system("CLS");
     }

   else {
      if(decide=="no")
      {
      	system("CLS");
          continue ;
      }
     else if  (decide=="exit")
     {
    	system("CLS");
         break ;
     }

   }		
     }


    return 0;
}
