package Basics;
import java.util.Scanner;
public class input {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter radius:");
        int radius;
        radius=sc.nextInt();
        double pi=3.1415;
        double area=pi*radius*radius;
        System.out.print("The area of circle is:"+area);
    }
}
