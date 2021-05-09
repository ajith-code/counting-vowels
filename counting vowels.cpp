
include <iostream>


using namespace std;


int main()

{
     
string a;
  
int count=0,c,j;
  
char b[5]={'a','e','i','o','u'};
  
cout<<"Enter the string";
  
getline(cin,a);
  
c=a.length();
  
for(int i=0;i<=c;i++)
  
{
    
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
      
{
          
count+=1;
         
      
}
  
}
  
cout<<count<<" vowel character are present in a given string";

  

    
return 0;

}