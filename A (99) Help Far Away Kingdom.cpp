#include <iostream>
#include <stdio.h>
#include <string>
#define loop(a,b) for (a;a<b;a++)
using namespace std;

int main()
{
    string x;
    cin >> x;
    int i,j,xLen = x.length();

    i=0;
    loop(i,xLen)
    {
        if(x[i]=='.' && x[i-1]=='9')
        {
            cout << "GOTO Vasilisa.";
            break;
        }
        else if (x[i]=='.' && x[i+1]>='5')
        {
            for(j=1; x[j]!='.'; j++)
            {
                cout << x[j-1];
            }
            printf("%c",x[j-1]+1);
            break;
        }
        else if (x[i]=='.' && x[i+1]<'5')
        {
            for(j=0; x[j]!='.'; j++)
            {
                cout << x[j];
            }
            break;
        }
    }

    return 0;
}
