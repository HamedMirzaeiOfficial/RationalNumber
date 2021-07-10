/*******************************************************************
   Hamed Mirzaei
   telegram  ID --> @HamedMirzaei_Official
   instagram ID --> HamedMirzaei2001Official
   email --> HamedMirzaei2001Official@gmail.com
********************************************************************/

#include <iostream>
#include<windows.h>
#include<stdexcept>
#include "Rational.h"
using namespace std;

int main()
{
    Rational r1,r2;
    system("color 3");
    Sleep(500);
    cout<<"Hi,it's Hamed Mirzaei Welcome to my Calculator\n\n\n";



    while(true)
    {
        Sleep(1000);
        char ch;
        cout<<"--------------------------------------------\n";
        cout<<"                                            *\n";
        cout<<"Enter Action You Want To Do:                *\n";
        cout<<"                                            *\n";
        cout<<"[1]  +                                      *\n";
        cout<<"[2]  -                                      *\n";
        cout<<"[3]  *                                      *\n";
        cout<<"[4]  /                                      *\n";
        cout<<"[5]  ==                                     *\n";
        cout<<"[6]  !=                                     *\n";
        cout<<"[7]  >                                      *\n";
        cout<<"[8]  <                                      *\n";
        cout<<"[9]  >=                                     *\n";
        cout<<"[0]  <=                                     *\n";
        cout<<"[p]  postfix ++                             *\n";
        cout<<"[m]  postfix --                             *\n";
        cout<<"[A]  prefix  ++                             *\n";
        cout<<"[B]  prefix  --                             *\n";
        cout<<"[I]  inverse                                *\n";
        cout<<"[P]  pow                                    *\n";
        cout<<"[K]  +=                                     *\n";
        cout<<"[L]  -=                                     *\n";
        cout<<"[N]  *=                                     *\n";
        cout<<"[M]  /=                                     *\n";
        cout<<"[E]  Exit                                   *\n";
        cout<<"[C]  Clear The Page                         *\n";
        cout<<"                                            *\n";
        cout<<"--------------------------------------------\n\n";
        cin>>ch;

        try
        {


        switch(ch)
        {
        case '1':
            {

                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" + " <<r2<<" = "<<(r1+r2)<<"\n";
                cout<<"--------------------------------\n";
                cout<<"\n\n";
                break;
            }


        case '2':
            {
                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" - " <<r2<<" = "<<(r1-r2)<<"\n";
                cout<<"--------------------------------\n";
                cout<<"\n\n";
                break;
            }



        case '3':
            {
                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" * " <<r2<<" = "<<(r1*r2)<<"\n";
                cout<<"--------------------------------\n";
                cout<<"\n\n";
                break;
            }


        case '4':
            {
                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" / " <<r2<<" = "<<(r1/r2)<<"\n";
                cout<<"------------------------------\n";
                cout<<"\n\n";
                break;
            }



        case '5':
            {
                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<"( "<<r1<<" == "<<r2<<" ) ---->  "<<boolalpha<<(r1==r2)<<"\n";
                cout<<"--------------------------------\n";
                cout<<"\n\n";
                break;
            }


        case '6':
            {
                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<"( "<<r1<<" != "<<r2<<" ) ---->  "<<boolalpha<<(r1!=r2)<<"\n";
                cout<<"--------------------------------\n";
                cout<<"\n\n";
                break;
            }


        case '7':
            {
                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<"( "<<r1<<" > "<<r2<<" ) ---->  "<<boolalpha<<(r1>r2)<<"\n";
                cout<<"--------------------------------\n";
                cout<<"\n\n";
                break;
            }


        case '8':
            {
                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<"( "<<r1<<" < "<<r2<<" ) ---->  "<<boolalpha<<(r1<r2)<<"\n";
                cout<<"--------------------------------\n";
                cout<<"\n\n";
                break;
            }


        case '9':
            {
                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<"( "<<r1<<" >= "<<r2<<" ) ---->  "<<boolalpha<<(r1>=r2)<<"\n";
                cout<<"--------------------------------\n";
                cout<<"\n\n";
                break;
            }


        case '0':
            {
                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<"( "<<r1<<" <= "<<r2<<" ) ---->  "<<boolalpha<<(r1<=r2)<<"\n";
                cout<<"--------------------------------\n";
                cout<<"\n\n";
                break;
            }

        case 'p':
            {
                cout<<"********************************\n";
                cout<<"Enter a Rational Number:  ";
                cin>>r1;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" ----> plus plus ? "<<r1++<<"\n";
                cout<<"--------------------------------\n";
                cout<<"\n\n";
                break;
            }

        case 'm':
            {
                cout<<"********************************\n";
                cout<<"Enter a Rational Number:  ";
                cin>>r1;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" ----> mines mines ? "<<r1--<<"\n";
                cout<<"---------------------------------\n";
                cout<<"\n\n";
                break;
            }

        case 'A':
            {
                cout<<"********************************\n";
                cout<<"Enter a Rational Number:  ";
                cin>>r1;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" ----> mines mines ? "<<++r1<<"\n";
                cout<<"---------------------------------\n";
                cout<<"\n\n";
                break;
            }

        case 'B':
            {
                cout<<"********************************\n";
                cout<<"Enter a Rational Number:  ";
                cin>>r1;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" ----> mines mines ? "<<--r1<<"\n";
                cout<<"---------------------------------\n";
                cout<<"\n\n";
                break;
            }



        case 'I':
            {
                cout<<"********************************\n";
                cout<<"Enter a Rational Number:  ";
                cin>>r1;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" ----> inverse ? "<<r1.inverse()<<"\n";
                cout<<"---------------------------------\n";
                cout<<"\n\n";
                break;
            }

        case 'P':
            {
                unsigned power;
                cout<<"********************************\n";
                cout<<"Enter a Rational Number:  ";
                cin>>r1;
                cout<<"Enter A Number For Pow:   ";
                cin>>power;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" ----> pow("<<r1<<", "<<power<<") ? "<<r1.pow(power)<<"\n";
                cout<<"---------------------------------\n";
                cout<<"\n\n";
                break;
            }


        case 'K':
            {
                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" += " <<r2<<" ---> First Number ("<<r1<<") = "<<(r1+=r2)<<"\n";
                cout<<"------------------------------\n";
                cout<<"\n\n";
                break;
            }


        case 'L':
            {
                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" -= " <<r2<<" ---> First Number ("<<r1<<") = "<<(r1-=r2)<<"\n";
                cout<<"------------------------------\n";
                cout<<"\n\n";
                break;
            }

        case 'N':
            {
                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" *= " <<r2<<" ---> First Number ("<<r1<<") = "<<(r1*=r2)<<"\n";
                cout<<"------------------------------\n";
                cout<<"\n\n";
                break;
            }

        case 'M':
            {
                cout<<"********************************\n";
                cout<<"Enter two Rational Number:      \n";
                cin>>r1;
                cin>>r2;
                cout<<"********************************\n";
                cout<<"--------------------------------\n";
                cout<<r1<<" /= " <<r2<<" ---> First Number ("<<r1<<") = "<<(r1/=r2)<<"\n";
                cout<<"------------------------------\n";
                cout<<"\n\n";
                break;
            }




        case 'E':
            {
                exit(0);
                    break;
            }

        case 'C':
            {
                system("cls");
                break;
            }


        default:
            cout<<"You Press Wrong Key!!!\n";





        }



    }
    catch (invalid_argument& r)
    {
        cout<<r.what();
        break;
    }

}

return 0;
}
