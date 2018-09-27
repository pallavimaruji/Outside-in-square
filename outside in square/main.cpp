#include <iostream>

using namespace std;

int main()
{
    int n,i,j;
    cout << "Enter no." ;
    cin >> n;
    int c=n;
    for( ;i==n; )
        cout<<c;
            for(i=n-1;i>=1;i--)
            {
                for(j=n;j!=i;j--)
                cout<<c;
                if(j==i)
                    cout<<--c;
            }
    return 0;
}
