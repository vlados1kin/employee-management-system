using ManagementSystem.API.Domain;
using ManagementSystem.API.Exceptions;

namespace ManagementSystem.API.Services;

public class EmployeeService
{
    private readonly List<Employee> _employees = new List<Employee>();

    public IEnumerable<Employee> GetEmployees()
    {
        return _employees;
    }

    public Employee? GetEmployee(Guid id)
    {
        int index = _employees.FindIndex(e => e.Id == id);
        if (index < 0)
        {
            return null;
        }

        return _employees[index];
    }

    public void PostEmployee(Employee employee)
    {
        int index = _employees.FindIndex(e => e.Id == employee.Id);
        if (index >= 0)
        {
            throw new EmployeeException("An employee with this Id already exists");
        }
        
        _employees.Add(employee);
    }

    public void PutEmployee(Guid id, Employee employee)
    {
        int index = _employees.FindIndex(e => e.Id == id);
        if (index < 0)
        {
            throw new EmployeeException("An employee with this Id does not exist");
        }

        _employees[index] = employee;
    }

    public void DeleteEmployee(Guid id)
    {
        int index = _employees.FindIndex(e => e.Id == id);
        if (index < 0)
        {
            throw new EmployeeException("An employee with this Id does not exist");
        }
        
        _employees.RemoveAt(index);
    }
}