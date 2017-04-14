#include <iostream>

using namespace std;

class Calc_Add{
public:

    int add()
    {
        cout << "What two numbers do you want to add?" << endl;

            double AnswerADD_1;
            double AnswerADD_2;

        cin >> AnswerADD_1;
        cin >> AnswerADD_2;

        cout << "Total Output: " << AnswerADD_1 + AnswerADD_2 << endl;

        return 0;
    };
};

class Calc_Sub{
public:

    int sub()
    {
        cout << "What two numbers do you want to subtract?" << endl;

            double AnswerSUB_1;
            double AnswerSUB_2;

        cin >> AnswerSUB_1;
        cin >> AnswerSUB_2;\

        cout << "Total Output: " << AnswerSUB_1 - AnswerSUB_2 << endl;

        return 0;
    };
};

class Calc_Mul{

public:
    int mul()
    {
        cout << "What two numbers do you want to Multiply?" << endl;

            double AnswerMUL_1;
            double AnswerMUL_2;

        cin >> AnswerMUL_1;
        cin >> AnswerMUL_2;

        cout << "Total Output: " << AnswerMUL_1 * AnswerMUL_2 << endl;

        return 0;
    };
};

class Calc_Div{

public:
    int div()
    {
        cout << "What two numbers do you want to Divide?" << endl;

            double AnswerDIV_1;
            double AnswerDIV_2;

        cin >> AnswerDIV_1;
        cin >> AnswerDIV_2;

        cout << "Total Output: " << AnswerDIV_1 / AnswerDIV_2 << endl;

        return 0;
    };
};

class What{

public:

    int FullCalc(){

        cout << "Press 1 to ADD: " << endl;
        cout << "Press 2 to SUBTRACT: " << endl;
        cout << "Press 3 to MULTIPLY: "<< endl;
        cout << "Press 4 to DIVIDE: " << endl;
        cout << "Press 5 to Exit: " << endl;

            int Answer1;

                cin >> Answer1;

                    Calc_Add adding;
                    Calc_Sub subtracting;
                    Calc_Mul multiplying;
                    Calc_Div division;

                        if(Answer1 == 1){
                            adding.add();
                        }
                        else if(Answer1 == 2){
                            subtracting.sub();
                        }
                        else if(Answer1 == 3){
                            multiplying.mul();
                        }
                        else if(Answer1 == 4){
                            division.div();
                        }
                        else if(Answer1 == 5){
                            return 0;
                        }
                        else{
                            cout << "That is not a valid answer.." << endl;
                            FullCalc();
                        }
            return 0;
        };
};

int main()
{
    What AI;
    AI.FullCalc();
        cout << "\n" << endl;
        cout << "Enter 6 to continue calculating or press anything to leave" << endl;
            int answer;
                cin >> answer;
                    if (answer == 6)
                    {
                    AI.FullCalc();
                    }
                    else{
                    return 0;
                    }
}

