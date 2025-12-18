void main(List<String> args){
  Student s=Student("张三",20);
  s.song(s.name??"");
  teacher t=teacher("李四",30);
  t.song(t.name??"");
}

mixin Base{
  void song(String name){
    print('$name is singing');
  }
}

class Student with Base{
  String? name="";
  int? age=0;
  Student(this.name,this.age);
}

class teacher with Base{
  String? name="";
  int? age=0;
  teacher(this.name,this.age);
}
