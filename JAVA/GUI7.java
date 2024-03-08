//import java.awt.*; //tool box for gui
import javax.swing.*;
import java.awt.event.*;

class GUI7
{
    public static void main(String args[])
    {
        MarvellousFrame mobj = new MarvellousFrame("RRD Technologies");
    }
}

class MarvellousListener extends WindowAdapter
{
    /* 
    public void windowDeactivated(WindowEvent obj) {}
    public void windowActivated(WindowEvent obj){}
    public void windowDeiconified(WindowEvent obj){}
    public void windowIconified(WindowEvent obj){}
    public void windowClosed(WindowEvent obj) {}
    */

    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
    //public void windowOpened(WindowEvent obj){}
}

class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
    JFrame fobj = new JFrame(title);
    fobj.setSize(300,600);
    fobj.setVisible(true);

    JButton bobj = new JButton("Submit");
    fobj.add(bobj);
    fobj.addWindowListener((new MarvellousListener()));
    }
}