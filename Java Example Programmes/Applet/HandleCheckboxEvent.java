/*
        Handle Checkbox Event Example
        This java example shows how to handle checkbox event. When checkbox
        is selected and deselected, item event is generated.
*/
 
import java.applet.Applet;
import java.awt.Checkbox;
import java.awt.Graphics;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
 
 
/*
<applet code="HandleCheckboxEvent" width=200 height=200>
</applet>
*/
 
public class HandleCheckboxEvent extends Applet implements ItemListener{
 
        Checkbox java = null;
        Checkbox vb = null;
        Checkbox c = null;
       
        public void init(){
               
                //create checkboxes
                java = new Checkbox("Java");
                vb = new Checkbox("Visual Basic");
                c = new Checkbox("C");
               
                add(java);
                add(vb);
                add(c);
               
                //add item listeners
                java.addItemListener(this);
                vb.addItemListener(this);
                c.addItemListener(this);
        }
       
        public void paint(Graphics g){
               
                g.drawString("Java: " + java.getState(),10,80);
                g.drawString("VB: " + vb.getState(), 10, 100);
                g.drawString("C: " + c.getState(), 10, 120);
               
        }
       
        public void itemStateChanged(ItemEvent ie) {
                repaint();             
        }
}