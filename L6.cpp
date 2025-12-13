#include <iostream>
using namespace std;
// void thumbnail(string photo, string title, int  views, int  time)
// {
//     cout << "Print the thumbnail " << photo << endl;
//     cout << "Print the title " << title << endl;

//     cout << "Print the views " << views << endl;
//     cout << "Print the Upload time " << time << endl;
// }

// void grade(int marks){
//     if (marks>90)
//     {
//         cout<<"Grade:A"<<endl;
//     }
//     else if(marks>80){
//         cout<<"Grade:B"<<endl;
//     }
//      else if(marks>70){
//         cout<<"Grade:C"<<endl;
//     }
//      else if(marks>60){
//         cout<<"Grade:D"<<endl;
//     }
//      else{
//         cout<<"Fail"<<endl;
//     }

// }
// int factrorial(int n)
// {
//     int fact=1;
//     for (int i = 1; i <= n; i++)
//     {
//          fact = fact * i;
//     }
//     return fact;
// }

// int sum(int n1, int n2){
//     int add;
//     add=n1+n2;
//     return add;
// }

// int square(int num1){
//     int sq=num1*num1;
//     return sq;
// }

// int increament(int &n){
//     n++;
//     return n;
// }

void swap(int &a,int &b,int &c){
    int d=a;
    a=b;
    b=c;
    c=d;

}

// void primeNumber(int n)
// {
//     for (int i = 2; i <= (n - 1); i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "Not Prime" << endl;
//             return;
//         }
//     }

//     cout << "Prime";
// }
int main()
{
    // int num=5;
    // int ans=factrorial(num);
    // cout<<ans<<endl;

    // int num1=78;
    // int num2=2;
    // int addition=sum(num1,num2);
    // cout<<addition;

    // int students1=89;
    // int students2=92;
    // grade(students1);
    // grade(students2);

    // string photo1= "phot.jpg", title1 = "Hook1", photo2 = "phot2.jpg", title2 = "React";
    // int views1 = 420, time1 = 3, views2 = 500, time2 = 7;

    // thumbnail(photo1,title1,views1,time1);

    // int num1=5;
    // int ans=square(num1);
    // cout<<ans;

    // cout<<square(num1);

    // int a=10;
    // cout<<increament(a);

    int a=10,b=20,c=30;
    swap(a,b,c);
    cout << "a: " << a << ", b: " << b<< ",c: " << c;

    // int num = 87;
    // primeNumber(num);

    return 0;
}