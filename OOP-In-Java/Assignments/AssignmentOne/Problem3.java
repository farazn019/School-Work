//import java.awt.geom.Point2D;
import java.awt.geom.Line2D;
import java.awt.geom.Ellipse2D;


class Problem3 {

    public static void main(String[] args) {
        Line2D.Float line = new Line2D.Float(3, 12, 17, 31); //Creates a line from (3, 12) to (17, 31)

        //Prints the expected location of the points and the actual location of the points.
        System.out.println("I expect Point 1 of the line to be (3, 12). I expect point 2 of the line to be, (17, 31).");
        System.out.println("The actual location of point 1 is, " + line.getP1());
        System.out.println("The actual location of point 2 is, " + line.getP2());

        line.setLine(3, 12, 19, 13); //Changes the end-point of the line to (19, 13).

        //Prints the new expected location of the points and the actual location of the points.
        System.out.println("Now with the the second point's coordinates changed. I expect point 1 of the line to be, (3, 12). I expect point 2 of the line to be (19, 13).");
        System.out.println("The actual location of point 1 is, " + line.getP1());
        System.out.println("The actual location of point 2 is, " + line.getP2());


        //Creates an ellipse that has it's upper-left corner at the point (4, 13), has a width of 60, and a height of 25.
        Ellipse2D.Float ellipse = new Ellipse2D.Float(4, 13, 60, 25);

        //Prints the expected x-coordinate, y-coordinate, width, and height of the ellipse, along with the actual x-coordinate, y-coordinate, width, and height of the ellipse.
        System.out.println("I expect the x-coordinate, y-coordinate, width, and height of the ellipse to be: 4, 13, 60, and 25, respectively.");
        System.out.println("The actual location of the x-coordinate of the ellipse is, " + ellipse.getX());
        System.out.println("The actual location of the y-coordinate of the ellipse is, " + ellipse.getY());
        System.out.println("The actual width of the ellipse is, " + ellipse.getWidth());
        System.out.println("The actual height of the ellipse is, " + ellipse.getHeight());

    }
}
