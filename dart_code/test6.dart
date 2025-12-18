void main(List<String> args){
  Future f = Future((){
    return "hello";
  });
  f.then((value){
    print(value);
  }).catchError((error){
    print(error);
  });
}