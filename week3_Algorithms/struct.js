let print = console.log;
// const get_input = require('readline-sync');
// let answer = get_input.question("String: ");

let arrayOfPeople = [];

class Person {
  constructor(name, phone) {
    this.name = name;
    this.phone = phone;
  }
  addToArr() {
    arrayOfPeople.push({name: this.name, phone: this.phone});
    return this;
  }
}

let person1 = new Person("Holly", "0546553296").addToArr();
let person2 = new Person("David", "0523988545").addToArr();

const findName = "Holly";

function isExist() {
  for (let i = 0; i < arrayOfPeople.length; i++) {
    if (arrayOfPeople[i].name == findName) {
      print("Found:", arrayOfPeople[i].phone);
      return true;
    }
  }
  print("Not found");
  return false;
}

print(isExist());