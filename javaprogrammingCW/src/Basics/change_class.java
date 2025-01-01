package Basics;

public class change_class {
    public static class Student{
        String name;
        int rno;
        double percent;
    }
    public static void change(Student x){
        x.name="Yatin";
        return;
    }
    public static void main(String[] args) {
        Student s1=new Student();
        s1.name="Piyush";
        s1.rno=9056;
        s1.percent=90.2;
        System.out.println(s1.name);//Piyush
        change(s1);
        System.out.println(s1.name);//Yatin
        //Pass by refrence in class
        //Pass by value in other data type
    }
}
