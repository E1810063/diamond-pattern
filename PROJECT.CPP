#include<iostream.h>
#include<conio.h>
#include<math.h>
class star
{
 private:
 int n,s;
 int i,j,k;
 public:
 void get();
 void dia();
 };
void star::get()
{
 cout<<"enter the number of lines"<<endl;
 cin>>n;
}
void star::dia()
 {
 s=n-1;
 for(i=1;i<=n;i++)
  {
  for(k=1;k<=s;k++)
   {
  cout<<" ";
   }
  for(j=1;j<=i;j++)
   {
   cout<<"* ";
   }
  cout<<endl;
  s--;
  }
  s=s+2;
  for(i=n-1;i>=1;i--)
  {
   for(k=1;k<=s;k++)
   {
    cout<<" ";
   }
   for(j=1;j<=i;j++)
   {
    cout<<"* ";
   }
    cout<<endl;
    s++;
  }
 }
void main()
{
 clrscr();
 star s;
 s.get();
 s.dia();
 getch();
}



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                












                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
