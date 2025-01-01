package Basics;

public class Student {
    public String name;
    int rno;
    public double percent;
    final String schoolname="JPS";//fix the value for all students can't be changed
    static int noofstudents;
    //default constructor
    public Student(){

    }
    //constructor
    public Student(String nam,int roll,double per){
    name=nam;
    rno=roll;
    percent=per;
    noofstudents++;
    }
    //getter method
    public int getRno(){
        return rno;
    }
    //setter method
    public void setRno(int x){
        rno=x;

    }
}
