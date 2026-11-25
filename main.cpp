#include <iostream>
using namespace std;
int main()
{
    cout << "مرحبا بكم في برنامجي الاول" << endl;
    cout << "لدخول للحاسبة اضغط رقم 1" << endl;
    cout << "لدخول على رواتب الموظفين ادخل 2" << endl;
    cout << "تقدير الطلاب رقم 3" << endl;
    cout << "عملية تكرار رقم 4" << endl;
    int o;
    cin >> o;
    switch(o)
    {
        case 1:
        {
            float a, k;
            cout << "ادخال العدد الاول" << endl;
            cin >> a;
            cout << "ادخال العدد الثاني" << endl;
            cin >> k;
            char c;
            cout << "ادخال العملية + - * / : ";
            cin >> c;
            if(c=='+') cout << a+k << endl;
            if(c=='-') cout << a-k << endl;
            if(c=='*') cout << a*k << endl;
            if(c=='/') cout << a/k << endl;
        }
        break;
        case 2:
        {
            float a, d, c, b, x;
            cout << "راتب الموظف: ";
            cin >> a;
            cout << "مقدار المكافئة: ";
            cin >> d;
            cout << "عدد ايام الغياب: ";
            cin >> c;
            cout << "مقدار الخصم لكل يوم: ";
            cin >> b;
            x = (a + d) - (c * b);
            cout << "صافي الراتب: " << x << endl;
        }
        break;
        case 3:
        {
            int a;
            cout << "ادخال درجة الطالب: ";
            cin >> a;
            if(a>=90) cout << "ممتاز";
            else if(a>=80) cout << "جيد جدا";
            else if(a>=60) cout << "شد حالك اكثر";
            else cout << "حاول مره ثانيه";
        }
        break;
        case 4:
        {
            int b;
            cout << "ادخل العدد: ";
            cin >> b;
            string name;
            cout << "ادخل النص: ";
            cin >> name;
            for(int c=1; c<=b; c++)
                cout << c << " " << name << endl;
        }
        break;
    }
    return 0;
}
