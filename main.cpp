#include <iostream>

using namespace std;

class Fraction{
    int l,m,c;
    public:
    Fraction()
    {
        l=0;
        m=1;
        c=0;
    }

    Fraction(int _l, int _m){
    l = _l;
    m = _m;
    c = 0;
    }
    Fraction(int _c,int _l, int _m){
    c = _c;
    l = _l;
    m = _m;
    }
    void set_m(int _m){
    m = _m;
    if(m==0) cout<<"Mianownik nie moze byæ zerem"; m=1;
    }
    void set_l(int _l){
    l = _l;
    }
    void normalize()
    {
        while(l>=m){
            c++;
            l-=m;
        }
        if((c!=0 && l!=0 c*l*m>0) || (l==0 && c*m>0) || (c==0 && l*m>0){
            c = abs(c);
           }
           else{
             c = abs(c)*-1;
           }
            l = abs(l);
            m = abs(m);
    }
    void show()
    {
        if(l==0) cout<<c<<endl;
        else if(c==0) cout<<l<<"/"<<m<<endl;
        else cout<<c<<" "<<l<<"/"<<m<<endl;
    }
    Fraction operator*(Fraction arg){
        Fraction ret;
        ret.l = l*arg.l;
        ret.m = m * arg.m;
        return ret;
    }
    Fraction operator/(Fraction arg){
        Fraction ret;
        ret.l = l*arg.m;
        ret.m = m * arg.l;
        return ret;
    }
};

int main()
{
    Fraction A(-3,2), B(3,-2), C;
    C = A * B;
    C.show();
    C.normalize();
    C.show();
    return 0;
}
