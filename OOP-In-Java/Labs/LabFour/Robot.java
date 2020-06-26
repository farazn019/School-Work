import java.awt.Point;

class Robot{

    private int direction;
    private double get_x;
    private double get_y;
    private int getX;
    private int getY;
    Point point_one = new Point(0, 0);
    String current_direction;


    Robot(Point point, int initalDirection){
        this.direction = initalDirection;
        //this.get_x = point.getX();
        //this.get_y = point.getY();
        point_one.setLocation(point.getX(), point.getY());
        this.get_x = point.getX();
        this.get_y = point.getY();
    }



    public void turnRight(){
        if(this.direction == 4){ this.direction = 1; }
        else{ this.direction += 1; }
    }

    public void turnLeft(){
        if(this.direction == 1){ this.direction = 4; }
        else{ this.direction -= 1; }
    }

    public void Move(){
        getX = (int)get_x;
        getY = (int)get_y;
        if(this.direction == 1){
            //this.getX+=1;
            getX+=1;
            point_one.move(getX + 1, getY);
            this.get_x += 1.0;

        }
        else if(this.direction == 2){
            point_one.move(this.getX, this.getY + 1);
            this.getY += 1;
            this.get_y += 1.0;
        }
        else if(this.direction == 3) {
            point_one.move(this.getX - 1, this.getY);
            this.getX -= 1;
            this.get_x -= 1.0;
        }
        else if(this.direction == 4) {
            point_one.move(this.getX, this.getY - 1);
            this.getY -= 1;
            this.get_y -= 1.0;
        }
        //get_x = getX;
        //get_y = getY;
    }

    public String getDirection(){
        if(this.direction == 1){
            current_direction = "E";
        }
        else if(this.direction == 2){
            current_direction = "S";
        }
        else if(this.direction == 3){
            current_direction = "W";
        }
        else if(this.direction == 4){
            current_direction = "N";
        }
        return (current_direction);
    }

    public Point getLocation(){
        return(point_one.getLocation());
    }


}