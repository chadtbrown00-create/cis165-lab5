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
- `annual_rate`: annual interest rate entered as a percentage.
- `rate`: annual interest rate converted to decimal form.
- `times_compounded`: number of compounding periods per year.
- `amount`: final savings balance.
- `interest_earned`: interest earned.

### Formula
`amount = principal * pow(1.0 + rate / times_compounded, times_compounded)`

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
- `monthly_rate_percent`: monthly interest rate expressed as a percentage for display.
- `number_of_payments`: total number of monthly payments.
- `monthly_payment`: amount paid each month.
- `factor`: exponentiation result used in the payment formula.
- `amount_paid_back`: total of all monthly payments.
- `interest_paid`: total interest paid.

### Formula
`monthly_rate = annual_rate / 100.0 / 12.0`

## Testing Plan
- Test both programs using the assigned values.
- Test both programs again using different positive values.
- Calculate expected results before running the programs.
- Compare expected results with actual output and document any corrections.

## Test Results

### Compound Interest — Assigned Test
- Inputs: Principal = $1,000, Annual Rate = 4.25%, Compounding Periods = 12
- Expected Interest Earned: $43.34
- Actual Interest Earned: $43.34
- Expected Amount: $1,043.34
- Actual Amount: $1,043.34
- Result: PASS

### Compound Interest — Changed Test
- Inputs: Principal = $2,500, Annual Rate = 5.5%, Compounding Periods = 4
- Expected Interest Earned: $140.36
- Actual Interest Earned: $140.36
- Expected Amount: $2,640.36
- Actual Amount: $2,640.36
- Result: PASS

### Loan Payment — Assigned Test
- Inputs: Loan Amount = $10,000, Annual Rate = 12%, Payments = 36
- Expected Monthly Interest Rate: 1.00%
- Actual Monthly Interest Rate: 1.00%
- Expected Monthly Payment: $332.14
- Actual Monthly Payment: $332.14
- Expected Amount Paid Back: $11,957.15
- Actual Amount Paid Back: $11,957.15
- Expected Interest Paid: $1,957.15
- Actual Interest Paid: $1,957.15
- Result: PASS

### Loan Payment — Changed Test
- Inputs: Loan Amount = $5,000, Annual Rate = 6%, Payments = 24
- Expected Monthly Interest Rate: 0.50%
- Actual Monthly Interest Rate: 0.50%
- Expected Monthly Payment: $221.60
- Actual Monthly Payment: $221.60
- Expected Amount Paid Back: $5,318.47
- Actual Amount Paid Back: $5,318.47
- Expected Interest Paid: $318.47
- Actual Interest Paid: $318.47
- Result: PASS

## Code Explanations

### 1. Why must a percentage be divided by 100 before using it in a formula?
A percentage must be divided by 100 to convert it into decimal form. For example, an interest rate of 5% becomes 0.05. The formulas require decimal rates rather than whole percentage values.

### 2. How does `pow` represent exponentiation?
The `pow` function from the `<cmath>` library raises a number to a specified power. For example, `pow(2, 3)` calculates 2 raised to the third power, which equals 8.

### 3. What does the number of compounding periods change in the savings formula?
The number of compounding periods determines how often interest is added to the principal during the year. More frequent compounding generally produces more interest earned.

### 4. How is an annual interest rate converted to a monthly rate?
The annual percentage rate is divided by 100 to convert it into decimal form and then divided by 12 to calculate the monthly interest rate.

### 5. Why should `double` be used for these calculations?
The `double` data type supports decimal values and provides greater precision than an integer. This is important when calculating interest rates and financial amounts.

### 6. Why should calculations use full precision when money is displayed to two decimal places?
Calculations should retain full precision to avoid rounding errors accumulating throughout the program. The values should only be rounded when displayed to two decimal places.

### 7. How are the amount paid back and total interest calculated?
The amount paid back is calculated by multiplying the monthly payment by the total number of payments. Total interest is calculated by subtracting the original loan amount from the amount paid back.

### 8. Why are calculations stored in variables before being displayed?
Storing calculations in variables makes the program easier to read, understand, test, and maintain. It also separates the calculations from the output statements.

## Compilation and Running Instructions

Both programs can be compiled using a C++17 compiler.

### Compound Interest
```bash
g++ -std=c++17 -Wall -Wextra compound_interest.cpp -o compound_interest
./compound_interest
```

### Monthly Loan Payment
```bash
g++ -std=c++17 -Wall -Wextra loan_payment.cpp -o loan_payment
./loan_payment
```

Both programs were tested using OnlineGDB. All four tests produced the expected results.
