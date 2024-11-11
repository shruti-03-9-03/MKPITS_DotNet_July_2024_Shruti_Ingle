CREATE TABLE UserAccounts (
    UserId INT PRIMARY KEY IDENTITY(1,1),
    Password NVARCHAR(50) NOT NULL,
    FullName NVARCHAR(100) NOT NULL,
    DOB DATE,
    Contact NVARCHAR(15),
    Email NVARCHAR(100),
    Address NVARCHAR(255),
    BankType NVARCHAR(50),
    Aadhar NVARCHAR(12),
    State NVARCHAR(50),
    City NVARCHAR(50),
    Pincode NVARCHAR(6),
    Status NVARCHAR(20)
);
