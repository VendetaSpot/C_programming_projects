let print = console.log;

let bufferVar = "#";

function main() {
  let height = 4; // asking the user

  draw(height, bufferVar);
}

function draw(n, bufferVar) {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i+1; j++) {
      print(bufferVar);
    }
  }
}

main();