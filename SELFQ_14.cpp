void deposit(double amt){
    if(amt<0) throw amt;
}

void withdraw(double amt){
    if(amt<0) throw amt;
    if(amt>balance) throw "Insufficient";
}