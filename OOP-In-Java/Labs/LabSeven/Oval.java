

public class Oval extends Shape{
    private double majorRadius, minorRadius;
    private double area;
    Oval(double majorRadius, double minorRadius){
        this.setName("Oval");
        this.majorRadius = majorRadius;
        this.minorRadius = minorRadius;
    }

    public double area(){
        this.area = this.majorRadius*this.minorRadius*Math.PI;
        return(this.area);
    }

    double getArea(){ return(this.area);}

}