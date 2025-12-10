Add comprehensive bus ticket billing system with dynamic fare calculation in C

## Overview
This commit introduces a fully developed bus ticket billing system that calculates
the passenger’s ticket fare based on the number of stops they wish to travel.
The program simulates a realistic transport fare model using a base fare,
progressive discounts, and minimum price enforcement to ensure consistent behavior.

## Input Handling
- Added user prompt to input the number of stops.
- Implemented validation to ensure stops are greater than zero, preventing invalid
  computations and enhancing the program’s reliability.
- Included safe exit behavior when the user enters invalid data.

## Fare Calculation Logic
- Introduced a base fare of ₹50 as the starting point for all calculations.
- Implemented a dynamic discount system:
  - Each stop reduces the fare by 2%.
  - Discount accumulates with more stops, encouraging longer travel distances.
  - A maximum discount cap of 80% has been added to prevent unrealistic fare drops.
- Ensured the final fare does not fall below the minimum threshold of ₹10,
  maintaining practical and controlled pricing.
- Calculated final fare using percentage-based reduction from the base fare.

## Output & User Experience
- Added a detailed bill summary section that clearly presents:
  - Base fare
  - Number of stops entered
  - Total discount percentage applied
  - Final computed ticket fare
- Used structured formatting for readability and emphasis, making the billing
  information easy for end users to review.
- Concluded the program with a friendly closing message to improve user interaction.

## Future Improvements
This structured foundation allows for potential enhancements such as:
- Adding distance-based fare slabs instead of per-stop discounts.
- Supporting passenger categories (student, senior citizen, etc.).
- Integrating real-time fare adjustments or configurable discount rules.
- Improving error handling and input validation for robustness.

Overall, this commit establishes a flexible and extensible bus fare calculation
system that demonstrates clear logic, clean formatting, and maintainable code structure.
