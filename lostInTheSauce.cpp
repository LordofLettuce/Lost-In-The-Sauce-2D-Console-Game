#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;

enum Keys{UP = 75, DOWN = 77, LEFT = 72, RIGHT = 80, BOMB = 32};

void escapeSequence(char *currentRoom[], int score){
	cout << "CONGRATS! YOU HAVE ESCAPED THE SAUCE! Your score: " << score;
}

void bomb(char *currentRoom[], int playerX, int playerY, int& bombX, int& bombY, bool& bombTick){
	currentRoom[playerX][playerY+1] = 'Q';
	bombTick = true;
	bombX = playerX;
	bombY = (playerY+1);
}

void boss(char *currentRoom[], int playerX, int playerY, int& bossX, int& bossY){
	int direction = -1;
	direction = rand() % 2;
	if(direction == 0){
		if(playerX > bossX){
			bossX++;
		}
		else if(playerX < bossX){
			bossX--;
		}
		else if(playerY > bossY){
			bossY++;
		}
		else if(playerY < bossY){
			bossY--;
		}
	}
	
}

void frog(char *currentRoom[], int currentRoomX, int currentRoomY, int& frogX, int& frogY){
	int direction = 0;
	direction = rand() % 4;
		
	if(direction == 0 && currentRoom[frogX][frogY-1] != '#' && currentRoom[frogX][frogY-1] != 'U'){
		frogY--;
	}
	else if(direction == 1 && currentRoom[frogX][frogY+1] != '#' && currentRoom[frogX][frogY+1] != 'U'){
		frogY++;
	}
	else if(direction == 2 && currentRoom[frogX-1][frogY] != '#' && currentRoom[frogX-1][frogY] != 'U'){
		frogX--;
	}
	else if(direction == 3 && currentRoom[frogX+1][frogY] != '#' && currentRoom[frogX+1][frogY] != 'U'){
		frogX++;
	}
	
	//out of bounds correction
	if(frogX > (currentRoomX-1)){
		frogX = (currentRoomX-1);
	}
	else if(frogY > (currentRoomY-1)){
		frogY = (currentRoomY-1);
	}
	else if(frogX < 1){
		frogX = 1;
	}
	else if(frogY < 0){
		frogY = 0;
	}
}

void room6(char *currentRoom[], int playerX, int playerY, int& currentRoomX, int& currentRoomY, bool room[]){
	system("cls");
	room[6] = true;
	currentRoomX = 11;
	currentRoomY = 17;
	for(int i = 0; i < currentRoomX; i++){
		for(int j = 0; j < currentRoomY; j++){
			currentRoom[i][j] = '#';
		}
	}
	for(int i = 2; i < (currentRoomX-1); i++){
		for(int j = 1; j < (currentRoomY-1); j++){
			currentRoom[i][j] = ' ';
		}
	}
}

void room5(char *currentRoom[], int playerX, int playerY, int& currentRoomX, int& currentRoomY, bool room[]){
	system("cls");
	room[5] = true;
	currentRoomX = 15;
	currentRoomY = 15;
	for(int i = 0; i < currentRoomX; i++){
		for(int j = 0; j < currentRoomY; j++){
			currentRoom[i][j] = '#';
		}
	}
	for(int i = 2; i < (currentRoomX-1); i++){
		for(int j = 1; j < (currentRoomY-1); j++){
			currentRoom[i][j] = ' ';
		}
	}
	for(int i = 0; i < currentRoomX; i++){
		currentRoom[i][7] = '#';
	}
	for(int i = 9; i < currentRoomX; i++){
		for(int j = 7; j < currentRoomY; j++){
			currentRoom[i][j] = '#';
		}
	}
	for(int i = 9; i < 12; i++){
		currentRoom[i][0] = ' ';
	}
	currentRoom[5][14] = 'U';

}

void room4(char *currentRoom[], int playerX, int playerY, int& currentRoomX, int& currentRoomY, bool room[]){
	system("cls");
	room[4] = true;
	currentRoomX = 6;
	currentRoomY = 20;
	for(int i = 0; i < currentRoomX; i++){
		for(int j = 0; j < currentRoomY; j++){
			currentRoom[i][j] = ' ';
		}
	}
	for(int i = 0; i < currentRoomY; i++){
	currentRoom[5][i] = '#';
	currentRoom[1][i] = '#';
	}
	currentRoom[3][19] = 'U';
}

void room3(char *currentRoom[], int playerX, int playerY, int& currentRoomX, int& currentRoomY, bool room[]){
	system("cls");
	room[3] = true;
	currentRoomX = 12;
	currentRoomY = 8;
	for(int i = 0; i < currentRoomX; i++){
		for(int j = 0; j < currentRoomY; j++){
			currentRoom[i][j] = ' ';
		}
	}
	for(int i = 0; i < currentRoomX; i++){
			currentRoom[i][0] = '#';
			currentRoom[i][1] = '#';
	}
	for(int i = 0; i < currentRoomY; i++){
			currentRoom[12][i] = '#';
			currentRoom[11][i] = '#';
	}
	currentRoom[6][7] = 'U';
}

void room2(char *currentRoom[], int playerX, int playerY, int& currentRoomX, int& currentRoomY, bool room[]){
	system("cls");
	room[2] = true;
	currentRoomX = 10;
	currentRoomY = 20;
	for(int i = 0; i < currentRoomX; i++){
		for(int j = 0; j < currentRoomY; j++){
			currentRoom[i][j] = ' ';
		}
	}
	for(int i = 0; i < 5; i++){
		for(int j = 9; j < 12; j++){
			currentRoom[i][j] = '#';
		}
	}
	for(int i = 5; i < 7; i++){
		for(int j = 5; j < 7; j++){
			currentRoom[i][j] = '#';
		}
	}
	for(int i = 0; i < 10; i++){
		currentRoom[i][0] = '#';
		currentRoom[i][1] = '#';
		}
	currentRoom[9][15] = 'U';
}

void room1(char *currentRoom[], int playerX, int playerY, int& currentRoomX, int& currentRoomY, bool room[]){
	system("cls");
	room[1] = true;
	currentRoomX = 12;
	currentRoomY = 12;
	for(int i = 0; i < currentRoomX; i++){
		for(int j = 0; j < currentRoomY; j++){
			currentRoom[i][j] = ' ';
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			currentRoom[i][j] = '#';
		}
	}
	for(int i = 9; i < 12; i++){
		for(int j = 0; j < 3; j++){
			currentRoom[i][j] = '#';
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 9; j < 12; j++){
			currentRoom[i][j] = '#';
		}
	}
	for(int i = 9; i < 12; i++){
		for(int j = 9; j < 12; j++){
			currentRoom[i][j] = '#';
		}
	}
	
	currentRoom[11][4] = 'U';
}

void room0(char *currentRoom[], int playerX, int playerY, int& currentRoomX, int& currentRoomY, bool room[]){
	system("cls");
	room[0] = true;
	for(int i = 0; i < currentRoomX; i++){
		for(int j = 0; j < currentRoomY; j++){
			currentRoom[i][j] = ' ';
		}
	}
	for(int i = 0; i < 20; i++){
	currentRoom[i][20] = '#';
	}
	for(int i = 0; i < 20; i++){
	currentRoom[i][19] = '#';
	}
	for(int i = 10; i < 15; i++){
		for(int j = 10; j < 15; j++){
			currentRoom[i][j] = '#';
		}
	}
	for(int i = 15; i < 20; i++){
		for(int j = 3; j < 8; j++){
			currentRoom[i][j] = '#';
		}
	}
	for(int i = 0; i < 5; i++){
		for(int j = 15; j < 20; j++){
			currentRoom[i][j] = '#';
		}
	}
	currentRoom[4][0] = 'U';
}

void gameloop(char *currentRoom[], int& playerX, int& playerY, int& frogX, int& frogY, int& bossX, int& bossY, int bombX, int bombY, int& currentRoomX, int& currentRoomY, int& score, int& count, HANDLE hConsole, int color, bool room[], bool bombTick, int numBombs, bool& gg){
		int ch = 0;
		int kbd_key = 0;
		int bombTicking = 0;
	while(!(kbd_key == 27)){
		ch = getch();
		currentRoom[playerX][playerY] = ' ';
		if(ch == UP && currentRoom[playerX][playerY-1] != '#'){
				playerY--;
		}
		else if(ch == DOWN && currentRoom[playerX][playerY+1] != '#'){
				playerY++;
		}
		else if(ch == LEFT && currentRoom[playerX-1][playerY] != '#'){
				playerX--;
		}
		else if(ch == RIGHT && currentRoom[playerX+1][playerY] != '#'){
				playerX++;
		}
		else if(ch == BOMB && numBombs > 0){
			bomb(currentRoom, playerX, playerY, bombX, bombY, bombTick);
			numBombs--;
		}
		
		//bomb Ticking
		if(bombTick){
			bombTicking++;
		}
		if(bombTicking >= 5){
		if(currentRoom[bombX][bombY] == '/' || currentRoom[bombX+1][bombY] == '/' || currentRoom[bombX-1][bombY] == '/' || currentRoom[bombX-1][bombY-1] == '/' || currentRoom[bombX][bombY-1] == '/' || currentRoom[bombX+1][bombY-1] == '/' || currentRoom[bombX-1][bombY+1] == '/' || currentRoom[bombX][bombY+1] == '/' || currentRoom[bombX+1][bombY+1] == '/'){
			currentRoom[bombX][bombY] = ' ';
			currentRoom[bombX+1][bombY] = ' ';
			currentRoom[bombX-1][bombY] = ' ';
			currentRoom[bombX-1][bombY-1] = ' ';
			currentRoom[bombX][bombY-1] = ' ';
			currentRoom[bombX+1][bombY-1] = ' ';
			currentRoom[bombX-1][bombY+1] = ' ';
			currentRoom[bombX][bombY+1] = ' ';
			currentRoom[bombX+1][bombY+1] = ' ';
			escapeSequence(currentRoom, score);
			gg = true;
			break;
		}
		currentRoom[bombX][bombY] = ' ';
		currentRoom[bombX+1][bombY] = ' ';
		currentRoom[bombX-1][bombY] = ' ';
		currentRoom[bombX-1][bombY-1] = ' ';
		currentRoom[bombX][bombY-1] = ' ';
		currentRoom[bombX+1][bombY-1] = ' ';
		currentRoom[bombX-1][bombY+1] = ' ';
		currentRoom[bombX][bombY+1] = ' ';
		currentRoom[bombX+1][bombY+1] = ' ';
		bombTicking = 0;
		bombTick = false;
		}
		
		
		//out of bounds correction
		if(playerX > (currentRoomX-1)){
			playerX = (currentRoomX-1);
		}
		else if(playerY > (currentRoomY-1)){
			playerY = (currentRoomY-1);
		}
		else if(playerX < 1){
			playerX = 1;
		}
		else if(playerY < 0){
			playerY = 0;
		}
		
		//player location checks
		if(currentRoom[playerX][playerY] == 'S' || currentRoom[playerX][playerY] == '/')
			break;
		else if(currentRoom[playerX][playerY] == 'C')
			score += 50;
		else if(currentRoom[playerX][playerY] == 'B')
			numBombs++;
		else if(currentRoom[playerX][playerY] == 'M')
			score += 100;
		else if(currentRoom[playerX][playerY] == 'U'){
			//room 1
			if(room[0] == true){
				if(currentRoom[playerX][playerY] == currentRoom[4][0]){
					room[0] = false;
					playerY = 11;
					room1(currentRoom, playerX, playerY, currentRoomX, currentRoomY, room);
				}
			}
			//room 2
			else if(room[1] == true){
				if(currentRoom[playerX][playerY] == currentRoom[11][4]){
					room[1] = false;
					playerX = 1;
					room2(currentRoom, playerX, playerY, currentRoomX, currentRoomY, room);
				}
			}
			//room 3
			else if(room[2] == true){
				if(currentRoom[playerX][playerY] == currentRoom[9][15]){
					room[2] = false;
					playerY = 4;
					playerX = 1;
					room3(currentRoom, playerX, playerY, currentRoomX, currentRoomY, room);
				}
			}
			//room 4
			else if(room[3] == true){
				if(currentRoom[playerX][playerY] == currentRoom[6][7]){
					room[3] = false;
					playerX = 3;
					playerY = 0;
					room4(currentRoom, playerX, playerY, currentRoomX, currentRoomY, room);
				}
			}
			//room 5
			else if(room[4] == true){
				if(currentRoom[playerX][playerY] == currentRoom[3][19]){
					room[4] = false;
					playerX = 10;
					playerY = 0;
					room5(currentRoom, playerX, playerY, currentRoomX, currentRoomY, room);
				}
			}
			//room 6
			else if(room[5] == true){
				if(currentRoom[playerX][playerY] == currentRoom[5][14]){
					room[5] = false;
					playerX = 6;
					playerY = 0;
					room6(currentRoom, playerX, playerY, currentRoomX, currentRoomY, room);
				}
			}
			
		}
		currentRoom[frogX][frogY] = ' ';
		currentRoom[playerX][playerY] = 'O';
		if(room[6] == false){
			frog(currentRoom, currentRoomX, currentRoomY, frogX, frogY);
			currentRoom[frogX][frogY] = 'S';

			if(count % 76 == 0 && currentRoom[rand() % currentRoomX][rand() % currentRoomY] != 'U')
			currentRoom[rand() % currentRoomX][rand() % currentRoomY] = 'C';
			if(count % 83 == 0 && currentRoom[rand() % currentRoomX][rand() % currentRoomY] != 'U')
			currentRoom[rand() % currentRoomX][rand() % currentRoomY] = 'B';
			if(count % 57 == 0 && currentRoom[rand() % currentRoomX][rand() % currentRoomY] != 'U')
			currentRoom[rand() % currentRoomX][rand() % currentRoomY] = 'M';
		}
		if(room[6] == true){
			currentRoom[bossX][bossY] = ' ';
			currentRoom[bossX+1][bossY] = ' ';
			currentRoom[bossX-1][bossY] = ' ';
			currentRoom[bossX-1][bossY-1] = ' ';
			currentRoom[bossX-1][bossY+1] = ' ';
			currentRoom[bossX][bossY+1] = ' ';
			boss(currentRoom, playerX, playerY, bossX, bossY);
			currentRoom[bossX][bossY] = '/';
			currentRoom[bossX+1][bossY] = '/';
			currentRoom[bossX-1][bossY] = '/';
			currentRoom[bossX-1][bossY-1] = '/';
			currentRoom[bossX-1][bossY+1] = '/';
			currentRoom[bossX][bossY+1] = '/';
		}
		//print array
		system("cls");
		color = 15;
		SetConsoleTextAttribute(hConsole, color);
		cout << "score: " << score << " bombs: " << numBombs << endl << endl;
		for(int i = 1; i < currentRoomX; i++){
			color = 15;
			SetConsoleTextAttribute(hConsole, color);
			for(int j = 0; j < currentRoomY; j++){
				if(currentRoom[i][j] == ' '){
					color = 170;
					SetConsoleTextAttribute(hConsole, color);
					cout << currentRoom[i][j];
				}
				else if(currentRoom[i][j] == '#'){
					color = 102;
					SetConsoleTextAttribute(hConsole, color);
					cout << currentRoom[i][j];
				}
				else if(currentRoom[i][j] == 'S'){
					color = 78;
					SetConsoleTextAttribute(hConsole, color);
					cout << currentRoom[i][j];
				}
				else if(currentRoom[i][j] == 'O'){
					color = 59;
					SetConsoleTextAttribute(hConsole, color);
					cout << currentRoom[i][j];
				}
				else if(currentRoom[i][j] == 'C' || currentRoom[i][j] == 'B' || currentRoom[i][j] == 'M'){
					color = 232;
					SetConsoleTextAttribute(hConsole, color);
					cout << currentRoom[i][j];
				}
				else if(currentRoom[i][j] == 'U'){
					color = 18;
					SetConsoleTextAttribute(hConsole, color);
					cout << currentRoom[i][j];
				}
				else if(currentRoom[i][j] == '/'){
					color = 78;
					SetConsoleTextAttribute(hConsole, color);
					cout << currentRoom[i][j];
				}
				else if(currentRoom[i][j] == 'Q'){
					int num = 0;
					num = rand() % 2;
					if(num == 0)
					color = 59;
					else
					color = 78;
					SetConsoleTextAttribute(hConsole, color);
					cout << currentRoom[i][j];
				}
			}
		color = 15;
		SetConsoleTextAttribute(hConsole, color);
		cout << endl;
		}
			
			if(ch == 27)
			break;
		count++;
		}
}

int main(void){
	srand(time(0));
	int currentRoomX = 20;
	int currentRoomY = 20;
	int playerX = 8;
	int playerY = 8;
	int frogX = 6;
	int frogY = 6;
	int bossX = 8;
	int bossY = 9;
	int bombX = 0;
	int bombY = 0;
	bool gg = false;
	bool bombTick = false;
	int score = 0;
	int count = 0;
	int color = 15;
	int numBombs = 0;
	char aKey;
	char *currentRoom[currentRoomX];
	bool room[7];
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
	system("cls");
	cout << "You are a humble, relatable chicken nugget, lost in the sauce.\n\n";
	cout << "Your mission, should you choose to accept it\n";
	cout << "Is to destroy the spaghetti monster.\n\n";
	cout << "Avoid the spaghetti noodle at all costs, it cannot be defeated.\n\n";
	cout << "(Arrow keys to move, Space bar to place bomb)\n\n";
	cout << "Type any key, and press ENTER twice: ";
	cin >> aKey;
	
	color = 15;
    SetConsoleTextAttribute(hConsole, color);
	
	//assign which room:
	for(int i = 0; i < 7; i++){
		room[i] = false;
	}
	room[0] = true;
	
	for(int i = 0; i < currentRoomY; i++){
		currentRoom[i] = new char[currentRoomY];
	}
	
	for(int i = 0; i < currentRoomX; i++){
		for(int j = 0; j < currentRoomY; j++){
			currentRoom[i][j] = ' ';
		}
	}
	
	room0(currentRoom, playerX, playerY, currentRoomX, currentRoomY, room);
	gameloop(currentRoom, playerX, playerY, frogX, frogY, bossX, bossY, bombX, bombY, currentRoomX, currentRoomY, score, count, hConsole, color, room, bombTick, numBombs, gg);
		if(gg == false){
		cout << "Nice try! Your score: " << score;
		}
}