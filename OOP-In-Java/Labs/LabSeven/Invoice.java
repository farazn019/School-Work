
class Invoice implements Payable{
    private int numberOfProduct;
    private double unitPrice;
    private double totalAmount;

    void setNumberOfProduct(int numberOfProduct){ this.numberOfProduct = numberOfProduct;}
    void setUnitprice(double unitPrice){ this.unitPrice = unitPrice;}
    void setTotalAmount(int numberOfProduct, double unitPrice){ this.totalAmount = numberOfProduct*unitPrice;}

    int getNumberOfProduct(){ return(this.numberOfProduct);}
    double getUnitPrice(){ return(this.unitPrice);}
    double getTotalAmount(){ return(this.totalAmount);}
}