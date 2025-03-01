


const buttons = document.querySelectorAll('.btn');
const display = document.getElementById('result');
let currentInput = '';
let operator = '';
let previousInput = '';

buttons.forEach(button => {
    button.addEventListener('click', () => {
        if (button.classList.contains('operator')) {
            operator = button.textContent;
            previousInput = currentInput;
            currentInput = '';
        } else if (button.classList.contains('equal')) {
            currentInput = eval(previousInput + operator + currentInput);
            display.value = currentInput;
        } else if (button.classList.contains('clear')) {
            currentInput = '';
            previousInput = '';
            operator = '';
            display.value = '';
        } else if (button.classList.contains('backspace')) {
            currentInput = currentInput.slice(0, -1);
            display.value = currentInput;
        } else {
            currentInput += button.textContent;
            display.value = currentInput;
        }
    });
});