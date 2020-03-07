import java.applet.Applet; 
import java.awt.Graphics; 
import java.awt.*; 
/*<applet code="AppletLifeCycle.class" width="350" height="150"> </applet>*/ 
public class AppletLifeCycle extends Applet 
{ 
     public void init() 
     { 
       setBackground(Color.CYAN); 
       System.out.println("init() called"); 
     } 
     public void start(){ System.out.println("Start() called"); } 
     public void paint(Graphics g){ System.out.println("Paint(() called"); } 
     public void stop() { System.out.println("Stop() Called"); } 
     public void destroy()   { System.out.println("Destroy)() Called"); } 
} 