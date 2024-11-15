#include<iostream>


using namespace std ;

void Readmarks(float &mark1, float &mark2, float &mark3  )
{
cout << "Please enter mark1 \n " ;
cin>>mark1 ;

cout << "Please enter mark 2 \n " ;
cin>>mark2 ;

cout << "Plase enter mark 3 \n " ;
cin>>mark3;
}

float calculeteAveragenarks(float mark1 , float mark2 , float mark3 )
{
    return (mark1+mark2+mark3)/3 ;
} 

int main()
{
    float mark1 , mark2 , mark3 ;
    Readmarks(mark1 , mark2 , mark3) ;
    float result=calculeteAveragenarks(mark1 , mark2 , mark3);

    if ( result >= 50   )
    {
       cout << "Pass" << endl;
       cout << " your average is " << result << endl ;
    }

    else
    {
        cout << "Fail" << endl;
        cout << " your average is " << result ;

    }

    cout << "THANK YOU USER \n " ;

    return 0 ;
}

