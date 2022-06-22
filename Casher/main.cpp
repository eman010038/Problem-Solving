//Eman Mostafa ahmed

#include <iostream>
#include<sstream>
using namespace std;

int main()
{
    cout<<endl<<"\t\t\t\t(casher application for super market) "<<endl<<endl<<endl;
    int counter=0;
    int total_amount = 0;
    char i='y';
    do
    {
        counter++;
        int n;
        int m;
        int z;
        int t;


        string  product_code;
        int product_quantity;

        cout<<"Please Enter Number of available products in the market: "<<endl;
        cin>>n;
        cout<<endl;
        string arr1[n][4];
int total_amount =0;

        for (int i = 0; i < n; i++)
        {
            cout <<endl<<"Please Enter product("<<i+1<<")name, code, price and tax: "<<endl;

            for (int j = 0; j < 4; j++)
            {
                cin>> arr1[i][j];

            }

        }


        cout<<endl<<endl<<"Now we are ready to accept orders.."<<endl<<endl;
        cout<<"Please Enter number of products in the order:"<<endl;
        cin>>m;
        cout<<endl<<endl;

        for(int i=0 ; i<m ; i++)
        {
            cout<<"Please enter product code and quantity :"<<endl;
            cin>> product_code;
            cin>> product_quantity;


            for (int i = 0; i < n; i++)
            {
                for(int j = 0; j < 4 ; j++)
                {
                    if (arr1[i][j] == product_code)
                    {
                        cout <<"   product name :"<<arr1[i][0] <<endl;
                        cout <<"   product price :"<<arr1[i][2] <<endl;
                        istringstream(arr1[i][2])>>z;
                        istringstream(arr1[i][3])>>t;
                        int Tax=((z/100)*t);
                        cout <<"   The Tax = "<<Tax<<endl;
                        int final_price =Tax+z;
                        cout <<"   Final Price = "<< final_price <<endl;
                        cout <<"   Quantity :"<<product_quantity <<endl;
                        int Total_price=final_price * product_quantity;
                        cout <<"   Total Price :"<<Total_price<<endl;
                         total_amount =  total_amount + Total_price;
                        cout<<"   The Total Amount = "<< total_amount <<endl<<endl<<endl;

                    }


                }


            }
        }






        cout << "Do you want to enter another height (Y/N) "<<endl;
        cin >> i;
    }
    while(i=='y' || i=='Y');
    cout<<endl<<endl<<"Finally.."<<endl;
    cout<<"[";
    cout <<"\tNumber of served orders is: "<<counter<<endl;
    cout<<"\tTotal Amount of all orders is: "<<total_amount<<endl;
        cout<<"]"<<endl<<endl;

    return 0;
}
