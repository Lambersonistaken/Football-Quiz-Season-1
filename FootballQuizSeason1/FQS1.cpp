#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char aw1,aw2,aw3,aw4,aw5,aw6,aw7,aw8,aw9,aw10,takeWhatuGot;


    cout << "                                       Welcome to the Football Quiz Show Season 1                  \n";

    cout << "   Rules : You will be asked 10 question. All questions are related with football teams,players,coaches and more.\n   If you answer all questions correctly, you will earn 100.000 $ !\n   So lets start\n\n\n!!!";


    cout << "Question 1 :  Which football team won the Premier League last year ? \n    A ) Chelsea     B ) Liverpool       C ) Manchester City         D ) Tottenham \n\n";

    cin >> aw1;

    if(aw1=='a' || aw1=='d' || aw1=='c') {

        cout << "Your answer is wrong. The answer is     B ) Liverpool      You lost the game !\n"
        ;
        exit(0);
    }
    else if (aw1 =='b') {



        cout << "Your answer is correct. Congratulations !!!\n";
    }

    cout << "Question 2 : Which player has transferred for 220 Million $ ? \n       A ) Paul Pogba      B ) Cristiano Ronaldo       C ) Neymar JR       D ) Lionel Messi \n\n";

    cin >> aw2;

    if (aw2=='a' || aw2=='b' || aw2=='d') {

        cout << "Your answer is wrong. The answer is C ) Neymar JR";
       exit(0);

    }
    else if (aw2=='c') {

             cout << "Your answer is correct. Congratulations !!!\n";

    }

    cout << "Question 3 : What was the UEFA Champions League 2020 Final Match ? \n      A ) 2-0     B ) 3-0     C ) 1-0     D ) 2-1\n\n";

    cin >> aw3;

    if (aw3=='a' || aw3=='b' || aw3=='d') {

        cout << "Your answer is wrong. The answer is C ) 1-0";
        exit(0);
    }
    else if (aw3='c') {

        cout << "Your answer is correct. Congratulations !!!\n";
    }

    cout << "Question 4 : Who is the most goal scorer in the Champions League ? \n      A ) Lionel Messi        B ) Ruud Van Nistelrooy        C) Cristiano Ronaldo        D ) Raul\n\n";

    cin >> aw4;

    if (aw4=='a' || aw4=='b' || aw4=='d') {

        cout << " Your Answer is wrong. The answer is C ) Cristiano Ronaldo";
        exit(0);

    }

    else if (aw3=='c') {

        cout << " Your answer is correct. Congratulations !!!\n";
    }

    cout << "Question 5 : Who won the first World Cup ? \n      A) Brasil          B) Uruguay         C) Germany         D) England\n\n";

    cin >> aw5;

    if (aw5=='a' || aw5=='c' || aw5=='d') {


        cout << "Your answer is wrong. The answer is B) Uruguay";
    }

    else if (aw5=='b') {

        cout << "Your answer is correct. Congratulations !!!\n\n\n";
    }

    cout << "You've answered all 5 questions correctly. \n\nAnd now you have to chance that you can take half of your prize and you can leave the quiz. \nIf you leave, you will get 50.000$ !!!\n Or you can still fight for 100.000$\n So what is your decision ? Y or N ???";

    cin >>takeWhatuGot;

    if (takeWhatuGot=='y') {

        cout << "Congratulations!!! You won 50.000$ . Thanks for participating our quiz! \n";
        exit(0);
    }

    else if (takeWhatuGot=='n') {

        cout << "Wow. I think you have huge courage mate. Lets win 100.000$\n But don't forget, questions will be harder :)\n\n\n";

    }

        cout << "Question 6 : Which country has won the most World Cup ?\n      A) Uruguay         B) Brasil         C) Argentina         D) England\n\n\n";

        cin >> aw6;

        if (aw6=='a' || aw6=='c' || aw6=='d') {


            cout << "Your answer is wrong. The answer is B) Brasil";

        }
        else if (aw6=='b') {

            cout << "Your answer is correct. Congratulations!!!\n\n\n";
        }

            cout << " Question 7 : Who was the France's coach in 2006 World Cup ? \n    A) Raymond Domenech          B) Zinedine Zidane          C) Luis Aragonés         D) Didier Deschamps \n\n\n";

            cin >> aw7;

            if (aw7=='b' || aw7=='c' || aw7=='d' ) {

                cout << "Your answer is wrong. The answer is A) Raymond Domenech";


            }

            else if (aw7=='a') {

                cout << "Your answer is correct. Congratulations!!!\n\n\n";
            }

            cout << "Question 8 : In 2010, Spain won the World Cup 1-0 against Netherlands. Who scored the goal Spain's goal ?  \n          A) Xavi          B)  Fernando Torres         C) Iniesta         D) Carles Puyol         \n\n\n";

            cin >> aw8;

            if (aw8=='a' || aw8=='b' || aw8=='d') {


                cout << "Your answer is wrong. The answer is C) Iniesta";
                exit(0);
            }
            else if (aw8=='c') {


                cout << "Your answer is correct. Congratulations!!!\n\n\n";
            }

            cout << "Question 9 : Who won the UEFA Champions League in 2014 ? \n        A) Atletico Madrid          B) Bayern Münih         C) Barcelona         D) Real Madrid      \n\n\n";


            cin >> aw9;


            if (aw9=='a' || aw9=='b' || aw9=='c')  {


                cout << "Your answer is wrong. The answer is D) Real Madrid";

                exit(0);
            }

            else if (aw9=='d')  {


                cout << "Your answer is correct. Congratulations!!!\n\n\n";
            }


			cout << "Question 10 : Who is the Fenerbahçe's President ? \n			A) Aziz Yildirim		B) Ali Sen		C) Ali Yildirim		D) Ali Koc \n\n\n";

			cin >> aw10;

			if (aw10 == 'a' || aw10 == 'b' || aw10 == 'c') {


				cout << "Your answer is wrong. The answer is D) Ali Koc";
			}

			else if (aw10 == 'd') {


				cout << "Your answer is correct. Congratulations!!! You won the 100.000$ big prize,letss goooo !!!\n\nCopyright © Lamberson";

			}

}

