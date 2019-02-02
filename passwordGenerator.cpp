#include <iostream>
#include <stdlib.h>
#include <array>
#include <vector>
#include <algorithm>
#include <iterator>
#include <random>
#include <ctime>
#include <numeric>
#include <iomanip>

using namespace std;

int suspectedPassLenght;
int keyboardSectionSelection;
int complexityScale;
int suspecionCertinity;
int charDensity;
int webAppTargetSelection;
string keywords;
int depth;

char upperCasePool[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char lowerCasePool[] = "abcdefghijklmnopqrstuvwxyz";
char leftSectionPool[] ="AaBbCcDdEeFfGgHhNnQqRrSsTtVvXxYyZz";
char rightSectionPool[] = "UuJjMmKkIiLlOoPp";
char specialSymPool[] = "!~`@#$%^&*()_+=-?,.<>";
char numberPool[] = "1234567890";
int upperCasePoolSize = 26;
int lowerCasePoolSize = 26;
int leftSectionPoolSize = 34;
int rightSectionPoolSize = 16;
int specialSymPoolSize = 21;
int numberPoolSize = 10;
 


 char getRandomUpperCase(){
     int randomNumber = rand()%upperCasePoolSize;
     return upperCasePool[randomNumber];
 }

char getRandomLowerCase(){
    int randomNumber = rand()%lowerCasePoolSize;
    return lowerCasePool[randomNumber];

}

char getRandomLeftSection(){
    int randomNumber = rand()%(leftSectionPoolSize);
    return leftSectionPool[randomNumber];

}

char getRandomRightSection(){
    int randomNumber = rand()%rightSectionPoolSize;
    return rightSectionPool[randomNumber];
}

char getRandomSpecialSym(){
    int randomNumber = rand()%specialSymPoolSize;
    return specialSymPool[randomNumber];
}

char getRandomNumber(){
    int randomNumber = rand()%numberPoolSize;
    return numberPool[randomNumber];
}
char randomPassword(int x){
    int passwordSize = x;
    vector<char> randomPassword;
    
    while(randomPassword.size() != passwordSize){
    switch (rand()%4)
    {
        case 0:
            randomPassword.push_back(getRandomUpperCase());
            break;
        case 1:
            randomPassword.push_back(getRandomLowerCase());
            break;
        case 2:
            randomPassword.push_back(getRandomSpecialSym());
            break;
        case 3:
            randomPassword.push_back(getRandomNumber());
            break;
        default:
            break;
    }
    }
    for(unsigned int i = 0; i < randomPassword.size(); i++){
        cout<<randomPassword.at(i);
    }
    return 0;

}
char randomNumberPassword(int x){
int passwordSize = x;
vector<char> randomPassword;

while(randomPassword.size() != passwordSize){
    randomPassword.push_back(getRandomNumber());
}
for(unsigned int i = 0; i < randomPassword.size(); i++){
    cout<<randomPassword.at(i);
}
return 0;
}
char randomUpperCasePassword(int x){
    int passwordSize = x;
    vector<char> randomPassword;
    while(randomPassword.size() != passwordSize){
        randomPassword.push_back(getRandomUpperCase());
    }
    for(unsigned int i = 0; i < randomPassword.size(); i++){
        cout<<randomPassword.at(i);
    }
    return 0;
}
char randomLowerCasePassword(int x){
    int passwordSize = x;
    vector<char> randomPassword;
    while(randomPassword.size() != passwordSize){
        randomPassword.push_back(getRandomLowerCase());
    }
    for(unsigned int i = 0; i < randomPassword.size(); i++){
        cout<<randomPassword.at(i);
    }
    return 0;
}
char randomLeftSectionPassword(int x){
    int passwordSize = x;
    vector<char> randomPassword;
    while(randomPassword.size() != passwordSize){
        randomPassword.push_back(getRandomLeftSection());
    }
    for(unsigned int i = 0; i < randomPassword.size(); i++){
        cout<<randomPassword.at(i);
    }
    return 0;
}
char randomRightSectionPassword(int x){
    int passwordSize = x;
    vector<char> randomPassword;
    while(randomPassword.size() != passwordSize){
        randomPassword.push_back(getRandomRightSection());
    }
    for(unsigned int i = 0; i < randomPassword.size(); i++){
        cout<<randomPassword.at(i);
    }
    return 0;
}
char randomSpecialSymPassword(int x){
    int passwordSize = x;
    vector<char> randomPassword;
    while(randomPassword.size() != passwordSize){
        randomPassword.push_back(getRandomSpecialSym());
    }
    for(unsigned int i = 0; i < randomPassword.size(); i++){
        cout<<randomPassword.at(i);
    }
}
string keywordSeededPassword(string x,string y){
    string keyword = x;
    string birthyear = y;
    vector<string> randomPassword;
    randomPassword.push_back(keyword);
    randomPassword.push_back(birthyear);
    cout<<randomPassword.at(0)<<randomPassword.at(1)<<endl;
    cout<<randomPassword.at(1)<<randomPassword.at(0)<<endl;
    cout<<randomPassword.at(0)<<endl;
    
    


}
int main(){
srand(time(NULL));
cout<<"~~~~~~~~~~~~~~~MAIN MENU~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"[1] random password all chars"<<endl<<"[2] random password upercase chars"<<endl<<"[3] random password lowercase chars"<<endl<<"[4] random password special symbols"<<endl<<"[5] random password numbers"<<endl;
cout<<"enter selection"<<endl;
int selection;
cin>>selection;
switch (selection) {
    case 1 : 
      cout<<"all chars selected"<<endl;
      cout<<"Enter password length"<<endl;
      int input1;
      cin>>input1;
      cout<<randomPassword(input1)<<endl;
      break;
    case 2:
      cout<<"upercase chars selected"<<endl;
      cout<<"Enter password lenght"<<endl;
      int input2;
      cin>>input2;
      cout<<randomUpperCasePassword(input2)<<endl;
      break;
    case 3:
        cout<<"Lowercase chars selected"<<endl;
        cout<<"Enter password length"<<endl;
        int input3;
        cin>>input3;
        cout<<randomLowerCasePassword(input3)<<endl;
        break;
    case 4:
        cout<<"Special chars selected"<<endl;
        cout<<"Enter password length"<<endl;
        int input4;
        cin>>input4;
        cout<<randomSpecialSymPassword(input4)<<endl;
        break;
    case 5:
        cout<<"numbers chars selected"<<endl;
        cout<<"Enter password length"<<endl;
        int input5;
        cin>>input5;
        cout<<randomNumberPassword(input5)<<endl;
        break;
    default:
      cout<<"Invalid selection"<<endl;
      break;
}
    return 0;
}