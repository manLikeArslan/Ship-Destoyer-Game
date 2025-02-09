#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	bool ships[4][4] = {0};
	
	srand(time(0));
	
	int shipstoPlace = 4;
	while(shipstoPlace>0){
		int row = rand()%4;
		int col = rand()%4;
		
		if(ships[row][col] == 0){
			ships[row][col] = 1;
			shipstoPlace--;
		}
	}
	cout<<"************Battle Of Warships************"<<endl;
	cout<<"Rules: "<<endl<<"> Enter co-ordinates by enter row and column number (between 0-3) to hit a ship"
		<<endl<<"> You have to hit 4 ships and have unlimited tries.";
	int hits=0;
	int tries=0;
	while(hits < 4){
		int row, column;
		cout<<endl<<"Enter row number: ";
		cin>>row;
		cout<<"Enter column number: ";
		cin>>column;
		
		if(ships[row][column]==1){
			cout<<"You Scored a hit! "<<3-hits<<" Ships are left"<<endl;
			ships[row][column] = 0;
			hits++;
			
		}else{
			cout<<"You missed";
		}
		tries++;
	}
	cout<<"Victory!!";
	cout<<endl<<"You made "<<tries<<" attempts to destroy ships";

}
