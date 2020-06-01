//Created by Faraz Naseem.

//The math library is imported here.
import java.lang.Math;

//This is the body of the program.
class problem1{

    //The variables for the first equation are declared. s0 = initalDisplacement, v0 = initalVelocity, s = finalDisplacement, t = time
    static double finalDisplacement, initalDisplacement, initalVelocity, time;
    static double gravity = 9.8; // The value of g (which is, gravity), is set to 9.8

    static double m1, m2, p, a, G;


    static double finalDisplacementEquation(double ID, double IV, double t){
        finalDisplacement = (initalDisplacement * initalVelocity) - ((0.5 * gravity) * Math.pow(time, 3));
        return finalDisplacement;
    }

    static double gravityEquation(double m1, double m2, double p, double a){
        G = 0.75 * (Math.pow(Math.PI, 2)) * (Math.pow(a, 3) / (Math.pow(p, 0.5) * (m1 - m2)));
        return G;
    }

    public static void main (String[] args){
        initalDisplacement = 1.0;
        initalVelocity = 3.4;
        time = 3.0;
        System.out.println("The finalDisplacement is, " + finalDisplacementEquation(initalDisplacement, initalVelocity, time) + '.');

        m1 = 10;
        m2 = 5;
        p = 5;
        a = 4;
        System.out.println("The value of 'G' is, " + gravityEquation(m1, m2, p, a) + '.');
    }
}