#ifndef UCLN_HPP
#define UCLN_HPP

long long UCLN(int a , int b){
    if(b==0){
        return a;
    }
    return UCLN(b , a%b);
}

#endif