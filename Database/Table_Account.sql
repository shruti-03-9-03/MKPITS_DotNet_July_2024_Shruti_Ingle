CREATE TABLE Account (
    id INT PRIMARY KEY,
    account_number VARCHAR(20) NOT NULL,
    branch_number INT,
    ifsc_code VARCHAR(20),
    account_type VARCHAR(50)
);