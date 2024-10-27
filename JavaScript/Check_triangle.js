function Triangle() {
    var s1 = document.getElementById("s1").value;
    var s2 = document.getElementById("s2").value;
    var s3 = document.getElementById("s3").value;

    s1 = Number(s1);
    s2 = Number(s2);
    s3 = Number(s3);

    var result = "";

    if (s1 === s2 && s2 === s3) {
        document.getElementById("tri").innerHTML = "Equilateral Triangle";
        
    } else if (s1 === s2 || s1 === s3 || s2 === s3) {
        document.getElementById("tri").innerHTML = "Isosceles Triangle";
        
    } else {
        document.getElementById("tri").innerHTML = "Scalene Triangle";
        
    }
    
}