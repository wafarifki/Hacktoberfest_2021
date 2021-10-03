import 'dart:convert';
import 'dart:io';

void main() {
  print('1 + 1 = ');
  var line = stdin.readLineSync(encoding: utf8);
  print(line?.trim() == '2' ? 'Yes' : 'No');
}
