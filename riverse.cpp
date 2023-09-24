#include<iostream>
using namespace std;
int main()
{
    int  n,newnumber=0;
    cout <<"Enter the number do you want to reverse ";
    cin>>n;
    cout<<"  Givven number"<<n<<endl;

    for (int  i = 0; n!=0; i++)
    {
        newnumber = n%10;
        printf("%d",newnumber);
        n= n/10;

        
         
    }
    


 return 0;
}