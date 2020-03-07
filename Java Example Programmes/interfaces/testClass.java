// Java program to demonstrate working of 
// interface.
import java.io.*;
 
// A simple interface
interface in1
{
    // public, static and final
    final int a = 10;
 
    // public and abstract 
    void display();
}
 
// A class that implements interface.
class testClass implements in1
{
    // Implementing the capabilities of
    // interface.
    public void display()
    {
        System.out.println("Hello display implemented");
    }
 
    // Driver Code
    public static void main (String[] args)
    {
        testClass t = new testClass();
        t.display();
        System.out.println(a);
    }
}