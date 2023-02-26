let print = console.log;

function main() {
  let height = 4; // asking the user

  draw(height);
}

function draw(n) {
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < i+1; j++) {
      print("#");
      
    }

  }
}

main();