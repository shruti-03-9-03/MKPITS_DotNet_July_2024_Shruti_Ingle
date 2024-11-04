-- Table for Branch
CREATE TABLE Branch (
    id INT PRIMARY KEY,
    branch_name VARCHAR(50) NOT NULL,
    branch_code INT,
    address VARCHAR(100),
    ifsc_code VARCHAR(20)
);