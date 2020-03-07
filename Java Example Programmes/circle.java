abstract class shapes{
   //abstract method
   public abstract void draw();
}
public class circle extends shapes{

   public void draw(){
	System.out.println('\n'+"Draw a circle");
   }
   public static void main(String args[]){
	circle obj = new circle();
	obj.draw();
	//shapes obj1 = new shapes();  //not allowed
   }
}