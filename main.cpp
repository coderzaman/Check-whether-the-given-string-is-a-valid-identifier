#include<iostream>
using namespace std;

int main(){
    string identefier;
    cout << "Please Enter Your Identifier: ";
    getline(cin, identefier);
    bool flag = true;

    if(identefier[0] == '_' || 
    (identefier[0] >=  'a' && identefier[0] <= 'z') 
    || (identefier[0] >=  'A' && identefier[0] <= 'Z')){
        for (size_t i = 1; i < identefier.length(); i++)
        {
            if(
                !(identefier[i] == '_' || 
                (identefier[i] >= 'a' && identefier[i] <= 'z') || 
                (identefier[i] >= 'A' && identefier[i] <= 'Z') || 
                isdigit(identefier[i]))){
                flag = false;
                break;
            }
        }

        if(flag == false){
            cout << identefier << " is Not Valid Identifier." << endl;
        }else{
            cout << identefier << " Valid Identifier." << endl;
        }

    }else{
        cout << identefier << " is Not Valid Identifier." << endl;
    }
}