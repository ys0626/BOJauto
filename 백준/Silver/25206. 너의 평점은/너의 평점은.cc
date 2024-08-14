#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    string sub, grade; double credit;
    double totalCredit = 0.0, totalGrade = 0.0;

    for(int i=0; i<20; i++){
        cin >> sub >> credit >> grade;
        totalCredit += credit;
        if (grade == "P")
            totalCredit -= credit;
        
        if (grade == "A+")
            totalGrade += credit * 4.5;
        else if (grade == "A0")
            totalGrade += credit * 4.0;
        else if (grade == "B+")
            totalGrade += credit * 3.5;
        else if (grade == "B0")
            totalGrade += credit * 3.0;
        else if (grade == "C+")
            totalGrade += credit * 2.5;
        else if (grade == "C0")
            totalGrade += credit * 2.0;
        else if (grade == "D+")
            totalGrade += credit * 1.5;
        else if (grade == "D0")
            totalGrade += credit * 1.0;
        }

    cout << totalGrade / totalCredit;
    return 0;
}