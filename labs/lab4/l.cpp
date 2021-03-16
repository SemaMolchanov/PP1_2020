#include <iostream>

using namespace std;

int bmin[100002]; 
int crdi[100002]; 
int crdj[100002];

int main(){
	
	int row, column;
	cin >> row >> column;
	int m[row][column];
	for (int i = 0; i < row; i++){
		for (int j = 0; j < column; j++){
			cin >> m[i][j];
		}
	}
	for (int i = 0; i < column; i++){
		bmin[i] = m[0][i];
		for (int j = 0; j < row; j++){
			if (m[j][i] < bmin[i]){
				bmin[i] = m[j][i];
				crdi[i] = j;
				crdj[i] = i;
			}
		}
	}
	int sum = 0;
	printf("coordinates of min elements:\n");
	for (int i = 0; i < column; i++){
		cout << crdi[i] + 1 << ";" << crdj[i] + 1 << endl;
	}
	for (int i = 0; i < column;i++){
		sum += bmin[i];
	}
	printf("Their sum:\n");
    cout << sum;
}