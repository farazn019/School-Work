/*#include <string>
#include "functions.cpp"
class Node{

    private:
        int productID;
        std::string productName;
        double productPrice;
        int numberOfReviews;
        double ratingOfTheProduct;
        std::string productDescription;
        int possibleShippingDate;
        int sizeOfTheProductDescription;

    public:

        void setProductID(int product_ID){
            productID = product_ID;
        }
        int getProductID(){
            return productID;
        }

        void setProductName(std::string product_name){
            productName = product_name;
        }
        std::string getProductName(){
            return productName;
        }

        void setProductPrice(double product_price){
            productPrice = product_price;
        }
        double getProductPrice(){
            return productPrice;
        }

        void setNumberOfReviews(int number_of_reviews){
            numberOfReviews = number_of_reviews;
        }
        int getNumberOfReviews(){
            return numberOfReviews;
        }

        void setRatingOfTheProduct(double rating_of_product){
            ratingOfTheProduct = rating_of_product;
        }
        double getRatingOfTheProduct(){
            return ratingOfTheProduct;
        }

        void setProductDescription(std::string product_description){
            productDescription = product_description;
        }
        std::string getProductDescription(){
            return productDescription;
        }

        void setPossibleShippingDate(int possible_shipping_date){
            possibleShippingDate = possible_shipping_date;
        }
        int getPossibleShippingDate(){
            return possibleShippingDate;
        }

        void setSizeOfTheProductDescription(){
            sizeOfTheProductDescription = computeLengthString(productDescription); 

        }
        int getSizeOfTheProductDescription(){
            return sizeOfTheProductDescription;
        }
        Node *next; //Points to the next node in the linked-list.
};*/