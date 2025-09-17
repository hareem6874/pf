//START
//
//INPUT x1, y1   
//INPUT x2, y2   
//INPUT x3, y3   
//
//// Step 1: Check if points are collinear (area = 0)
//SET area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)
//
//IF area = 0 THEN
//PRINT "Not a valid triangle"
//STOP
//END IF
//
//// Step 2: Calculate squared side lengths
//SET side1 = (x2 - x1) ^ 2 + (y2 - y1) ^ 2
//SET side2 = (x3 - x2) ^ 2 + (y3 - y2) ^ 2
//SET side3 = (x1 - x3) ^ 2 + (y1 - y3) ^ 2
//
//// Step 3: Check triangle type 
//IF side1 + side2 = side3 OR side2 + side3 = side1 OR side1 + side3 = side2 THEN
//PRINT "Right Angle Triangle"
//ELSE IF side1 = side2 AND side2 = side3 THEN
//PRINT "Equilateral Triangle"
//ELSE IF side1 = side2 OR side2 = side3 OR side1 = side3 THEN
//PRINT "Isosceles Triangle"
//ELSE
//PRINT "Scalene Triangle"
//END IF
//
//STOP