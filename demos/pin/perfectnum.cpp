#include <iostream>

using namespace std;

void foo() 
{
    cout << "start";
}


int main(int argc, char * argv[]) 
{
    foo();
    int i=1, u=1, sum=0;
    while(i<=500)
        {                                  // start of first loop.
            
            while(u<=500)
                {                               //start of second loop.
                    if(u<i)
                        {
                            if(i%u==0 )
                                sum=sum+u;
                        }                          //End of if statement
                    
                    u++;
                }                           //End of second loop
            
            if(sum==i)
                {
                    cout << i <<" is a perfect number."<<"\n";
                }
            
            i++;
            u=1;  sum=0;
        }                             //End of First loop
} 

