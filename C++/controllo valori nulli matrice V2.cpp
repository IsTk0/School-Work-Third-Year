#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int matrix[20][20];
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            matrix[i][j]=rand()%2;
        }
    }
    int count=0;

    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            if(matrix[i][j]==0)
            {
                count++;
            }
        }
    }
;

    if(count>=(20*20)*0.8)
    {
        for(int i=0;i<20;i++)
        {
            for(int j=0;j<20;j++)
            {
                if(matrix[i][j]!=0)
                {
                    cout<<matrix[i][j]<<" ";
                }
            }
        }
    }
    else
    {
        for(int i=0;i<20;i++)
        {
            for(int j=0;j<20;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}