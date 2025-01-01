package Basics;

public class Fraction {
    int num;
    int den;
public Fraction(int num,int den){
    this.num=num;
    this.den=den;
}
public static Fraction add(Fraction f1,Fraction f2){
    int numerator=f1.num*f2.den +f2.num*f1.den;
    int denominator=f2.den*f1.den;
    Fraction f3=new Fraction(numerator,denominator);
    f3.simplify();
    return f3;
}
public static int gcd(int num,int den){
    int min=Math.min(num,den);
    for(int i=min;i>=1;i--){
        if(num%i==0&&den%i==0)
            return i;
    }
    return min;
}
public void simplify(){
//    if(num<den){
//        if(den%num==0){
//            den=den/num;
//            num=1;
//        }
//    }
    int hcf=gcd(num,den);
    num=num/hcf;
    den=den/hcf;

}
    public static void main(String[] args) {
        Fraction f1=new Fraction(6,21);
        Fraction f2=new Fraction(14,21);
        System.out.println(("Fraction 1:"+f1.num+"/"+f1.den));
        f1.simplify();
        System.out.println(("Fraction 1 Simplified:"+f1.num+"/"+f1.den));
        System.out.println(("Fraction 2:"+f2.num+"/"+f2.den));
        f2.simplify();
        System.out.println(("Fraction 2 Simplified:"+f2.num+"/"+f2.den));
        Fraction f3=add(f1,f2);
        System.out.println(("Addition:"+f3.num+"/"+f3.den));
    }
}
