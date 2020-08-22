import java.awt.*;
import javax.swing.*;

public class baseTemplate{

    private String companyName;
    private int xValue;
    private int yValue;
    private double totalSum;

    JFrame defaultFrame;

    void addWindow(int widthOfTemplate, int heightOfTemplate){
        JFrame  frame = new JFrame("Invoice System");
        frame.setPreferredSize(new Dimension(widthOfTemplate, heightOfTemplate));
        frame.setResizable(false);
        frame.setVisible(true);
        frame.pack();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        defaultFrame = frame;
    }

    void setCompanyName(String companyName){
        this.companyName = companyName;
        JLabel companyNameLabel = new JLabel(this.companyName);
        companyNameLabel.setHorizontalAlignment(JLabel.CENTER);
        companyNameLabel.setVerticalAlignment(JLabel.TOP);
        companyNameLabel.setSize(250, 250);
        companyNameLabel.setVisible(true);
        defaultFrame.add(companyNameLabel);
    }

    void setTotalSum(double price){ this.totalSum += price; }
    double getTotalSum(){ return(this.totalSum);}
}