#include <iostream>

using namespace std;

bool controllo_colpita(bool tavola[10][10], char row, int column){	
		
		int row_int;
		row_int = int(row);
		row_int = row_int-65;
		
		if (tavola[row_int][column] == true)
			return true;
		else
			return false;
}

int main(){
	
	bool tavola[10][10] = {{false,true,true,false,false,false,false,true,true,false},
							{false,false,false,false,false,false,false,false,false,false},
							{false,false,true,true,true,false,false,false,true,false},
							{false,false,false,false,false,false,false,false,false,false},
							{false,true,false,false,false,false,false,true,false,false},
							{false,false,false,false,false,false,false,true,false,false},
							{true,false,false,true,false,false,false,true,false,false},
							{false,false,false,true,false,false,false,false,false,false},
							{false,false,false,true,false,false,true,true,false,false},
							{false,false,false,true,false,false,false,false,true,false}};
	
	char row;
	bool gioco = true;
	int column, counter = 0;
	
	while (gioco){
		cout << "Inserisci la riga di dove vuoi lanciare la bomba-> ";
		cin >> row;
		cout << "Inserisci la colonna di dove vuoi lanciare la bomba-> ";
		cin >> column;
		
		bool ritorno = controllo_colpita(tavola, row, column);
		
		if (ritorno == 1){
			counter++;
			if(counter == 20)
				gioco = false;
		}
		
	}
								
}
