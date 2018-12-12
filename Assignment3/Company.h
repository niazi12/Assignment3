//
// Created by SHAIKH SHAWON AREFIN SHIMON on 11/14/18.
//

#ifndef ASSIGNMENT_02_COMPANY_H
#define ASSIGNMENT_02_COMPANY_H

#include "UnsortedType.h"
#include "CustomerInfo.h"
#include <string>

class Company {
public:
    Company(const std::string& name  = {}
            , const UnsortedType<CustomerInfo>& customerList  = UnsortedType<CustomerInfo>()) ;

    Company(Company&& src);

    bool AddCustomer(CustomerInfo newCustomer);
    bool DeleteCustomer(CustomerInfo existingCustomer);
    bool AddNumberForExistingCustomer(const std::string &nid, const std::string &phoneNumber,
                                      const std::string &operatorName);
    bool UpdateOperatorForExistingNumber(const std::string &nid, const std::string &phoneNumber,
                                         const std::string &operatorName);

    friend std::ostream &operator<<(std::ostream &output, const Company& company);

private:
    std::string companyName;
    UnsortedType<CustomerInfo> customerList;
};


#endif //ASSIGNMENT_02_COMPANY_H
