#include<bits/stdc++.h>
using namespace std;

int factorial(int i)
{
    if(i == 0) return 1;
    return i * factorial(i - 1);
}

// Function to reverse an array in place
void reverse_array(int arr[], int size)
{
    int f = 0;
    int l = size - 1;
    while(f < l)
    {
        int tmp = arr[f];
        arr[f] = arr[l];
        arr[l] = tmp;
        f++;
        l--;
    }
}

void max_element(int arr[],int size)
{
    int max_val = arr[0];

    for (int i = 0; i <size; i++)
    {
        if(arr[i]>max_val)
        {
            max_val=arr[i];
        }
    }
    cout<<max_val<<endl;
}

bool prime_or_not(int num)
{
    if(num==1) return false;

    for (int i = 2; i *i<=num; i++)
    {
        if(num%i==0)
        {
           return false;
        }
    }

    return true;
}
void count_vowel(char s[])
{
    
 int cnt[26]={0};
    for (int i = 0; i <strlen(s); i++)
    {
      
      if(s[i]>='A' && s[i]<='Z')
      {
       s[i] +=32;

      }
      if(s[i]>='a' && s[i]<='z')
      {
       int val = s[i] - 'a';
       cnt[val]++;
      }
    }
    
     for (int i = 0; i < 26; i++) {
        if (cnt[i] != 0) { 
            cout << char(i + 'a') << " " << cnt[i] << endl;
        }
    }

    
}


void len_string(char s[])
{
    int len = 0; 

   
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;  
    }
    cout << "Length of the string is: " << len << endl;
}

int remove_duplicate(int arr[], int size)
{
    if (size == 0) return 0;

    int unique = 0;

    for (int i = 1; i < size; i++)
    {
     
        if (arr[i] != arr[unique])
        {
            unique++; 
            arr[unique] = arr[i];  
        }
    }

    return unique + 1;  
}

int second_max(int arr[], int size)
{
   int first = arr[0];
   int second=-1;

    for (int i = 1; i < size; i++)
    {
       if(arr[i] !=first)
       {
        second = arr[i];
        break;

       }
        
    }
    
}


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b; 
        a = temp; 
    }
    return a;  
}
int main()
{
    // Factorial example (you can uncomment if needed)
    // int result = factorial(5);  
    // cout << "Factorial of 5 is: " << result << endl; 

//    int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int new_size = remove_duplicate(arr, n);

//     for (int i = 0; i < new_size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int result = second_max(arr,n);
//    cout<<result<<endl;

    // // 

    // max_element(arr,n);
  
    // reverse_array(arr, n);  // Reverse the array

    // // Print the reversed array
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;




    // int num;
    // cin>>num;
    //    if (prime_or_not(num)) {
    //     cout << num << " is a prime number." << endl;
    // } else {
    //     cout << num << " is not a prime number." << endl;
    // }



//   char s[100];
//   cin>>s;
//   len_string(s);
//   count_vowel(s);




//  find gcd
int a,b;
cin>>a,b;


gcd(a,b);
    return 0;
}
