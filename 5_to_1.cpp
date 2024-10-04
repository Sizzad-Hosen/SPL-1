// #include<bits/stdc++.h>
// using namespace std;

// void fun(int i)
// { 
//     if(i==1) return;
//     cout<<i<<endl;
//     fun(i-1);
// }
// int main()
// {

//      fun(5);
//      return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void fun(int i)
{ 
    if(i==6) return;
    cout<<i<<endl;
    fun(i+1);
}
int main()
{

     fun(1);
     return 0;
}