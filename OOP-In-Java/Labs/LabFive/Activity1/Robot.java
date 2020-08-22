
import java.awt.Point;
import java.util.ArrayList;
import java.util.Scanner;

class Robot {
    private int direction;
    private double get_x;
    private double get_y;
    private int getX;
    private int getY;
    Point point_one = new Point(5, 5);
    String current_direction;
    String string_get_x;
    String string_get_y;
    ArrayList<String> coordinates = new ArrayList<String>();

    Robot(Point var1, int var2) {
        this.direction = var2;
        this.point_one.setLocation(var1.getX(), var1.getY());
        this.get_x = var1.getX();
        this.get_y = var1.getY();
        this.getX = (int)this.get_x;
        this.getY = (int)this.get_y;
        this.string_get_x = String.valueOf(this.getX);
        this.string_get_y = String.valueOf(this.getY);
        String var10001 = this.string_get_x;
        this.coordinates.add("(" + var10001 + "," + this.string_get_y + ")," + this.getDirection());
    }

    public void turnRight() {
        if (this.direction == 4) {
            this.direction = 1;
        } else {
            ++this.direction;
        }

        String var10001 = this.string_get_x;
        this.coordinates.add("(" + var10001 + "," + this.string_get_y + ")," + this.getDirection());
    }

    public void turnLeft() {
        if (this.direction == 1) {
            this.direction = 4;
        } else {
            --this.direction;
        }

        String var10001 = this.string_get_x;
        this.coordinates.add("(" + var10001 + "," + this.string_get_y + ")," + this.getDirection());
    }

    public void Move() {
        this.getX = (int)this.get_x;
        this.getY = (int)this.get_y;
        if (this.direction == 1) {
            ++this.getX;
            this.point_one.move(this.getX + 1, this.getY);
            ++this.get_x;
        } else if (this.direction == 2) {
            this.point_one.move(this.getX, this.getY + 1);
            ++this.getY;
            ++this.get_y;
        } else if (this.direction == 3) {
            this.point_one.move(this.getX - 1, this.getY);
            --this.getX;
            --this.get_x;
        } else if (this.direction == 4) {
            this.point_one.move(this.getX, this.getY - 1);
            --this.getY;
            --this.get_y;
        }

        this.string_get_x = String.valueOf(this.getX);
        this.string_get_y = String.valueOf(this.getY);
        this.coordinates.add("(" + this.string_get_x + "," + this.string_get_y + ")," + this.getDirection());
    }

    public String getDirection() {
        if (this.direction == 1) {
            this.current_direction = "E";
        } else if (this.direction == 2) {
            this.current_direction = "S";
        } else if (this.direction == 3) {
            this.current_direction = "W";
        } else if (this.direction == 4) {
            this.current_direction = "N";
        }

        return this.current_direction;
    }

    public Point getLocation() {
        return this.point_one.getLocation();
    }

    public void printLocation() {

        for(String coordinate: coordinates){
            System.out.println(coordinate);
        }
    }
}