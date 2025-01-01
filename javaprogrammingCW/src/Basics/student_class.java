package Basics;


public class student_class {
    public static void fun(Student x){
    System.out.println(x.name);
    return;
    }

//    public static class Student{
//         String name;
//        int rno;
//        double percent;
//    }
    public static void main(String[] args) {
        Student s1=new Student("Piyush",9056,90.4);
        s1.name="Piyush";
        s1.setRno(9056);
        s1.percent=90.4;
        System.out.println(s1.noofstudents);
        Student s2=new Student("Yatin",55,90.4);
        s2.name="Yatin";
        s2.setRno(9059);
        s2.percent=90.4;
        fun(s1);
        System.out.println(s2.noofstudents);
        System.out.println(Student.noofstudents);//Static function is used if we want to access a class through just classname function
    }
}
