create table state(
id int primary key,
name varchar(50) not null,
code int
);

-- Table for District
CREATE TABLE District (
    id INT PRIMARY KEY,
    state_id INT,
    name VARCHAR(50) NOT NULL,
    code INT,
    FOREIGN KEY (state_id) REFERENCES State(id)
);

-- Table for City
CREATE TABLE City (
    id INT PRIMARY KEY,
    district_id INT,
    name VARCHAR(50) NOT NULL,
    code INT,
    FOREIGN KEY (district_id) REFERENCES District(id)
);
-- Table for Branch
CREATE TABLE Branch (
    id INT PRIMARY KEY,
    branch_name VARCHAR(50) NOT NULL,
    branch_code INT,
    address VARCHAR(100),
    ifsc_code VARCHAR(20)
);

CREATE TABLE Account (
    id INT PRIMARY KEY,
    account_number VARCHAR(20) NOT NULL,
    branch_number INT,
    ifsc_code VARCHAR(20),
    account_type VARCHAR(50)
);


-- Table for BankTransaction
CREATE TABLE BankTransaction (
    id INT PRIMARY KEY,
    user_id INT,
    account_id INT,
    remarks VARCHAR(255),
    transaction_date DATE,
    FOREIGN KEY (account_id) REFERENCES Account(id)
);

