//
// Created by SHAIKH SHAWON AREFIN SHIMON on 11/14/18.
//

#include <iostream>
#include <exception>
#include "Company.h"

using namespace std;

CustomerInfo CreateCustomer1(){
    CustomerInfo customer1("12345678901","Shawon","Arefin");
    customer1.SetDateOfBirth(1, 1, 1987);
    customer1.SetFathersName("Unknown");
    customer1.SetMothersName("Unknown");
    customer1.SetPermanentAddress("Dhaka City");
    customer1.SetPresentAddress("Mirpur");
    customer1.InsertNewNumber("01711-123456", "GP");
    customer1.InsertNewNumber("01812-123456", "ROBI");
    customer1.InsertNewNumber("01913-123456", "BANGLALINK");
    customer1.InsertNewNumber("01114-123456", "KOMKOTHAKOIBEN");
    customer1.InsertNewNumber("01315-123456", "TELETALK");
    customer1.InsertNewNumber("01516-123456", "TELETALK");

    return customer1;
}

CustomerInfo CreateCustomer2(){
    CustomerInfo customer2("12435678901","Alexi","Volkov");
    customer2.SetDateOfBirth(1, 2, 1987);
    customer2.SetFathersName("Unknown");
    customer2.SetMothersName("Unknown");
    customer2.SetPermanentAddress("Dhaka City");
    customer2.SetPresentAddress("Mirpur");
    customer2.InsertNewNumber("01712-123456", "GP");
    customer2.InsertNewNumber("01811-123456", "ROBI");
    customer2.InsertNewNumber("01914-123456", "BANGLALINK");
    customer2.InsertNewNumber("01111-123456", "KOMKOTHAKOIBEN");
    customer2.InsertNewNumber("01319-123456", "TELETALK");
    customer2.InsertNewNumber("01514-123456", "TELETALK");

    return customer2;
}

CustomerInfo CreateCustomer3(){
    CustomerInfo customer3("34345678901","Christopher","Chance");
    customer3.SetDateOfBirth(1, 1, 1987);
    customer3.SetFathersName("Unknown");
    customer3.SetMothersName("Unknown");
    customer3.SetPermanentAddress("Dhaka City");
    customer3.SetPresentAddress("Mirpur");
    customer3.InsertNewNumber("01711-434343", "GP");
    customer3.InsertNewNumber("01812-434343", "ROBI");
    customer3.InsertNewNumber("01913-434343", "BANGLALINK");
    customer3.InsertNewNumber("01114-434343", "KOMKOTHAKOIBEN");
    customer3.InsertNewNumber("01315-434343", "TELETALK");
    customer3.InsertNewNumber("01516-434343", "TELETALK");

    return customer3;
}

CustomerInfo CreateCustomer4(){
    CustomerInfo customer4("22345678911","John","Reese");
    customer4.SetDateOfBirth(1, 1, 1987);
    customer4.SetFathersName("Unknown");
    customer4.SetMothersName("Unknown");
    customer4.SetPermanentAddress("Dhaka City");
    customer4.SetPresentAddress("Mirpur");
    customer4.InsertNewNumber("01711-454545", "GP");
    customer4.InsertNewNumber("01812-453451", "ROBI");
    customer4.InsertNewNumber("01913-453451", "BANGLALINK");
    customer4.InsertNewNumber("01114-453451", "KOMKOTHAKOIBEN");
    customer4.InsertNewNumber("01315-453451", "TELETALK");
    customer4.InsertNewNumber("01516-453451", "TELETALK");

    return customer4;
}
CustomerInfo CreateCustomer5(){
    CustomerInfo customer5("97845678901","Zeke","Summers");
    customer5.SetDateOfBirth(1, 1, 1987);
    customer5.SetFathersName("Unknown");
    customer5.SetMothersName("Unknown");
    customer5.SetPermanentAddress("Dhaka City");
    customer5.SetPresentAddress("Mirpur");
    customer5.InsertNewNumber("01711-998845", "GP");
    customer5.InsertNewNumber("01812-998845", "ROBI");
    customer5.InsertNewNumber("01913-998845", "BANGLALINK");
    customer5.InsertNewNumber("01114-998845", "KOMKOTHAKOIBEN");
    customer5.InsertNewNumber("01315-998845", "TELETALK");
    customer5.InsertNewNumber("01516-998845", "TELETALK");

    return customer5;
}

CustomerInfo CreateCustomer6(){
    CustomerInfo customer6("34512323412","Russel","Anderson");
    customer6.SetDateOfBirth(1, 1, 1987);
    customer6.SetFathersName("Unknown");
    customer6.SetMothersName("Unknown");
    customer6.SetPermanentAddress("Dhaka City");
    customer6.SetPresentAddress("Mirpur");
    customer6.InsertNewNumber("01711-040041", "GP");
    customer6.InsertNewNumber("01812-040041", "ROBI");
    customer6.InsertNewNumber("01913-040041", "BANGLALINK");
    customer6.InsertNewNumber("01114-040041", "KOMKOTHAKOIBEN");
    customer6.InsertNewNumber("01315-040041", "TELETALK");
    customer6.InsertNewNumber("01516-040041", "TELETALK");

    return customer6;
}

Company CreateCompany(){
    Company companyObj("KomKothaKoiben");
    return companyObj;
}

int main(void){
    Company company = CreateCompany();
    company.AddCustomer(CreateCustomer1());
    company.AddCustomer(CreateCustomer2());
    company.AddCustomer(CreateCustomer3());
    company.AddCustomer(CreateCustomer4());
    company.AddCustomer(CreateCustomer5());
    company.AddCustomer(CreateCustomer6());

    std::cout << company;

    return 0;
}