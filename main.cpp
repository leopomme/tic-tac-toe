#include <iostream>

using namespace std;

int main ()
{
    string array[3][3];
    int row,col;
    bool space = true;
    
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            array[i][j]=" ";
    
    while(space)
    {
        
        do
        {
            cout<<"enter row: ";
            cin>>row;
            
            cout<<"enter column: ";
            cin>>col;
        }
        while(row<1 || row>3 || col<1 || col>3);
        
        array[row-1][col-1]="A";
        
        for(int i=0;i<3;i++)
        {
            cout<<"\n-------\n|";
            for(int j=0;j<3;j++)
                cout<<array[i][j]<<"|";
        }

        cout<<"\n-------\n";
        
        
        space = false;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                if(array[i][j]==" ")
                    space = true;
        
        
    }
}
