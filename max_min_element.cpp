#include<bits/stdc++.h>
using namespace std;
int main()
{

     
     int n;
     cin>>n;
     int arr[n];
     for (int i = 0; i <n; i++)
     {
      
       cin>>arr[i];

     }
 int max_val = arr[0];

 for (int i = 0; i <n; i++)
 {
            if(arr[i]>max_val)
            {
                max_val = arr[i];
                
            }


 }
 
                cout <<"max val : "<<max_val<< endl;
    

  


     return 0;
}