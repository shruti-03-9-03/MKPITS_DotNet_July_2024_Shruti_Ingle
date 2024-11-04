-- Table for BankTransaction
CREATE TABLE BankTransaction (
    id INT PRIMARY KEY,
    user_id INT,
    account_id INT,
    remarks VARCHAR(255),
    transaction_date DATE,
    FOREIGN KEY (account_id) REFERENCES Account(id)
);

