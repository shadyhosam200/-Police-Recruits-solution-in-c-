#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int crimes = 0, police = 0, events  ;
    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++)
    {
        cin >> events;

        if (events>0)
        {


            police+=events;
            continue;

        }

        if (police>0 && events<0)
{

            police-=1;
            continue;
}
        if (events<0)
          {


            crimes++;
          }

    }
    cout << crimes;






}


