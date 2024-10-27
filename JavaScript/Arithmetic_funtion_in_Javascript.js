function Addition() {
    alert("Hi");
    var num1 = parseFloat(document.getElementById("n1").value);
    var num2 = parseFloat(document.getElementById("n2").value);
    var result = num1 + num2;
    alert("Result: " + result);
    document.getElementById("ss").innerHTML = result;
    
}
function Division() {
    alert("Hi");
    var num1 = parseFloat(document.getElementById("n1").value);
    var num2 = parseFloat(document.getElementById("n2").value);
    var result = num1 / num2;
    alert("Result: " + result);
    document.getElementById("ss").innerHTML = result;

}
function Sub() {
    
    alert("Hi");
    var num1 = parseFloat(document.getElementById("n1").value);
    var num2 = parseFloat(document.getElementById("n2").value);
    var result = num1 - num2;
    alert("Result: " + result);
    document.getElementById("ss").innerHTML = result;

}
function Multiplication() {
    alert("Hi");
    var num1 = parseFloat(document.getElementById("n1").value);
    var num2 = parseFloat(document.getElementById("n2").value);
    var result = num1 * num2;
    alert("Result: " + result);
    document.getElementById("ss").innerHTML = result;

}

