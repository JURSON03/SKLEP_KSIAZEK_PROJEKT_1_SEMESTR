CREATE TABLE [dbo].[Admin] (
    [Id]       INT           IDENTITY (1, 1) NOT NULL,
    [password] VARCHAR (MAX) NOT NULL,
    [money] INT NOT NULL, 
    PRIMARY KEY CLUSTERED ([Id] ASC)
);

