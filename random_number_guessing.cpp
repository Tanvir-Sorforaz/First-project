#include<bits/stdc++.h>
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

using namespace std;

int main() {
    cout << "\t\t\t\t\tWelcome to the Number Guessing Game\n\n\n\n\n";
    string a;
    
    do{
        int number,guess,nguess=1;
        time_t startTime, endTime;
        srand(time(0));
        number=rand()%50+1;
        // printf("The number is %d \n",number);
        time(&startTime);

        do{
            cout<<"Guess the number between 1 to 50 : ";
            cin>>guess;
            if(guess>number){
                cout<<"Wrong! try lower number\n";
            }
            else if (guess<number){
                cout<<"Wrong! try higher number\n";
            }
            else{
                cout<<"\n\nCongratulations! You guessed it in "<<nguess<<" attempts\n\n";
                time(&endTime);
                double totalTime = difftime(endTime, startTime);
                cout << "Total time taken: " << totalTime << " seconds.\n\n";
                if(nguess==1){
                    cout<<"YOU ARE LUCKY, I HAVE NEVER SEEN A PERSON LIKE YOU\n\n\n";
                }
                else if(totalTime<=10 && totalTime>1){
                    cout<<"Unbelievable ! YOUR BRAIN IS TOO SHARP\n\n\n";
                }
                else if(totalTime<=18 && totalTime>10){
                    cout<<"Ummmmm  YOU ARE PRETTY FAST !\n\n\n";
                }
                else if (totalTime<=25 && totalTime>18)
                {
                    cout<<"YOU ARE FAST !\n\n\n";
                }
                else if (totalTime<=35 && totalTime>25)
                {
                    cout<<"YOU ARE SLOW !\n\n\n";
                }
                
                else if (totalTime<=45 && totalTime>35)
                {
                    cout<<"YOU ARE TOO SLOW !\n\n\n";
                }
                else if (totalTime>45)
                {
                    cout<<"YOU ARE TOO MUCH SLOW MAN ! BE ATTENTIVE \n\n\n";
                }

                
                
                
            }
            nguess++;
            }while(guess!=number);
            printf("\t\t\t\t\tLet's play again :)\n\n\n");
            cout<<"Enter y to play again or n to exit : ";
            cin>>a;
            cout<<endl<<endl;
            }
            while(a !="n");
            
            
            

    return 0;
}