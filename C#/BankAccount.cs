

    public class BankAccount
    {
       
         string Name;
         string accountNumber;
         string accountType;  
         decimal balance;     

        
        public void AccountDetails(string name, string number, string type, decimal initialBalance)
        {
            Name = name;
            accountNumber = number;
            accountType = type;
            balance = initialBalance;
        }

        
        public void Deposit(decimal amount)
        {
            if (amount > 0)
            {
                balance += amount;
                Console.WriteLine("the amount of balance is :"+balance);
            }
            else
            {
                Console.WriteLine("-bank balance is insufficient -");
            }
        }

        
        public void Withdraw(decimal amount)
        {
            if (amount > 0 && amount <= balance)
            {
                    balance -= amount;
                    Console.WriteLine("balance available is : "+ balance);
                
            }
            else
            {
                Console.WriteLine("Insufficient funds."+balance);
            }
        }

       
        public void DisplayAccount()
        {
            Console.WriteLine("The Name Of Account holder is : "+Name);
           Console.WriteLine("Account Number: "+accountNumber);
            Console.WriteLine("Account Type: "+accountType);
            Console.WriteLine("Balance: "+balance);
        }
    }

   
    public class Program
    {
        public static void Main()
        {
           
            BankAccount accountInfo = new BankAccount();
            accountInfo.AccountDetails("Shruti", "123456789", "Checking", 200);
            accountInfo.DisplayAccount();
            accountInfo.Deposit(500);
            accountInfo.Withdraw(200);
            accountInfo.DisplayAccount();
            Console.Read();
        }
    }
}