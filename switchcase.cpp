#include <iostream>
#include <string>

using namespace std;

int main (){


    int typesFeeling;

    cout << "How are you feeling today?" << endl;

    cout << "1 for Happy" << endl;

    cout << "2 for Sad" << endl;

    cout << "3 for Angry" << endl;

    cout << "4 for Excited" << endl;

    cout << "5 for Bored" << endl;

   
    cin >> typesFeeling;

    switch (typesFeeling) {
            
        case 1:       
        cout << "Wow, make sure to recieve it fully." << endl;
            break;
            case 2:
            cout << "Sorry to hear but it won't last forever." << endl;
            break;
        case 3:
            cout << "Always remember you do not have to give power to others" << endl;
            break;
        case 4:
            cout << "Intresting it is, but don't let it make you blind." << endl;
            break;
        case 5:
            cout << "Hmm, Do what you really want to do not just an exhibition" << endl;
            break;
        default:
            cout << "Ohh you need to learn english first, my friend!" << endl;
            break;

           
    }

 return 0;


}
