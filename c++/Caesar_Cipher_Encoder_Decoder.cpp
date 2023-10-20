#include <iostream>
#include <string.h>

using namespace std;

void decode(){
    string in_str;
    cout << "Enter the string to decode: ";
    cin >> in_str;
    bool isKey = false;
    char check;
    cout << "Do you have a key?(Y/n): ";
    cin >> check;
    if(check == 'y' || check == 'Y') isKey = true;
    if(isKey){
        long long key;
        cout << "Enter key for decryption: ";
        cin >> key;
        if(key < 0) {cout << "Key has to be positive!" << endl; return;}
        string str = in_str;
        for(long long i = 0; i < (long long)str.length(); i++){
            if(str[i] <= 'Z' && str[i] >= 'A'){
                long long t = (long long) str[i] - key;
                if(t < 'A') str[i] = 'Z' + 1 - ('A'-t)%26;
                else str[i] = t;
            }
            else if(str[i] <= 'z' && str[i] >= 'a'){
                long long t = (long long) str[i] - key;
                if(t < 'a') str[i] = 'z' + 1 - ('a'-t)%26;
                else str[i] = t;
            }
            else continue;
        }
    }
    else{
        cout << "Bruteforcing all 26 combinations..." << endl;
        long long key = 0;
        while(key < 26){
            string str = in_str;
            for(long long i = 0; i < (long long)str.length(); i++){
                if(str[i] <= 'Z' && str[i] >= 'A'){
                    long long t = (long long) str[i] - key;
                    if(t < 'A') str[i] = 'Z' + 1 - ('A'-t)%26;
                    else str[i] = t;
                }
                else if(str[i] <= 'z' && str[i] >= 'a'){
                    long long t = (long long) str[i] - key;
                    if(t < 'a') str[i] = 'z' + 1 - ('a'-t)%26;
                    else str[i] = t;
                }
                else continue;
            }
            cout << "Key " << key << " --> " << str << endl;
            key++;
        }
    }
}

void encode(){
    string str;
    cout << "Enter the string to encode: ";
    cin >> str;
    long long key;
    cout << "Enter key for encryption: ";
    cin >> key;
    if(key < 0) {cout << "Key has to be positive!" << endl; return;}
    for(long long i = 0; i < (long long)str.length(); i++){
        if(str[i] <= 'Z' && str[i] >= 'A'){
            long long t = (long long) str[i] + key;
            if(t > 'Z') str[i] = 'A' - 1 + (t-'Z')%26;
            else str[i] = t;
        }
        else if(str[i] <= 'z' && str[i] >= 'a'){
            long long t = (long long) str[i] + key;
            if(t > 'z') str[i] = 'a' - 1 + (t-'z')%26;
            else str[i] = t;
        }
        else continue;
    }
    cout << "Encoded string is --> " << str << endl;
}
 
int main(){
    cout << "Caesar Cipher Encoder and Decoder" << endl;
    long long option;
    cout << "Modes:\n1.Decode\n2.Encode\n3.Exit\nChosen Mode: ";
    cin >> option;
    if(option == 1) decode();
    else if(option == 2) encode();
    else if(option == 3){
        cout << "Thanks for using! Exiting now." << endl;
    }
    return 0;
}