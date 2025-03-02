# CS210Project
The second project from my CS-210 class

1. Summarize the project and what problem it was solving.
   
This project involved creating an investent calculator named the Airgead Banking Investment Calculator. It allows the user to input their investment amount, monthly deposit amount, 
their annual interest rate, and the number of years for their investment. Then, the program will calculate and display the results of the investment growth in two ways.
First, it will compound their interest on the initial investment only (without monthly deposits). Second, it will compound their interest on both the initial investment and
any additional deposits (with monthly deposits). The goal of the project is to help the user visualize their investment growth in a neatly formatted table, and then it allows them to 
run the program as many times as they want to compare different data.

2. What did you do particularly well?

One of the aspects I thought I did particularly well in the project was how I handled creating my functions. By organizing my code into separate functions, this made it easier to
read and update the code as I ran into future problems. This was a requirement of the project, as the goal was to keep the main function as small as possible and leave everything else
to the other functions, but it's an area I felt I exceeded in, as my main function outside of running the other functions only contained a while loop to run the program as long as the
user chose to do so. 

3. Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

One area I thought I could have enhanced was how my table was displayed. These improvements wouldn't make the application more secure, but it would improve the efficiency of the data being
shown to the user. Currently, my table has a problem with how the $ sign is displayed next to the values. Every time I would think I got it to display correctly, larger values would throw
off the column spacing. My goal was to keep the $ as close to the value as possible (i.e. $50, not $    50), but this wasn't working, and I had to settle for keeping the $ at a set point. This worked
fine, but incredibly large values can make the table unaligned, which makes readability less efficient.

4. Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

One of the most challenging part of the code for me was the mathematical calculations for compounding the interest. Figuring out how interest is compounded monthly vs. annually took some time, 
and I had to do a little research online. Eventually, I found a nice formula that helped me get these calculations, and then I could compare my results to the sample image provided in the project.
Once I got these values to align with the sample image by inputting the same values, I knew my calculations were correct. Another challenge I overcame was splitting the project into separate header 
and implementation (.cpp) files. Earlier in the course we had learned about this, so there was some knowledge about it, but I had to go back through the lessons to figure it out.

5. What skills from this project will be particularly transferable to other projects or course work?

There are quite a few skills from the project that will be transferable to other projects I do in the future, such as learning how to create header files and separating implementation logic, as doing so
follows object-oriented programming (OOP) which will be very important when collaborating with other developers in the future. I also sharpened up my inline comments throughout the project, which will also be very
important with future collaboration. Another skill I sharpened was handling the users input, and validating that input. This is something that is also very important when dealing with any projects
in the future, as you don't want your program to crash if the user has an error in their input.

6. How did you make this program maintainable, readable, and adaptable?

To make the program maintainable and readable, I focused on how I named my functions and other variables to match what they were doing. I also provided inline comments next to many of the functions
and calculations to explain what their purpose is. To ensure adaptability, there are a few easy modifications that can be made within the program such as changing the interest formula or even adding
new investment options.
