# Discrete-Mega-Project
Discrete Project From Group 1.
<br> Members include <br>
1.Muhammad Hussnain <br>
2.Abdullah Bin Nazar <br>
3.Mudassar Hasan.<br>
<h1> MODULE 1 </h1>
<p>
  This program is finding a student with greater mentions. Program is divided into different functions.<br>
</p>
<p>
  <h2> FUNTIONO 1 readfile </h2> <br>
  (ifstream) reads data from the file. (line) stores all the records and (sstream) separate all cells of excel by using "," and stores all data in array [i] stores the main student name and [j] stores the name of mainstudent friends and skip the empty cell. 
</p>
<p>
  <h3> FUNCTION 2 friendcout </h3> <br>
  [i] repeat for 40 and [k] repeat for each [j] for five times. [i] for main student [j] is used to find all mentions in full list to find mentions. At last friendcout array stores the all mentions in it. <br>
</p>
<p>
  <h4> FUNTION 3 popular </h4><br>
  maxFriend is initialize with 0 and comapre it with counts to find greater count and index of greater count in Friendcout array and index of name of student in st[] array will be same. at last it will print.<br>
  <h5> END MODULE 1 </h5><br>
</p>
  <h6>MODULE 2</h6>
<h7>SHORT EXPLAINATION</h7>
<p>
  This code print asymmatric frienships in class.First of all a structure is made which has variables i.e student 1 and student 2.Student 1 is main student and student 2 is the student whic is in the list of student 1.The programs work in such a way that it first read data from file and read main student data and then the friendlist until the condition is met i.e main student reach 40 and friendlist reach 5 according to the file.Then in main function some arrays are made i.e 1D array for mainstudent and 2D for mainstudent and his friendlist.Then to check asymmetric friendship the mainstudent is compared with all his friends that exist in his friendlist one by one if it mach then this will be symmetric friendship it will not print this.If there exist one sided frienship between these two it will print it.<b><u>If we want to check symmetric friendship it can also done througn this by making condition to (issymmetric==trure)</b></u>.Atlast it will count student that have asymmetric friendship.<br>
</p>
<h6>APPROACH</h6>
<p>
  This code read data from file having friendlists and then find Asymmatric friendship mean one-sided friendships in class.<br>
</p>
 <h4>Reading Data</h4>
 The read data function read data from file.It has two arrays:<br>
 1.mainstudent[]: Stores the main student's name.<br>
2.friendlist[][]: Stores the names of up to 5 friends per student.<br>
<h4>Processing Friendship</h4>
The program creates an array of friendship pairs (Friends structure).<br>
It tracks all friendships and checks for symmetric pairs.<br>
<h4>Asymmetric Check</h4>
For each friendship, the program checks if the reverse friendship(not ONE SIDED) exists.<br>
If not, it marks the pair as asymmetric and displays it.<br>
<h7>Output</h7>
Two major output from this code<br>
1.Print Asymmetric friends pair in class.<br>
2.Calculate number of students include in asymmatric friendship.<br>
<h8>End Of Module 2</h8> <br>
<h9> MODULE 3 </h9> <br>
<p>
 <b> Step 1 </b> <br>
   Read the data from the file and store it in arrays as did in first 2 modules. 
   <b> Step 2 </b> <br>
   Make a graph between main student with his/her friends the graph will be as: <br>
  "Abdullah Bin Nazar" -- "Mudassar Hassan";<br>
  and the other friends same as above.<br>
  <b> Step 3 </b> <br>
  Use Breadth-first-search alogrithim as start our walking from form student (Rana Mustehisn) and find the searching name.
  <b> Step 4 </b> <br>
  Program first demand some input which will be name of student and then it give the name of his/her two friends. by using BFS alogrithim.
  <b> ONLY ABSTRACTE CONCEPT IS MADE STILL NOT PROGRAM </b> <br> 
</p>
   


