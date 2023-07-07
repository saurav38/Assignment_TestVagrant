# Assignment_TestVagrant
<html>
<head>
  <h>Here's the logic behind the code:</h>
</head>
<body>
  <ul>
    <li>Define a structured Newspaper to hold the details of each newspaper subscription, including the name and the prices for each day of the week.</li>
    <li>Create a function calculateCombinations that takes the budget, the list of newspapers, and an empty vector to store the combinations.</li>
    <li>Initialize an indices vector to keep track of the current index for each newspaper. Set all indices to 0 initially.</li>
    <li>Use a while loop to generate all possible combinations. Iterate through the newspapers and calculate the total cost for the current combination.</li>
    <li>If the total cost is within the budget, add the combination to the output vector.</li>
    <li>Move to the next combination by updating the indices. Start from the rightmost newspaper and increment the index. If an index exceeds the number of prices for that newspaper, reset it to 0 and move to the next newspaper.</li>
    <li>Continue the loop until all combinations have been generated.</li>
    <li>In the main function, define the newspaper subscription details in the newspapers vector.</li>
    <li>Prompt the user to enter the weekly budget.</li>
    <li>Call the calculateCombinations function with the budget, newspapers, and an empty vector to store the combinations.</li>
    <li>Display the output combinations to the console.</li>
  </ul>
</body>
</html>
