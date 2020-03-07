import java.awt.*;  
import java.applet.*;  
  
  
public class DisplayImage extends Applet {  
  
  Image picture;  
  
  public void init() {  
    picture = getImage(getDocumentBase(),"a.jpg");  
  }  
    
  public void paint(Graphics g) {  
    g.drawImage(picture, 4,4,this);  
  }  
      
  }  
/*<applet code="DisplayImage.class" width="550" height="550"> 
</applet> 
*/ 