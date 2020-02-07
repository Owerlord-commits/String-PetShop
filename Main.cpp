#include <iostream>
using namespace std;
void Sort(int * mas, int size)
{
        bool flag = true;
        while(flag)
        {
                flag = false;
                for(int i=0; i<size; i++)
                {
                        if(mas[i]>mas[i+1])
                        {
                                int buff = mas[i];
                                mas[i]=mas[i+1];
                                mas[i+1]=buff;
                                flag = true;

                        }
                }
        }
}
int main()
{
        srand(time(0));
        const int size = 10;
        int * mas = new int[size];
        for(int i=0; i<size; i++)
        {
                mas[i] = rand() % 100;
        }
        for(int i=0; i<size; i++)
        {
                cout<<mas[i]<<"\t";
        }
        Sort(mas,size);
        cout<<endl;
        for(int i=0; i<size; i++)
        {
                cout<<mas[i]<<"\t";
        }
        return 0;
}
