#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;
int n, g, con;
int main() {
	int con = 0;
	con %= 6;
	for (int i = 1; i <= 6; i++) {
		if (i == 1) {
			con = 0;
			srand(time(NULL));
			n = rand() % 100 + 1;
		}
		char a;
		printf("Please guess a magic number:");
		scanf("%d", &g);
		if (g > n) {
			con++;
			printf("Wrong!Too high!\n");
		}
		else if (g < n) {
			con++;
			printf("Wrong!Too low!\n");
		}
		else {
			con++;
			printf("Right!\ncounter=%d\nDo you want to continue(Y/N or y/n)?",con);
			cin >> a;
			if (a == 'Y' || a == 'y') {
				i = 0;
				continue;
			}
			else {
				printf("The game is over!");
				break;
			}
		}
		if (g != n && con == 6) {
			printf("counter=6\nThe magic number is %d\nDo you want to continue(Y/N or y/n)?", n);
			cin >> a;
			if (a == 'Y' || a == 'y') {
				i = 0;
				continue;
			}
			else {
				printf("The game is over!");
				break;
			}
		}
		
	}
	return 0;
}