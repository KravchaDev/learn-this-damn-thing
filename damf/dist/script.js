// set up text to print, each item in array is new line
var aText = new Array(
"I am Kravcha.", 
"I'm going to share my Computer Science course now.", 
  "It is universal, even if you have programmed in some JavaScritpt before." ,
 "I think everyone should learn CS disciplines in order not to be a stupid incompetent in the future.",
  
  "######################################################################",
   " " ,
 "The first step" ,
 "~Computer Architecture" ,
 "~Book: Computer Systems a Programmer's perspective. Randal Bryant" ,
  
  
  " " ,
  "Next step" ,
  "~Algorithms",
 "~Book: Introduction to Algorithms, Cormen",
  " ",
  "Next step",
  "~Operating Systems",
  "~Book: Operating Systems: Three Easy Pieces", 
   " ",
  "######################################################################",
  "that 's not all .I'll be back😎"

);
var iSpeed = 80; // time delay of print out
var iIndex = 0; // start printing array at this position
var iArrLength = aText[1].length; // the length of the text array
var iScrollAt = 20; // start scrolling up at this many lines
 
var iTextPos = 0; // initialise text position
var sContents = ''; // initialise contents variable
var iRow; // initialise current row
 
function typewriter()
{
 sContents =  ' ';
 iRow = Math.max(0, iIndex-iScrollAt);
 var destination = document.getElementById("typedtext");
 
 while ( iRow < iIndex ) {
  sContents += aText[iRow++] + '<br />';
 }
 destination.innerHTML = sContents + aText[iIndex].substring(0, iTextPos) + "_";
 if ( iTextPos++ == iArrLength ) {
  iTextPos = 0;
  iIndex++;
  if ( iIndex != aText.length ) {
   iArrLength = aText[iIndex].length;
   setTimeout("typewriter()", 100);
  }
 } else {
  setTimeout("typewriter()", iSpeed);
 }
}
typewriter();
