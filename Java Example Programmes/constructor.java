public class constructor {

   int a;
   String name;
	
   //Default constructor
   constructor(){
	this.name="A2PE";
	this.a=2017;
   }
	
   //Parameterized constructor
   constructor(String name,int a){
	this.name=name;
	this.a=a;
   }
   public static void main(String args[]){
	constructor obj1 = new constructor();
	constructor obj2 = new constructor("xyz", 50);
	System.out.println(obj1.name+" "+obj1.a);
	System.out.println(obj2.name+" "+obj2.a);
   }
}