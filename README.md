# Lab 5: Compound Interest and Loan Payments

## Program 1 — Compound Interest

### Plan
- Ask the user for the principal balance, annual interest rate, and number of times interest is compounded per year.
- Convert the annual interest rate from a percentage to a decimal by dividing by 100.
- Use `pow` from `<cmath>` to calculate the amount in savings.
- Calculate the interest earned by subtracting the principal from the final amount.
- Display the interest rate, compounding periods, principal, interest earned, and final savings amount using two decimal places for monetary values.

### Variables
- `principal`: original savings balance.
- `annual_rate`: annual interest rate as a decimal.
- `times_compounded`: number of compounding periods per year.
- `amount`: final savings balance.
- `interest_earned`: interest earned.

### Formula
`amount = principal * pow(1.0 + annual_rate / times_compounded, times_compounded)`

## Program 2 — Monthly Loan Payment

### Plan
- Ask the user for the loan amount, annual interest rate, and number of monthly payments.
- Convert the annual percentage rate into a monthly decimal rate.
- Use `pow` to calculate the monthly payment.
- Calculate the total amount paid back and total interest paid.
- Display the loan amount, monthly interest rate, number of payments, monthly payment, amount paid back, and interest paid.

### Variables
- `loan_amount`: original loan balance.
- `annual_rate`: annual interest rate as a percentage.
- `monthly_rate`: monthly interest rate as a decimal.
- `number_of_payments`: total number of monthly payments.
- `monthly_payment`: amount paid each month.
- `amount_paid_back`: total of all monthly payments.
- `interest_paid`: total interest paid.

### Formula
`monthly_rate = annual_rate / 100.0 / 12`

## Testing Plan
- Test both programs using the assigned values.
- Test both programs again using different positive values.
- Calculate expected results before running the programs.
- Compare expected results with actual output and document any corrections.
