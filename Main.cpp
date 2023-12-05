#include <iostream>
using namespace std;

bool zero_one(){
    int value = rand()%2;
    return value;
}

string func_password (int longg){
    string password ; char randomchar;
    while (!(password.length() == longg)){
        switch(rand()%42){
            case 0 : 
                if (zero_one() == true){
                    randomchar = 'a';
                }
                else 
                {randomchar = 'A';}
                break;
            case 1 : 
                if (zero_one() == true){
                    randomchar = 'b';
                }
                else 
                {randomchar = 'B';}
                break;
            case 2 : 
                if (zero_one() == true){
                    randomchar = 'c';
                }
                else 
                {randomchar = 'C';}
                break;
            case 3 : 
                if (zero_one() == true){
                    randomchar = 'd';
                }
                else 
                {randomchar = 'D';}
                break;
            case 4 : 
                if (zero_one() == true){
                    randomchar = 'e';
                }
                else 
                {randomchar = 'E';}
                break;
            case 5 : 
                if (zero_one() == true){
                    randomchar = 'f';
                }
                else 
                {randomchar = 'F';};
                break;
            case 6 : 
                if (zero_one() == true){
                    randomchar = 'g';
                }
                else 
                {randomchar = 'G';}
                break;
            case 7 : 
                if (zero_one() == true){
                    randomchar = 'h';
                }
                else 
                {randomchar = 'H';}
                break;
            case 8 : 
                if (zero_one() == true){
                    randomchar = 'i';
                }
                else 
                {randomchar = 'I';}
                break;
            case 9 : 
                if (zero_one() == true){
                    randomchar = 'j';
                }
                else 
                {randomchar = 'J';}
                break;
            case 10 : 
                if (zero_one() == true){
                    randomchar = 'k';
                }
                else 
                {randomchar = 'K';}
                break;
            case 11 : 
                if (zero_one() == true){
                    randomchar = 'l';
                }
                else 
                {randomchar = 'L';}
                break;
            case 12 : 
                if (zero_one() == true){
                    randomchar = 'm';
                }
                else 
                {randomchar = 'M';}
                break;
            case 13 : 
                if (zero_one() == true){
                    randomchar = 'n';
                }
                else 
                {randomchar = 'N';}
                break;
            case 14 : 
                if (zero_one() == true){
                    randomchar = 'o';
                }
                else 
                {randomchar = 'O';}
                break;
            case 15 : 
                if (zero_one() == true){
                    randomchar = 'p';
                }
                else 
                {randomchar = 'P';}
                break;
            case 16 : 
                if (zero_one() == true){
                    randomchar = 'q';
                }
                else 
                {randomchar = 'Q';}
                break;
            case 17 : 
                if (zero_one() == true){
                    randomchar = 'r';
                }
                else 
                {randomchar = 'R';}
                break;
            case 18 : 
                if (zero_one() == true){
                    randomchar = 's';
                }
                else 
                {randomchar = 'S';}
                break;
            case 19 : 
                if (zero_one() == true){
                    randomchar = 't';
                }
                else 
                {randomchar = 'T';}
                break;
            case 20 : 
                if (zero_one() == true){
                    randomchar = 'u';
                }
                else 
                {randomchar = 'U';}
                break;
            case 21 : 
                if (zero_one() == true){
                    randomchar = 'v';
                }
                else 
                {randomchar = 'V';}
                break;
            case 22 : 
                if (zero_one() == true){
                    randomchar = 'w';
                }
                else 
                {randomchar = 'W';}
                break;
            case 23 : 
                if (zero_one() == true){
                    randomchar = 'x';
                }
                else 
                {randomchar = 'X';}
                break;
            case 24 : 
                if (zero_one() == true){
                    randomchar = 'y';
                }
                else 
                {randomchar = 'Y';}
                break;
            case 25 : 
                if (zero_one() == true){
                    randomchar = 'z';;
                }
                else 
                {randomchar = 'Z';}
                break;
            case 26 :
                randomchar = '1';
                break;
            case 27 :
                randomchar = '2';
                break;
            case 28 :
                randomchar = '3';
                break;
            case 29 :
                randomchar = '4';
                break;
            case 30 :
                randomchar = '5';
                break;
            case 31 :
                randomchar = '6';
                break;
            case 32 :
                randomchar = '7';
                break;
            case 33 :
                randomchar = '8';
                break;
            case 34 :
                randomchar = '9';
                break;
            case 35 :
                randomchar = '0';
                break;
            case 36 :
                randomchar = '!';
                break;
            case 37 :
                randomchar = '@';
                break;
            case 38 :
                randomchar = '#';
                break;
            case 39 :
                randomchar = '$';
                break;
            case 40 :
                randomchar = '%';
                break;
            case 41 :
                randomchar = '*';
                break;

        }
        password += randomchar;
    }
    return password;
}

int main (){
    cout << "How long do you want the password to be ? :- "; int longg; cin >> longg;
    cout << "How many passwords do you want ? :- "; int times; cin >> times;

    srand(time(0));
    for (int loop = 1 ; loop <= times ; loop++){
        cout << func_password(longg) << endl;
    }
    
    return 1123;
}
