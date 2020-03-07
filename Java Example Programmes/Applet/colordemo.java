import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/*
<applet code="colordemo" height=300 width=300>
</applet>
*/
public class colordemo extends Applet implements ActionListener
    {
        Button bcolor1,bcolor2,bcolor3,bcolor4;
        Label bcolor;
        String str;
        public void init()
        {
            bcolor = new Label("Select any of the following button to change the background colour");
            bcolor1 = new Button("Red");    //Declaring buttons
            bcolor2 = new Button("Blue");
            bcolor3 = new Button("Yellow");
            bcolor4 = new Button("Black");
             
            add(bcolor1);                  //Adding buttons to the applet window
            add(bcolor2);
            add(bcolor3);
            add(bcolor4);
 
            bcolor1.addActionListener(this); //Adding action listener to the button
            bcolor2.addActionListener(this);
            bcolor3.addActionListener(this);
            bcolor4.addActionListener(this);
        }
        public void actionPerformed(ActionEvent ae)
        {
            str = ae.getActionCommand();
            repaint();      
        }
        public void paint(Graphics g)
         {
            if(str.equals("Red"))
                setBackground(Color.red);
            else if(str.equals("Blue"))
                setBackground(Color.blue);
            else if(str.equals("Yellow"))
                setBackground(Color.yellow);
            else if(str.equals("Black"))
                setBackground(Color.black);
        }
         
    }   