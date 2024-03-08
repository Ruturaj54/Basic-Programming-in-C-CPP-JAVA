import java.awt.*; //tool box for gui

class GUI2
{
    public static void main(String args[])
    {
        MarvellousFrame mobj = new MarvellousFrame("RRD Technologies");
    }
}

class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
    Frame fobj = new Frame(title);
    fobj.setSize(300,600);
    fobj.setVisible(true);
    }
}