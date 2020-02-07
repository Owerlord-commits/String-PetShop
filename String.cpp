#include <iostream>
# include <string>
using namespace std;




class PetShop
{
string animal;
int cost;
int count;
char sex;
public:
PetShop();
void Init();
void Show();
};
PetShop::PetShop()
{
        cost = 0;
        count = 0;
        sex = 'd';
}
void PetShop::Init()
{
        cout<<"Enter type animal: ";
        cin>>animal;
        cout<<"Enter cost: ";
        cin>>cost;
        cout<<"Enter count: ";
        cin>>count;
        cout<<"Enter sex(M/W): ";
        cin>>sex;
}
void PetShop::Show()
{
        cout<<"Type - "<<animal<<endl
            <<"Cost - "<<cost<<endl
            <<"Count - "<<count<<endl
            <<"Sex - "<<sex<<endl;
}
void Menu()
{
        PetShop petshop;
        char choise;
        for(;;)
        {
                cout<<"1.Add\n"
                    <<"2.Show\n"
                    <<"3.Exit\n"
                    <<"Enter choise: ";
                cin>>choise;
                switch (choise)
                {
                case '1':
                        petshop.Init();
                        break;
                case '2':
                        petshop.Show();
                        break;
                case '3':
                        return;
                }
        }
}
int main()
{
        Menu();
        return 0;
}
