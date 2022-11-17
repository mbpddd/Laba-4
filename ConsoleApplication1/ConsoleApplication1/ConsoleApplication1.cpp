// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int arr[4][2] = {{2,4},{5,7},{2,5},{3,3}};
    

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 2; j++) {

                cout << " " << arr[i][j] << endl;
            }cout << endl;
        }
    
}
