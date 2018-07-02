# ATM
C++ console application. Emulates an ATM machine.

Concepts covered in program:
  - Object Oriented Programming
  - Inheritance
  - Polymorphism
    
    -> Virtual Functions
    
    -> Pure Virtual Functions
  - Dynamic Memory Allocation
  - Memory Deallocation
 
Instructions on running programming
  - Download Visual Studio 2017 IDE and install with C++ for setup. If on Mac or Linus OS, follow instructions below.
      -> For Mac: https://code.visualstudio.com/docs/setup/mac
      -> For Linux: https://code.visualstudio.com/docs/setup/linux
  - Once installed, clone repository onto machine and open file with ".sln" extension.
  - Press ctrl+F5 to run console application.
    
    
Sample Runs:
  - Enter c for checking; s for savings; any other character to quit: s
  - Enter customer name: aaa
  - Enter account number: 111111
  - Enter account beginning balance: 5000
  - Enter current monthly interest rate: .1
  - Enter total deposits: 2500
  - Balance after deposits: 7500
  - Enter total withdrawals: 400
  - Balance after withdrawals: 7100
  - Balance after interest: 7810
  - Enter c for checking; s for savings; any other character to quit: S
  - Enter customer name: bbb
  - Enter account number: 222222
  - Enter account beginning balance: 3000
  - Enter current monthly interest rate: .05
  - Enter total deposits: 10000
  - Balance after deposits: 13100
  - Enter total withdrawals: 5000
  - Balance after withdrawals: 8100
  - Balance after interest: 8505
  - Enter c for checking; s for savings; any other character to quit: s
  - Enter customer name: ccc
  - Enter account number: 333333
  - Enter account beginning balance: 5000
  - Enter current monthly interest rate: .1
  - Enter total deposits: 2500
  - Balance after deposits: 7500
  - Enter total withdrawals: 7501
  - Withdrawal not made -- balance too low
  - and no overdraft protection
  - Balance after interest: 8250
  - Enter c for checking; s for savings; any other character to quit: z

  - Accounts:
  - Savings Account:
  - Name: aaa
  - Account #: 111111
  - Balance: $ 7810

  - Savings Account:
  - Name: bbb
  - Account #: 222222
  - Balance: $ 8505

  - Savings Account:
  - Name: ccc
  - Account #: 333333
  - Balance: $ 8250

    
 Future Updates:
 
   - Make input validation more intelligent. Currently no checking for invalid inputs such as negative number.
   - When choosing "checking account" and asked if overdraft protection is desired, input must be a single letter 'n' or 'N'/ 'y' or 'Y'
      -> Will improve upon this soon
