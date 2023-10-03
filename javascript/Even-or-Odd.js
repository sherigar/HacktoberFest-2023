/*
const evenOrOdd = (number) => {
  return number % 2 === 0 ? "Even" : "Odd";
};
  */ 

/* The Above One is Slower Because That use Modulo Operation But in the Below one We Used Bit  
Operation its Faster then  Previous One */

const isOdd = num => num & 1 === 1;