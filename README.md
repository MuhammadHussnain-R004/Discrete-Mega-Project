# Discrete-Mega-Project
Discrete Project From Group 1.
<br> Members include <br>
1.Muhammad Hussnain <br>
2.Abdullah Bin Nazar <br>
3.Mudassar Hasan.<br>
<h2>MODULE 2</h2>
<h3>SHORT EXPLAINATION</h3>
<p>
  This code print asymmatric frienships in class.First of all a structure is made which has variables i.e student 1 and student 2.Student 1 is main student and student 2 is the student whic is in the list of student 1.The programs work in such a way that it first read data from file and read main student data and then the friendlist until the condition is met i.e main student reach 40 and friendlist reach 5 according to the file.Then in main function some arrays are made i.e 1D array for mainstudent and 2D for mainstudent and his friendlist.Then to check asymmetric friendship the mainstudent is compared with all his friends that exist in his friendlist one by one if it mach then this will be symmetric friendship it will not print this.If there exist one sided frienship between these two it will print it.<b><u>If we want to check symmetric friendship it can also done througn this by making condition to (issymmetric==trure)</b></u>.Atlast it will count student that have asymmetric friendship.<br>
</p>
<h3>APPROACH</h3>
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
<h4>Output</h4>
Two major output from this code<br>
1.Print Asymmetric friends pair in class.<br>
2.Calculate number of students include in asymmatric friendship.<br>
<h3>End Of Module 2</h3>

