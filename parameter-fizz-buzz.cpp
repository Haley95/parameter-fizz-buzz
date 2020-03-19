#include<iostream>
#include<string>
#include <stdio.h>

using namespace std;
int main(int argc, char * argv[2])
{
for (int i = 1; i <= argv[2][0]; i++)
{
        if (argv[2][0] != 2)
        {
        cout<< "Give me one parameter that is a number!" << endl;
        return 1;
        }
            else 
        {
            cout<< "You gave me one parameter, but it is not an integer!" << endl;
            return 1;
        
        }
        if (argv[2][0] == '-')
        {
            cout<< argv[2][0]<< i++<< endl;
            return 1;
        }
        else if (argv[2][0] == '+')
        {
        cout<<  argv[2][0]<< i--<< endl;
        return 1;
        }
        else if (argv[2][0] %3 == 0)  
        {       
           cout<< "Fizz" << endl;
           return 1;
        }
         else if (argv[2][0] % 4 == 0)  
         {   
            cout<< "Buzz" << endl;  
            return 1;
         }
    else if (argv[2][0] % 4 == 0 && argv[2][0] % 3 == 0)  
         {   
            cout<< "FizzBuzz" << endl;  
            return 1;
         }
    
    else if (argv[2][0] == 0)
    {
        return 0;
    }

}

}

