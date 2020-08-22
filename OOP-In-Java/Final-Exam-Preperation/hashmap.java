
import java.util.HashMap;
import java.util.Map;
import java.util.HashMap;
import java.lang.String;
import java.lang.Integer;

public class hashmap{

    private int numberOfElements = 0;
    private Map myMap;
    hashmap(){
        myMap = new HashMap<String, Integer>(10);
    }

    void addElement(String key, Integer value){
        if(this.numberOfElements < 10){
            myMap.put(key, value);
            this.numberOfElements += 1;
        }
    }

    int getNumberOfElements(){ return(this.numberOfElements);}

    Integer getValueAtKey(String key){ return((Integer)myMap.get(key)); }

}