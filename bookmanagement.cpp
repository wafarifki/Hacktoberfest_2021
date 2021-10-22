#include <iostream>

using namespace std;

class book 
{
    public:
    char title[100];
    int price;
    void ipb(){
        cout<<"\n enter the title";
        cin>>title;
        cout<<"\n enter the price";
        cin>>price;
    }
    void opb()
    {
        cout<<"\ntitle :"<<title;
        cout<<"\n price :"<<price;
    }
    

};

class textbook : public book{
    public: 
    char cls;
    char subname[100];
     void ipt()
     {
         cout<<"\n Enter the class";
         cin>>cls;
         cout<<"\n enter the subject";
         cin>>subname;
         
     }
      void opt()
      {
          cout<<"\n class :"<<cls;
          cout<<"\n subname : "<<subname;
      }
         
};

class novel : public book{
    public: 
    char genre[100];
    int pages;
     void ipn()
     {
         cout<<"\n Enter the genre";
         cin>>genre;
         cout<<"\n enter the pages";
         cin>>pages;
         
     }
      void opn()
      {
          cout<<"\n genre :"<<genre;
          cout<<"\n pages : "<<pages;
      }
         
};




int main()
{

     book b;
     book *bp;
     bp=&b;
     bp->ipb();
     bp->opb();
     textbook t;
     bp=&t;
     ((textbook*)bp)->ipt();
     ((textbook*)bp)->opt();
     novel n;
     bp=&n;
     ((novel*)bp)->ipn();
     ((novel*)bp)->opn();
     
     return 0;
    
}

