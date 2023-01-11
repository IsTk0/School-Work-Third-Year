#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int main(){
    
    srand(time(NULL));

    int matrix[3][3];

    int position_max_number, position_min_number;
    int position_max_number_row, position_max_number_colums;
    int position_min_number_row, position_min_number_colums;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix[i][j] = rand()%25+1;
            if (matrix[i][j] >= position_max_number){
                position_max_number = matrix[i][j];
                position_max_number_row = i;
                position_max_number_colums = j;
            }
            if (matrix[i][j] <= position_min_number){
                position_min_number = matrix[i][j];
                position_min_number_row = i;
                position_min_number_colums = j;
            }
        }
        cout << endl;
    }


    //DEBUG
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "ROW COLUMS" << endl;
    cout << position_max_number_row << " " << position_max_number_colums << " numero maggiore"<< endl;
    cout << position_min_number_row << " " << position_min_number_colums << " numero minore" << endl;

}