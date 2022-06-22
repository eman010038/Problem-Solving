//Problem: Enter numbers and output the corresponding alphabets
//Eman Helal
#include <iostream>

using namespace std;

int main()
{
    int arr1[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    char arr2[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int seq[26];
    cout<<"enter seq: ";
    for(int i=0;i<26;i++)
    {
        cin>>seq[i];
    }
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<26;j++)
    {
        if (seq[i]==arr1[j])
        {
            cout<<arr2[j];
        }
    }
    }


    return 0;
}
