#include <iostream>

// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: ROT13.cpp
// Last Modification Date: 22/02/2018
// Author1 and ID and Group: Hussien Ashraf Feteiha, 20170093, Group 4
// Teaching Assistant: Hala Abd El-Kader
// Purpose: Encrypt and Decrypt messages using rot13 cipher.


using namespace std;

int main()
{
    cout << "\t \t WELCOME TO ROT13" << endl;
    while(true)
    {
    int choice;
    cout << "\nPress 1 to enter a message or press 2 to exit: ";
    cin >> choice;
    if (choice==2)
    {
        break;
    }
    else if(choice==1)
    {
    cout << "\nEnter your message: ";
    string message, new_message;
    getline(cin.ignore(),message);
    for (int i = 0 ;  i < message.length() ; i++)
    {
        char new_letter;
        char letter;
        letter=message[i];
        if ((letter > 'Z' && letter < 'a') || (letter > 'z') || (letter < 'A'))
        {
            new_message.push_back(letter);
        }
        else if (letter < 'N' && letter >= 'A')
        {
            new_letter = letter + 13;
            new_message.push_back(new_letter);
        }
        else if (letter > 'M' && letter <= 'Z')
        {
            new_letter = letter - 13;
            new_message.push_back(new_letter);
        }
        else if (letter<'n' && letter >= 'a')
        {
            new_letter= letter + 13;
            new_message.push_back(new_letter);
        }
        else if (letter >'m' && letter <= 'z')
        {
            new_letter = letter - 13;
            new_message.push_back(new_letter);
        }
    }
    cout << "\nYour message is : \n \t"<< new_message <<endl ;

    }
    else
    {
        cout<<"\nPlease enter a valid number"<<endl;
    }
    }
    return 0;
}
