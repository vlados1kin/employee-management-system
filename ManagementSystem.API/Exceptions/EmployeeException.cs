namespace ManagementSystem.API.Exceptions;

public class EmployeeException : ArgumentException
{
    public EmployeeException(string message) : base(message)
    {
    }
}