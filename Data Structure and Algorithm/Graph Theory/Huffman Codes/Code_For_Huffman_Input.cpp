
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    string s1,s2,s3;
    s1 = s2 = s3 =  "";
    cout << "Enter how many letters: ";
    cin >> n;

    cout << "Enter letters and frequency: ";

    for (i = 0; i < n; i++)
    {
        cin>>s1;
        getchar();
        cin >> n;
        // s2 = s1;
        for (int j = 0; j < n; j++)
        {
            s2 = s2 + s1;
        }
        s1 = " ";
    }



    cout <<"Output of the inputs\n"<< s2; 

    return 0;

}



/* 

a 45 b 13 c 12 d 16 e 9 f 5

aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
bbbbbbbbbbbbbccccccccccccddddddddddddddddeeeeeeeeefffff


 */