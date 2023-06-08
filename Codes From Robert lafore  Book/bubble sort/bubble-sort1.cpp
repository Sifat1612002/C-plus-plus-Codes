#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void bubbleSort(float arr1[],int arr2[], int size);

int main()
{
    int size;
    cout << "Please enter the total number of students: ";
    cin >> size;
    int id[size];
    float phy, chem, avg[size];

    ifstream dat("student.txt");

    for(int i=0; i<size; i++)
    {
        dat >> id[i]>> phy>>chem;
        avg[i] = (phy + chem) /2.0;

    }


    bubbleSort(avg, id, size);

    cout << setw(10) << "Position" << setw(10) << "ID" << setw(10) << "Average"<< '\n';
    for(int i=0;i<size;i++){
        cout << setw(10) << i+1 << setw(10) << id[i] << setw(10) << avg[i] << '\n';
    }

    return 0;
}

void bubbleSort(float arr1[],int arr2[], int size)
{
    for (int step=0; step<(size-1); step++)
    {
        for (int i = 0; i < size - (step-1); i++)
            {
                if (arr1[i] < arr1[i + 1])
                {
                    float temp = arr1[i];
                    arr1[i] = arr1[i + 1];
                    arr1[i + 1] = temp;

                    int temp2 = arr2[i];
                    arr2[i] = arr2[i + 1];
                    arr2[i + 1] = temp2;
              }
        }
    }
}
