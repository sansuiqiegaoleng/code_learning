
void main(List<String> args){ 
  // Person p=Person("张三",20,"男");
  // Person pp=Person.creat("李四",21,"男");
  // p.study();
  // pp.study();
  // Child c=Child("王五",10,"男");
  // c.study();
  Paybase wc=Wxpay();
  wc.pay();
  Paybase ac=Alipay();
  ac.pay();
}


class Person{
  String name="";
  int age=0;
  String sex="male";//私有属性
  void study(){
    print('$name is studying');
  }
  // Person(String? name,int? age,String? sex){
  //   this.name=name??"";
  //   this.age=age??0;
  //   this.sex=sex??"male";
  // }
  Person(this.name,this.age,this.sex);//语法糖写法
  Person.creat(String? name,int? age,String? sex){
    this.name=name??"";
    this.age=age??0;
    this.sex=sex??"male";   
  }
}

class Child extends Person{
  Child(String? name, int? age, String? sex) : super(name ?? "", age ?? 0, sex ?? "male");
  @override
  void study(){
    print('$name is studying in child class');
  }
}

class Paybase{
  void pay(){
    print('pay');
  }
}

class Wxpay extends Paybase{
  @override
  void pay(){
    print('wxpay');
  }
}

class Alipay extends Paybase{
  @override
  void pay(){
    print('alipay');
  }
}
