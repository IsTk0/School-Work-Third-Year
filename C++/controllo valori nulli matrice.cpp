#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(NULL));

    int matrix[10][10];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix[i][j] = rand()%2;
        }
    }

    //check if existing row whit all 0
    for(int i=0;i<3;i++){
        int count = 0;
        for(int j=0;j<3;j++){
            if(matrix[i][j] == 0){
                count++;
            }
        }
        if(count == 3){
            cout << "row " << i << " is all 0" << endl;
        }
    }   

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}