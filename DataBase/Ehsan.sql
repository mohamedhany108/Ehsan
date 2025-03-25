-- Create By Ahmed Mohamed Ahmed 
Go
	IF NOT EXISTS (SELECT name FROM sys.databases WHERE name = 'Ehsan')
		BEGIN
			CREATE DATABASE Ehsan;
		END
Go

Go
	Use Ehsan;
Go

