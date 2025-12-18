// hello world
import 'test2.dart';

void main() {
  print('hello world');
  var age = 20; //变量 可以修改 类型不可修改
  print('age is $age');
  const pi = 3.14; //常量，不可修改
  print('pi is $pi');
  final time = DateTime.now(); // 不可修改，只能赋值一次,运行时不可修改
  print('time is $time');
  String name = '张三'; // 变量 可以修改
  print('name is $name');
  name = '李四'; // 可以修改
  print('name is $name');
  // 我要在当前时间吃饭
  String content = "我要在${DateTime.now()}吃饭";
  print('content is $content');
  String flag = "world";
  String content1 = "hello $flag";
  print('content1 is $content1');
  double price = 100.0;
  print('price is $price');
  int count = 10;
  print('count is $count');
  num total = price * count;
  print('total is $total');
  // double 和 int 不可以直接赋值
  // 但是可以通过类型转换来赋值
  // num不能直接给double赋值
  // double 可以直接给num赋值
  // bool isSuccess = true;
  // isSuccess = false;
  List list = ["张三", "李四", "王五"];
  list.add("赵六");
  print('list is $list');
  list.addAll(["王二", "麻子"]);
  print('list is $list');
  // 从list中删除"王二"
  list.remove("王二");
  print('list is $list');
  list.removeRange(0, 2);
  print('list is $list');
  list.forEach((item) {
    print(item);
  });
  bool isAllLongerThan2 = list.every((item) {
    return item.length > 2;
  });
  print('isAllLongerThan2 is $isAllLongerThan2');
  List longerThan1 = list.where((item) {
    return item.length > 1;
  }).toList();
  print('longerThan1 is $longerThan1');
  Map map = {"name": "张三"};
  map.forEach((key, value) {
    print('$key is $value');
  });
  map.addAll({"gender": "男"});
  print('map is $map');
  bool isContainsName = map.containsKey("name");
  print('isContainsName is $isContainsName');
  map.remove("name");
  print('map is $map');
  map.clear();
  print('map is $map');
  String? name1 = null;
  name1?.startsWith("s"); // 如果name1不为null，才会调用startsWith方法
  //name1!.startsWith("s"); // 如果name1为null，会抛出异常
  // 可以使用??运算符来避免抛出异常
  String displayname = name1 ?? "默认值";
  print('displayname is $displayname');
  // 整除运算符
  // int a = 10;
  // int b = 3;
  // int c = a ~/ b;
  // print('c is $c');
  print(59 <= 60 ? "及格" : "不及格");
  switch (time.hour) {
    case 6:
      print("早上好");
      break;
    case 12:
      print("中午好");
      break;
    case 18:
      print("晚上好");
      break;
    default:
      print("你好");
  }
  print(combine("hello "));
  print(showperson("张三"));
  test();
  print(add(1, 2));
  Person p=Person("张三",20,"男");
  p.study();
}

String combine(String a, [String? b = "somebody"]) {
  return a + (b ?? "");
}

String showperson(String name, {int? age = 18, String? gender = "男"}) {
  return "name is $name,age is $age,gender is $gender";
}

Function test = () {
  print("hello world 1");
};

int add(int a,int b)=>a+b;
