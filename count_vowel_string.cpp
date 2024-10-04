#include <iostream>
#include <cstring>

using namespace std;


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

int main()
{


  char s[100];
  cin>>s;

  count_vowel(s);

   
    return 0;
}
