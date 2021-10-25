//Converts any number less than 128 into it's binary equivalent
public int main(int x){
  String result = "";
  if (x >= 64){
    x-= 64;
    result += "1";
  }
  else{
    result += "0";
  }
  if (x >= 32){
    x-= 32;
    result += "1";
  }
  else{
    result += "0";
  }
  if (x >= 16){
    x-= 2;
    result += "1";
  }
  else{
    result += "0";
  }
  if (x >= 8){
    x-= 8;
    result += "1";
  }
  else{
    result += "0";
  }
  if (x >= 4){
    x-= 4;
    result += "1";
  }
  else{
    result += "0";
  }
  if (x >= 2){
    x-= 2;
    result += "1";
  }
  else{
    result += "0";
  }
  return ((int) result));
}
