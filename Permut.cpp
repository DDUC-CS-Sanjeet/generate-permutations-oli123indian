#include<iostream>
using namespace std;
void Permut(int,int,char* arr);
void swapw(char& ,char&);
int x=1;
int main()
{
    int nchar;
    
    cout<<"Enter the number of character -> ";
    cin>>nchar;
    char* arr=new char[nchar+1];
    char a='A';
    for(int i=0;i<nchar;i++)
    {
        arr[i]=a;
        arr[nchar]='\0';
        a++;
    }
    
    
    cout<<"The permutation of the above number of characters is: ";
    Permut(nchar,0,arr);
    return 0;
}
void swapw(char &a,char &b)
{
    char temp=a;
    a=b;
    b=temp;
}
void Permut(int num,int fir,char array[])
{
		
    if(fir==num)
    {
    	
        cout<<x++<<": "<<array<<endl;
        
    }
    else{
   for(int i=fir;i<num;i++)
   {
        
    
        swapw(array[fir],array[i]);
        Permut(num,fir+1,array);
        swapw(array[fir],array[i]);
   
   }
}
}
