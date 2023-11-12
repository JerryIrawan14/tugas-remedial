const secureBooking = function(){
    let passangerCount = 0;

    return function(){
        passangerCount++;
        console.log(`${passangerCount} passangers`);
    } 
}

const booker = secureBooking();

booker();
booker();
booker();

let f;

const g = function(){
    const a= 23;
    f = function(){
        console.log(a * 2);
    }
}
const h = function(){
    const b = 777;
    f= function(){
        console.log(b * 2);
    }
}
g();
f();
console.dir(f);
h();
f();
console.dir(f);

// Example 2

const boardPassanger = function(n,wait){
    const perGroup = n / 3 ;

    setTimeout(function(){
        console.log(`we are now boarding all ${n} passanggers`);
        console.log(`there are 3 groups, each with ${perGroup} passanger`);
    },wait * 1000)

    console.log(`will start boarding in ${wait} seconds`);
}

boardPassanger(180,3)

// (function(){
//     const header = document.querySelector('h1');
//     header.style.color = 'red';
// })();

function functionColor() {
    document.getElementById("demo").style.color = "blue";
  }

