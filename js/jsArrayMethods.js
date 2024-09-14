let bikes = ["hero", "bajaj", "tvs", "honda"];

// toString() method
console.log("---------------------------toString()----------------------")
bikesStr = bikes.toString();
console.log(bikesStr);

// join()
console.log("----------join()--------------")
console.log(bikes.join())
console.log(bikes.join(""))
console.log(bikes.join("-"))
console.log(bikes.join("----"))
console.log(bikes.join("|"))

//pop()
console.log("---------pop()----------")
console.log(bikes.pop());
console.log(bikes);

//push()
console.log("--------push()--------")
console.log(bikes.push("Royal Enfield", "Mahindra"));
console.log(bikes);

// delete bikes[2];
// console.log(bikes)

bikes.splice(2, 3, "bmw", "kawasaki", "ola");
console.log(bikes)