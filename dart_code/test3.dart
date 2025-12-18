void main(List<String> args){
  Paybase wc=Wxpay();
  wc.pay();
  Paybase ac=Alipay();
  ac.pay();
}

abstract class Paybase{
  void pay();
}

class Wxpay implements Paybase{
  @override
  void pay(){
    print('wxpay');
  }
}

class Alipay implements Paybase{
  @override
  void pay(){
    print('alipay');
  }
}