#include <bits/stdc++.h>
using namespace std;

struct osus {
    string name;
    int age;
    string college;
};

int main() {
    osus osus1;
    osus1.name = "Mandy";
    osus1.age = 19;
    osus1.college = "ITS";

    osus osus2;
    osus2.name = "Kevin";
    osus2.age = 18;
    osus2.college = "UB";

    osus osus3;
    osus3.name = "Joshua";
    osus3.age = 18;
    osus3.college = "UI";

    osus osus4;
    osus4.name = "Menza";
    osus4.age = 18;
    osus4.college = "UNDIP";

    cout << "Name: " << osus1.name << ", Age: " << osus1.age << ", College: " << osus1.college << endl;
    cout << "Name: " << osus2.name << ", Age: " << osus2.age << ", College: " << osus2.college << endl;
    cout << "Name: " << osus3.name << ", Age: " << osus3.age << ", College: " << osus3.college << endl;
    cout << "Name: " << osus4.name << ", Age: " << osus4.age << ", College: " << osus4.college << endl;

    return 0;
}
