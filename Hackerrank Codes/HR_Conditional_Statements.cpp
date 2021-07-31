// https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/leaderboard
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     if (num >= 1 && num <= 9)
//     {
//         if (num == 1)
//             cout << "one" << endl;
//         if (num == 2)
//             cout << "two" << endl;
//         if (num == 3)
//             cout << "three" << endl;
//         if (num == 4)
//             cout << "four" << endl;
//         if (num == 5)
//             cout << "five" << endl;
//         if (num == 6)
//             cout << "six" << endl;
//         if (num == 7)
//             cout << "seven" << endl;
//         if (num == 8)
//             cout << "eight" << endl;
//         if (num == 9)
//             cout << "nine" << endl;
//     }
//     else if (num > 9)
//         cout << "Greater than 9" << endl;
//     return 0;
// }

// trying using switch case
#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    case 4:
        cout << "four" << endl;
        break;
    case 5:
        cout << "five" << endl;
        break;
    case 6:
        cout << "six" << endl;
        break;
    case 7:
        cout << "seven" << endl;
        break;
    case 8:
        cout << "eight" << endl;
        break;
    case 9:
        cout << "nine" << endl;
        break;
    // case >9: cout<<"Greator than 9"<<endl; break;
    default:
        cout << "Check the input" << endl;
        break;
    }
    return 0;
}