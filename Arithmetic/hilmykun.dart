void main() {
  var x, y;

  print(2 + 3); // Jumlah = 5
  print(5 - 2); // Jumlah = 3
  print(2 * 3); // Jumlah = 6
  print(5 / 2); // Jumlah = double - 2.5
  print(5 ~/ 2); // Jumlah = Int - 2
  print(5 % 2); // Remainder = - 1

  x = 0;
  y = ++x;
  print(x); // Jumlah = 1

  x = 0;
  y = x++;
  print(y); // Jumlah dari b = 0 dan nilai a = 1

  x = 0;
  y = --x; // Decrement a value before b gets its value.
  print(x); // Result is -1

  x = 0;
  y = x--; // Decrement a value AFTER b gets its value.
  print(y); // Result is 0
}
