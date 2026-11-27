#include<iostream>
using namespace std;
void al(){
    cout<<"اختار الرقم للعمليه       \n";
        cout<<"للمعرفه الرصيد اضغط 1 \n";
         cout<<"للعمليه ايداع اضغط  2\n";
      cout<<"لعمليه سحب رصيد اضغط 3\n";
     cout<<"للخروج اضغط رقم 4\n" ;
      cout<<"=================\n";
}
int main()
{
    char a;
    int passwerd=77009;
    float resad=2000,almshod,almdhel;
    
    
    
for(int i=1;i<=3;i++)
{
    cout<<"ادخال كلمه المرور : "<<endl;
    cin>>passwerd;
    
    if(passwerd==77009)
    {
        a=1;
        break;
    }
    else
    {
        cout<<"كلمه المرور غلط! باقي لك "<< 3-i <<" محاولات"<<endl;
        a=0;
    }
}
    
    
    
    
    if(a==1)
    {
     do{
     al();
         int namder;
         cin>>namder;
             switch(namder)
      {
        case 1:
        cout<<"رصيدك هو : "<<resad<<endl;
        cout<<"**********************\n";
        break;
        case 2:
        cout<<"ادخال الملبغ المودع  :  "<<endl;
        cin>>almdhel;
        resad=almdhel+resad;
        cout<<"مجموع الرصيد     "<<resad<<endl;
        cout<<"************************"<<endl;
        break;
        case 3:
        cout<<"رصيدك هو "<<resad<<"  لا يمكن سحب اكثر من الملبغ حقك"<<endl;
        cin>>almshod;
        if(almshod<=resad)
        {
           
           resad=resad-almshod;
           cout<<"الرصيد المتبقي هو : "<<resad<<endl;  
           
            cout<<"************************"<<endl;         
        }
        else
        {
            
           cout<<almshod<<"المبلغ المسحوب اكبر من رصيدك \t "<<endl;
             
              cout<<"************************"<<endl;
              break;
              
              case 4:
              return 0;
              break;
            }
        } 
    
    }while(1);
    }
  return 0;  
}
