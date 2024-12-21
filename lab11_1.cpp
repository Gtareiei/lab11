// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
 #include<cstdlib>
 #include<string>
 #include<ctime>
 using namespace std ;
 int main()
 {
    cout << "Press Enter 3 times to reveal your future.\n";
   int count =0 ;
   string grade ;
   while (count<3)
    {
        getline(cin,grade) ;
        count++ ;
    }  
srand(time(0
)) ;    
int ran = rand()%10 ; 
    if(ran==0) cout<<"You will get A in this 261102.\n" ;
     else if(ran==1) cout<<"You will get B+ in this 261102.\n" ;
     else if (ran==2) cout<<"You will get B in this 261102.\n" ;
     else if (ran==3) cout<<"You will get C+ in this 261102.\n";
     else if (ran==4) cout<<"You will get C in this 261102.\n";
     else if (ran==5) cout<<"You will get D+ in this 261102.\n";
     else if (ran==6) cout<<"You will get D in this 261102.\n";
     else if (ran==7) cout<<"You will get F in this 261102.\n";
     else if (ran==8) cout<<"You will get W in this 261102.\n";

 }
// or
/*
  #include<iostream>
 #include<cstdlib>
 #include<string>
 using namespace std ;
 int main()
 {
    string Grade[] ={"A","B+","B","C+","C","D+","D","F","W"} ;
    cout << "Press Enter 3 times to reveal your future.\n";
   int sum =0 ;
   string Enter ;
   while(sum<3)
    {
        getline(cin,Enter) ;
        sum++ ;
    }  
srand(time(0));

int ran = rand()%9 ; 
string grade =Grade[ran] ;  
    cout << "\nYou will get "<<grade<<" in this 261102.";
 }
 } */