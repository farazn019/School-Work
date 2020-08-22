import java.awt.*;
import javax.swing.*;

class addProduct{
    int xCoordinates, yCoordinates;
    addProduct(String nameOfProduct, double price){
        defaultFrame.setTotalSum(price);
        JLabel productLabel = new JLabel(nameOfProduct);
        productLabel.setAlignmentX(0);
        productLabel.setAlignmentY(300);
        productLabel.setVisible(true);
        defaultFrame.add(productLabel);
    }

}