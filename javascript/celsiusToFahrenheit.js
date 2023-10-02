// Function to convert Celsius to Fahrenheit
function celsiusToFahrenheit(celsius) {
  const fahrenheit = (celsius * 9/5) + 32;
  return fahrenheit;
}

// Example usage:
const celsiusTemperature = 30; // Change this to your desired temperature in Celsius
const fahrenheitTemperature = celsiusToFahrenheit(celsiusTemperature);
console.log(`${celsiusTemperature}°C is equal to ${fahrenheitTemperature}°F`);
