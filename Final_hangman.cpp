#include <iostream>
#include <ctime>
#include<cstring>
#include <cctype> 
#include<string> 
using namespace std;

int main()
{   
    
    
    char duplicate[10];
    string lett;
    string copy_lett;
  int i;  
 string cross="_";
srand(time(NULL));
int k=(rand() %100) + 1;
 
 int lives=8;
 
  string words[100] = {"the","of","and","agra","to","india","pray","you","that","icecream","he","was","for","on","are","as","with","his","they","I","at","be","this","have","from","or","one","had","by","word","but","not","what","all","were","we","when","your","can","said","there","use","an","each","which","she","do","how","their","if","will","up","other","about","out","many","then","them","these","so","some","her","would","make","like","him","into","time","has","look","two","more","write","go","see","number","no","way","could","people","my","than","first","water","been","call","who","oil","its","now","find","long","down","day","did","get","come","made","may","part"};
  
string my_word= words[k];

int word_length=0;
int count_letter=0;
word_length=my_word.length();
 
  
 char img[9][100]={"\n    +---+\n    |   |\n        |\n        |\n        |\n        |\n   =========", "\n    +---+\n    |   |\n    0   |\n        |\n        |\n        |\n   =========", "\n    +---+\n    |   |\n    0   |\n   /    |\n        |\n        |\n   =========", "\n    +---+\n    |   |\n    0   |\n   /|   |\n        |\n        |\n   =========", "\n    +---+\n    |   |\n    0   |\n   /|\\  |\n        |\n        |\n   =========", "\n    +---+\n    |   |\n    0   |\n   /|\\  |\n    |   |\n        |\n   =========", "\n    +---+\n    |   |\n    0   |\n   /|\\  |\n    |   |\n   /    |\n   =========", "\n    +---+\n    |   |\n    0   |\n   /|\\  |\n    |   |\n   /|\\  |\n   =========", " "}; 
  
 cout<<"Welcome to the game, Hangman!\n\n";
 cout<<"I am thinking of a word that is ";
 cout<<word_length;
 cout<<" letter long.\n\n";
 
 
 int imm=0;
 int point=0;
 
 cout<<"Available letters:\n";
 string copy_word[word_length];
 string s1="";
 for(i=0;i<word_length;i++)
 {
     copy_word[i]="_";
 }
 
 string available_letters[26]= {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
 
 for(int i=0;i<26;i++)
 {
     cout<<available_letters[i];
 }
 cout<<"\n\n";
 
 while(1)
 {
     cout<<"Lives left="<<lives<<"\n\n";
 
 cout<<"Please guess a letter\n\n";
 
 char letter;
 cin>>letter;
 
  if (isupper(letter))  
        {
            cout << "INVALID INPUT,ONLY LOWER CASE ACCEPTED\n";
            continue;
            
            }

if (isdigit(letter))
{
    cout << "INVALID INPUT,ONLY LOWER CASE ACCEPTED\n";
            continue;
}


int SG=0;
for(i=0;i<word_length;i++)
{
    if(duplicate[i]== letter )
    {
        cout<<"INVALID INPUT,LETTER REPETEION NOT ALLOWED";
        SG=1;
    }
    
}

if(SG==1)
{
    continue;
}





    
 int flag =0;
 
 for(int i=0;i<word_length;i++)
 {
     if(my_word.at(i)==letter)
     {
         string lett(1, letter);
          copy_lett=lett;
        
          flag =1;
          copy_word[i]=lett;
          count_letter++;
          
          duplicate[point]=letter;
          point++;
     }
    
 }
 
 cout<<img[imm];
 cout<<"\n\n";
     
 
 if(flag==0)
 {
     cout<<"Oops! That letter is not in my word:\n\n";
     lives--;
      imm++;
     if(lives==0)
     {
         cout<<"Lives Over,You Lost!!\n";
         cout<<"The correct answer was:"<<my_word;
         break;
     }
 }
 else
 {
     cout<<"Good Guess!!\n";
     
 }

 cout<<"\n";
 
 for(i=0;i<word_length;i++)
 {
 cout<<copy_word[i];
 s1.append(copy_word[i]); 
 }
 
 cout<<"\n";
 
 if(count_letter==word_length )
 {
     cout<<"* * Congratulations, you won! * *";
     break;
 }
 
 cout<<"\n\n";
 if(flag==1)
 {
     
     cout<<"Available letters:\n\n";
     for(int i=0;i<26;i++)
     {
        
        if(available_letters[i].compare(copy_lett)==0)
        {
            available_letters[i]="_";
        }
         
      cout<<available_letters[i];
     }
     cout<<"\n\n";
 }
 else
 {
     cout<<"Available letters:\n\n";
      for(int i=0;i<26;i++)
     {
     cout<<available_letters[i];
     }
 }
 cout<<"\n\n";
 
 
 }
 
  
}
